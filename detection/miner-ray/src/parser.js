const lodash = require('lodash');
const readline = require('readline');
const fs = require('fs');
const uuid = require('uuid/v4');
const serialijse = require('serialijse');
const { argv } = require('yargs')
	.options({
		file: {
			alias: 'f',
			type: 'string',
			describe: 'The file to run the detection on',
			demandOption: true
		}
	})
	.help();

const redis = require('redis');
const { promisify } = require('util');
const TOKENS = require('./token_constants');
const util = require('util');
const { resolve } = require('path');

const FILE_TO_READ = argv.file;

// Global Values keeping counts of everything
const ProgramDetails = {
	NumberOfFunctions: 0,
	Functions: {},
	Types: {},
	TableFunctions: [],
	Imports: [],
	Exports: [],
	DataSections: []
};

// ////////////////////// CLASS DEFINITIONS ////////////////////////

class FileLineReader {
	constructor(limit = 100) {
		this.limit = limit;
		this.Buffer = new Array(limit);
		this.bufferIndex = 0;
	}

	addLine(line) {
		this.Buffer[this.bufferIndex] = line;
		this.bufferIndex = (this.bufferIndex + 1) % this.limit;
	}

	[Symbol.iterator]() {
		let index = this.bufferIndex - 1;

		return {
			next: () => {
				const result = {
					value: this.Buffer[index],
					done: index == this.bufferIndex
				};
				index -= 1;
				if (index === -1) {
					index = this.limit - 1;
				}
				return result;
			}
		};
	}
}

class DataSection {
	constructor(startOffset, payload) {
		this.Start = startOffset;
		this.Payload = payload;
	}
}

class ImportDetails {
	constructor(name, type = TOKENS.FUNCTION_TOKEN) {
		this.Name = name;
		this.Type = type;
		this.FunctionType = null;
		this.ImportedName = null;
	}
}

class ExportDetails {
	constructor(name, type = TOKENS.FUNCTION_TOKEN) {
		this.Name = name;
		this.Type = type;
		this.ExportSource = null;
	}
}

class TypeDetails {
	constructor(name) {
		this.Name = name;
		this.Params = [];
		this.Result = null;
	}
}

class StackValue {
	constructor() {
		this.type = null;
		this.variableName = null;
	}

	isIMM() {
		if (this.type === 'IMM') {
			return true;
		}

		return false;
	}

	isOP() {
		if (this.type === 'OP') {
			return true;
		}

		return false;
	}

	isREF() {
		if (this.type === 'REF') {
			return true;
		}

		return false;
	}

	isSYM() {
		if (this.type === 'SYM') {
			return true;
		}

		return false;
	}

	updateReference() {
		return this;
	}

	containsConstantValue(constantValue) {
		return false;
	}
}

class SymbolicValue extends StackValue {
	constructor(name, lineNumberSet) {
		super();
		this.name = name;
		this.type = 'SYM';
		this.lineNumberSet = lineNumberSet;
	}

	toString() {
		return `${this.name} (line ${this.lineNumberSet})`;
	}

	updateReference(callArgs) {
		for (const paramName in callArgs) {
			if (this.name == paramName) {
				return callArgs[paramName];
			}
		}

		return this;
	}
}

class Operation extends StackValue {
	constructor(opCode, dataType, lValue, rValue, lineNumberSet) {
		super();

		this.operator = opCode;
		this.lValue = lValue;
		this.rValue = rValue;
		this.dataType = dataType;
		this.lineNumberSet = lineNumberSet;

		this.type = 'OP';
	}

	typeResolver(dataType1, dataType2) {
		if (dataType1 == dataType2) {
			return dataType1;
		}

		if (dataType1 == 'i32' && dataType2 == 'i64') {
			return dataType2;
		}

		if (dataType1 == 'i64' && dataType2 == 'i32') {
			return dataType1;
		}
	}

	getUnsignedInt(int) {
		return new Uint32Array([ int ])[0];
	}

	containsConstantValue(constantValue) {
		let containsConstant = false;

		let innerOperations = new Queue();
		innerOperations.enqueue(this);

		while (!innerOperations.isEmpty() && innerOperations.items.length < 2000) {
			const val = innerOperations.dequeue();

			if (val.isIMM()) {
				if (val.value === constantValue) {
					containsConstant = true;
					break;
				}
			} else if (val.isOP()) {
				innerOperations.enqueue(val.lValue);
				if (val.rValue != null) {
					innerOperations.enqueue(val.rValue);
				}
			} else if (val.isREF()) {
				innerOperations.enqueue(val.Address);
			}
		}

		innerOperations = null;
		return containsConstant;
	}

	execute() {
		const left = this.lValue;
		const right = this.rValue;

		if (this.lValue.isIMM() && (this.rValue == null || (this.rValue != null && this.rValue.isIMM()))) {
			let newType;
			switch (this.operator) {
				case 'add':
					newType = this.typeResolver(this.lValue.dataType, this.rValue.dataType);
					return new ImmediateValue(this.lValue.value + this.rValue.value, newType, this.lineNumberSet);
				case 'sub':
					newType = this.typeResolver(this.lValue.dataType, this.rValue.dataType);
					return new ImmediateValue(this.lValue.value - this.rValue.value, newType, this.lineNumberSet);
				case 'mul':
					newType = this.typeResolver(this.lValue.dataType, this.rValue.dataType);
					return new ImmediateValue(this.lValue.value * this.rValue.value, newType, this.lineNumberSet);
				case 'div_s':
					newType = this.typeResolver(this.lValue.dataType, this.rValue.dataType);
					return new ImmediateValue(this.lValue.value / this.rValue.value, newType, this.lineNumberSet);
				case 'div_u': // NEED TO FIX THIS
					newType = this.typeResolver(this.lValue.dataType, this.rValue.dataType);
					return new ImmediateValue(
						this.getUnsignedInt(this.lValue.value) / this.getUnsignedInt(this.rValue.value),
						newType,
						this.lineNumberSet
					);
				case 'shl':
					newType = this.typeResolver(this.lValue.dataType, this.rValue.dataType);
					return new ImmediateValue(this.rValue.value << this.lValue.value, newType, this.lineNumberSet);
				case 'shr_s':
					newType = this.typeResolver(this.lValue.dataType, this.rValue.dataType);
					return new ImmediateValue(this.rValue.value >> this.lValue.value, newType, this.lineNumberSet);
				case 'shr_u':
					newType = this.typeResolver(this.lValue.dataType, this.rValue.dataType);
					return new ImmediateValue(this.rValue.value >>> this.lValue.value, newType, this.lineNumberSet);
				case 'or':
					newType = this.typeResolver(this.lValue.dataType, this.rValue.dataType);
					return new ImmediateValue(this.rValue.value | this.lValue.value, newType, this.lineNumberSet);
				case 'xor':
					newType = this.typeResolver(this.lValue.dataType, this.rValue.dataType);
					return new ImmediateValue(this.rValue.value ^ this.lValue.value, newType, this.lineNumberSet);
				case 'and':
					newType = this.typeResolver(this.lValue.dataType, this.rValue.dataType);
					return new ImmediateValue(this.rValue.value & this.lValue.value, newType, this.lineNumberSet);
				case 'rem_u':
					newType = this.typeResolver(this.lValue.dataType, this.rValue.dataType);
					return new ImmediateValue(this.lValue.value % this.rValue.value, newType, this.lineNumberSet);

				// case 'eq':
				//   newType = this.typeResolver(this.lValue.dataType, this.rValue.dataType);
				//   return new ImmediateValue(this.lValue.value == this.rValue.value ? 1 : 0, newType, this.lineNumberSet);
				// case 'neq':
				//   newType = this.typeResolver(this.lValue.dataType, this.rValue.dataType);
				//   return new ImmediateValue(this.lValue.value != this.rValue.value ? 1 : 0, newType, this.lineNumberSet);
				// case 'lt_s':
				//   newType = this.typeResolver(this.lValue.dataType, this.rValue.dataType);
				//   return new ImmediateValue(this.lValue.value < this.rValue.value ? 1 : 0, newType, this.lineNumberSet);
				// case 'le_s':
				//   newType = this.typeResolver(this.lValue.dataType, this.rValue.dataType);
				//   return new ImmediateValue(this.lValue.value <= this.rValue.value ? 1 : 0, newType, this.lineNumberSet);
				// case 'lt_u':
				//   newType = this.typeResolver(this.lValue.dataType, this.rValue.dataType);
				//   return new ImmediateValue(
				//     this.getUnsignedInt(this.lValue.value) < this.getUnsignedInt(this.rValue.value) ? 1 : 0,
				//     newType,
				//     this.lineNumberSet,
				//   );
				// case 'le_u':
				//   newType = this.typeResolver(this.lValue.dataType, this.rValue.dataType);
				//   return new ImmediateValue(
				//     this.getUnsignedInt(this.lValue.value) <= this.getUnsignedInt(this.rValue.value) ? 1 : 0,
				//     newType,
				//     this.lineNumberSet,
				//   );
				// case 'gt_s':
				//   newType = this.typeResolver(this.lValue.dataType, this.rValue.dataType);
				//   return new ImmediateValue(this.lValue.value > this.rValue.value ? 1 : 0, newType, this.lineNumberSet);
				// case 'ge_s':
				//   newType = this.typeResolver(this.lValue.dataType, this.rValue.dataType);
				//   return new ImmediateValue(this.lValue.value >= this.rValue.value ? 1 : 0, newType, this.lineNumberSet);
				// case 'gt_u':
				//   newType = this.typeResolver(this.lValue.dataType, this.rValue.dataType);
				//   return new ImmediateValue(
				//     this.getUnsignedInt(this.lValue.value) > this.getUnsignedInt(this.rValue.value) ? 1 : 0,
				//     newType,
				//     this.lineNumberSet,
				//   );
				// case 'ge_u':
				//   newType = this.typeResolver(this.lValue.dataType, this.rValue.dataType);
				//   return new ImmediateValue(
				//     this.getUnsignedInt(this.lValue.value) > this.getUnsignedInt(this.rValue.value) ? 1 : 0,
				//     newType,
				//     this.lineNumberSet,
				//   );
				case 'eqz':
					newType = this.lValue.dataType;
					return new ImmediateValue(this.lValue.value == 0 ? 1 : 0, newType, this.lineNumberSet);
				default:
					return this;
			}
		} else if (left.isOP() && right != null) {
			if (this.operator == 'sub') {
				if (left.operator == 'add') {
					if (lodash.isEqual(left.lValue, right)) {
						return left.rValue;
					}
					if (lodash.isEqual(left.rValue, right)) {
						return left.lValue;
					}
				}
			}
		} else if (right != null && right.isOP()) {
			if (this.operator == 'sub') {
				if (right.operator == 'add') {
					if (lodash.isEqual(right.lValue, left)) {
						return right.rValue;
					}
					if (lodash.isEqual(right.rValue, left)) {
						return right.lValue;
					}
				}
			}
		}

		return this;
	}

	toString() {
		const leftVal = this.lValue.toString();
		const rightVal = this.rValue == null ? '' : this.rValue.toString();

		// Make fancy with +,-,/, ... later
		let operationCode = this.operator;
		switch (operationCode) {
			case 'add':
				operationCode = '+';
				break;
			case 'sub':
				operationCode = '-';
				break;
			case 'mul':
				operationCode = '*';
				break;
			case 'or':
				operationCode = '|';
				break;
			case 'xor':
				operationCode = '^';
				break;
			case 'shl':
				operationCode = '<<';
				break;
			case 'shr_u':
			case 'shr_s':
				operationCode = '>>';
				break;
		}
		return `${leftVal} ${operationCode} ${rightVal}`;
	}

	getSymbolicValue() {
		let symbolicValue = null;

		let innerOperations = new Queue();
		innerOperations.enqueue(this);

		while (!innerOperations.isEmpty() && innerOperations.items.length < 2000) {
			const val = innerOperations.dequeue();

			if (val.isSYM()) {
				symbolicValue = val;
				break;
			} else if (val.isOP()) {
				innerOperations.enqueue(val.lValue);
				if (val.rValue != null) {
					innerOperations.enqueue(val.rValue);
				}
			} else if (val.isREF()) {
				innerOperations.enqueue(val.Address);
			}
		}

		innerOperations = null;
		return symbolicValue;
	}

	updateReference(callArgs) {
		const operationStack = [];

		for (const k of Object.keys(callArgs)) {
			const callArg = callArgs[k];
			if (lodash.isEqual(this, callArg)) {
				return this;
			}
		}
		operationStack.push([ this.lValue, this, 'lValue' ]);
		operationStack.push([ this.rValue, this, 'rValue' ]);

		while (operationStack.length > 0 && operationStack.length < 2000) {
			const opGroup = operationStack.pop();
			const op = opGroup[0];
			const parentOp = opGroup[1];
			const parentOpField = opGroup[2];

			if (op.isOP()) {
				operationStack.push([ op.lValue, op, 'lValue' ]);
				if (op.rValue != null) {
					operationStack.push([ op.rValue, op, 'rValue' ]);
				}
			} else if (op.isSYM()) {
				parentOp[parentOpField] = op.updateReference(callArgs);
			} else if (op.isREF()) {
				operationStack.push([ op.Address, op, 'Address' ]);
			}
		}
		return this;
	}
}

class ImmediateValue extends StackValue {
	constructor(value, dataType, lineNumberSet) {
		super();

		this.value = parseInt(value);
		this.dataType = dataType;
		this.lineNumberSet = lineNumberSet;
		this.type = 'IMM';
	}

	toString() {
		return `${this.value}`;
	}

	containsConstantValue(constantValue) {
		if (this.value === constantValue) {
			return true;
		} else {
			return false;
		}
	}
}

class MemoryReference extends StackValue {
	// very similar to Symbolic Reference but differentiated for address details
	constructor(location, align, offset, lineNumberSet) {
		super();

		this.Address = location;
		this.Align = align; // number of bytes to load/store
		this.Offset = offset;
		this.Value = null;
		this.type = 'REF';
		this.lineNumberSet = lineNumberSet;
	}

	toString() {
		const offset = this.Offset == null ? '' : `+ ${this.Offset} `;
		return `[${this.Address} ${offset}: (${this.Align})]`;
	}

	updateReference(callArgs) {
		this.Address = this.Address.updateReference(callArgs);

		return this;
	}
}

class VariableReference {
	constructor(initialValue, lineNumberSet) {
		this.value = initialValue;
		this.lineNumberSet = lineNumberSet;
		this.previousValues = [];
	}

	update(newValue, lineNumberSet) {
		this.previousValues.push({ Value: this.value, Line: this.lineNumberSet });
		this.lineNumberSet = lineNumberSet;
		this.value = newValue;
	}
}

class Abstraction {
	constructor(type) {
		this.Start = lineNumber;
		this.End = null;
		this.AbstractionType = type;
		this.InnerAbstractions = [];
		this.ID = uuid();
		this.ParentAbstraction = null;
	}

	end() {
		this.End = lineNumber;
	}

	canMerge() {
		return false;
	}
}

class SetAbstraction extends Abstraction {
	constructor(lvalue, rvalue) {
		super('SET');
		this.End = this.Start;
		this.LValue = lvalue;
		this.RValue = rvalue;
	}
}

class BlockAbstraction extends Abstraction {
	constructor() {
		super('BLOCK');
	}
}

class StoreAbstraction extends Abstraction {
	constructor(lvalue, rvalue, align, offset, type, opCode) {
		super('STORE');
		this.End = this.Start;
		this.MemoryLocation = lvalue;
		this.Value = rvalue;
		this.Align = align;
		this.Offset = offset;
		this.DataType = type;
		this.OperationCode = opCode;
	}

	canMerge(otherAbstraction) {
		// Can merge with other STORE and MEMCPY
		if (otherAbstraction.AbstractionType == 'STORE') {
			// If values are Immediates, Check if memory locations are adjacent
			if (this.MemoryLocation.isIMM() && otherAbstraction.MemoryLocation.isIMM()) {
				if (Math.abs(this.MemoryLocation.Value - otherAbstraction.MemoryLocation.Value <= 8)) {
					return true;
				} else {
					return false;
				}
			}
			// Check the offsets instead to see if they are consecutive
			if (
				this.Offset != null &&
				otherAbstraction.Offset != null &&
				Math.abs(this.Offset - otherAbstraction.Offset) <= 8
			) {
				return true;
			} else if (
				(this.Offset == null && [ 1, 2, 4, 8 ].includes(otherAbstraction.Offset)) ||
				([ 1, 2, 4, 8 ].includes(this.Offset) && otherAbstraction.Offset == null)
			) {
				if (lodash.isEqual(this.MemoryLocation, otherAbstraction.MemoryLocation)) {
					return true;
				} else {
					return false;
				}
			} else {
				return false;
			}
		} else if (otherAbstraction.AbstractionType == 'MEMCPY') {
			const possibleAdjacentItem =
				otherAbstraction.InnerAbstractions[otherAbstraction.InnerAbstractions.length - 1];

			if (this.MemoryLocation.isIMM() && possibleAdjacentItem.MemoryLocation.isIMM()) {
				if (Math.abs(this.MemoryLocation.Value - possibleAdjacentItem.MemoryLocation.Value <= 8)) {
					return true;
				} else {
					return false;
				}
			}
			// Check the offsets instead to see if they are consecutive
			if (
				this.Offset != null &&
				possibleAdjacentItem.Offset != null &&
				Math.abs(this.Offset - possibleAdjacentItem.Offset) <= 8
			) {
				return true;
			}
			if (
				(this.Offset == null && [ 1, 2, 4, 8 ].includes(possibleAdjacentItem.Offset)) ||
				([ 1, 2, 4, 8 ].includes(this.Offset) && possibleAdjacentItem.Offset == null)
			) {
				if (lodash.isEqual(this.MemoryLocation, possibleAdjacentItem.MemoryLocation)) {
					return true;
				}
				return false;
			} else {
				return false;
			}
		}
	}

	merge(otherStoreAbstraction) {
		const newMemCpyAbstraction = new MemCpyAbstraction(this);
		newMemCpyAbstraction.merge(otherStoreAbstraction);

		return newMemCpyAbstraction;
	}
}

class ForAbstraction extends Abstraction {
	constructor() {
		super('FOR');

		this.Condition = null;
		this.IncrementExpression = null;
		this.DecrementExpression = null;
		this.DecrementConstant = null;
		this.IncrementConstant = null;
	}

	Get_Condition() {
		if (this.Condition == null) {
			const innerAbstractionsToCheck = new Queue();
			innerAbstractionsToCheck.enqueue(this);
			let currentLevel = 0;
			while (!innerAbstractionsToCheck.isEmpty() && this.Condition == null) {
				const currentAbs = innerAbstractionsToCheck.dequeue();
				currentLevel++;
				for (let i = currentAbs.InnerAbstractions.length - 1; i >= 0; i--) {
					const abstraction = currentAbs.InnerAbstractions[i];

					if (abstraction.AbstractionType == 'IF') {
						this.Condition = abstraction.Condition;
						break;
					} else if (abstraction.AbstractionType == 'BLOCK') {
						if (currentLevel < 2) {
							innerAbstractionsToCheck.enqueue(abstraction);
						}
					}
				}
			}
		}

		return this.Condition;
	}

	Dec_Expr() {
		if (this.DecrementExpression != null) return this.DecrementExpression;

		const innerAbstractionsToSearch = new Queue();
		innerAbstractionsToSearch.enqueue(this);
		while (!innerAbstractionsToSearch.isEmpty() && this.DecrementExpression == null) {
			const currentAbs = innerAbstractionsToSearch.dequeue();
			for (let i = currentAbs.InnerAbstractions.length - 1; i >= 0; i--) {
				const abstraction = currentAbs.InnerAbstractions[i];

				if (abstraction.AbstractionType == 'SET') {
					if (abstraction.RValue.isOP()) {
						// check lValue and RValue for Immediate
						if (abstraction.RValue.operator == 'add') {
							if (abstraction.RValue.lValue.isIMM()) {
								if (abstraction.RValue.lValue.value < 0) {
									this.DecrementExpression = abstraction;
									this.DecrementConstant = abstraction.RValue.lValue.value;
								}
							} else if (abstraction.RValue.rValue.isIMM()) {
								if (abstraction.RValue.rValue.value < 0) {
									this.DecrementExpression = abstraction;
									this.DecrementConstant = abstraction.RValue.rValue.value;
									break;
								}
							}
						} else if (abstraction.RValue.operator == 'sub') {
							if (abstraction.RValue.lValue.isIMM()) {
								if (abstraction.RValue.lValue.value > 0) {
									this.DecrementExpression = abstraction;
									this.DecrementConstant = abstraction.RValue.lValue.value;
									break;
								}
							} else if (abstraction.RValue.rValue.isIMM()) {
								if (abstraction.RValue.rValue.value > 0) {
									this.DecrementExpression = abstraction;
									this.DecrementConstant = abstraction.RValue.lValue.value;
									break;
								}
							}
						}
					}
				} else if (abstraction.AbstractionType == 'BLOCK') {
					innerAbstractionsToSearch.enqueue(abstraction);
				}
			}
		}

		return this.DecrementExpression;
	}

	Get_Decrement() {
		if (this.DecrementConstant == null) {
			this.Dec_Expr();
		}

		return this.DecrementConstant;
	}

	Inc_Expr() {
		if (this.IncrementExpression != null) return this.IncrementExpression;

		const innerAbstractionsToSearch = new Queue();
		innerAbstractionsToSearch.enqueue(this);
		while (!innerAbstractionsToSearch.isEmpty() && this.IncrementExpression == null) {
			const currentAbs = innerAbstractionsToSearch.dequeue();
			for (let i = currentAbs.InnerAbstractions.length - 1; i >= 0; i--) {
				const abstraction = currentAbs.InnerAbstractions[i];

				if (abstraction.AbstractionType == 'SET') {
					if (abstraction.RValue.isOP()) {
						if (abstraction.RValue.operator == 'add') {
							if (abstraction.RValue.lValue.isIMM()) {
								if (abstraction.RValue.lValue.value > 0) {
									this.IncrementExpression = abstraction;
									this.IncrementConstant = abstraction.RValue.lValue.value;
									break;
								}
							} else if (abstraction.RValue.rValue.isIMM()) {
								if (abstraction.RValue.rValue.value > 0) {
									this.IncrementExpression = abstraction;
									this.IncrementConstant = abstraction.RValue.rValue.value;
									break;
								}
							}
						}
					}
				} else if (abstraction.AbstractionType == 'BLOCK') {
					innerAbstractionsToSearch.enqueue(abstraction);
				}
			}
		}

		return this.IncrementExpression;
	}

	Get_Increment() {
		if (this.IncrementConstant == null) {
			this.Inc_Expr();
		}

		return this.IncrementConstant;
	}

	end() {
		super.end();
		this.Get_Condition();
		this.Dec_Expr();
		this.Inc_Expr();
	}
}

class CallAbstraction extends Abstraction {
	constructor(functionName, argsPassed) {
		super('CALL');
		this.End = this.Start;
		this.FunctionName = functionName;
		this.Arguments = argsPassed;
		this.Scope = null;
	}
}

class CallIndirectAbstraction extends Abstraction {
	constructor(type) {
		super('CALL_INDIRECT');
		this.FunctionType = type;
		this.Paths = [];
	}
}

class IfAbstraction extends Abstraction {
	constructor(condition, from_br_if = false) {
		super('IF');
		this.Condition = condition;
		this.ElseAbstractions = [];
		this.From_br_if = from_br_if;
	}
}

class MemCpyAbstraction extends Abstraction {
	constructor(firstStore) {
		super('MEMCPY');
		this.End = this.Start;
		this.InnerAbstractions.push(firstStore);

		this.Size = null;
	}

	merge(storeAbstraction) {
		this.InnerAbstractions.push(storeAbstraction);
		this.End = lineNumber;
		return this;
	}

	GetDestArg() {
		// look at first internal STORE abstraction
		const sampleStoreAbstraction = this.InnerAbstractions[0];

		return sampleStoreAbstraction.MemoryLocation;
	}

	GetSourceArg() {
		// look at first internal STORE abstraction
		const sampleStoreAbstraction = this.InnerAbstractions[0];
		return sampleStoreAbstraction.Value;
	}

	GetSizeArg() {
		if (this.Size != null) {
			return this.Size;
		}

		const firstStore = this.InnerAbstractions[0];
		this.Size = this.InnerAbstractions.length * firstStore.Align;
		return this.InnerAbstractions.length * firstStore.Align;
	}

	UpdateWithCallArguments() {
		const callArguments = this.AbstractionCallArguments();
		if (callArguments != null) {
			if (this.Size == null) {
				this.GetSizeArg();
			}
			if (this.Size.updateReference != null) {
				this.Size = this.Size.updateReference(callArguments);
			}

			this.InnerAbstractions.forEach((abstr) => {
				if (abstr.Value != null) {
					abstr.Value = abstr.Value.updateReference(callArguments);
				}
				abstr.MemoryLocation = abstr.MemoryLocation.updateReference(callArguments);
			});
		}
	}

	AbstractionCallArguments() {
		if (this.ParentAbstraction != null) {
			let abstraction = this.ParentAbstraction;
			while (abstraction != null) {
				if (abstraction.AbstractionType == 'CALL') {
					return abstraction.Arguments;
				}

				abstraction = abstraction.ParentAbstraction;
			}
		}
		return null;
	}

	IsMemSet() {
		if (this.InnerAbstractions.length < 2) {
			if (this.InnerAbstractions[0].Value.isIMM()) {
				return true;
			}
			const callArguments = this.AbstractionCallArguments();
			if (callArguments != null) {
				this.InnerAbstractions[0].Value = this.InnerAbstractions[0].Value.updateReference(callArguments);
				if (this.InnerAbstractions[0].Value.isOP()) {
					this.InnerAbstractions[0].Value = this.InnerAbstractions[0].Value.execute();
					if (this.InnerAbstractions[0].Value.isIMM()) {
						return true;
					}
				}
			}
			return false;
		}

		let firstMidpointIndex = Math.floor(this.InnerAbstractions.length / 2);
		const secondMidpointIndex = Math.ceil(this.InnerAbstractions.length / 2);

		if (firstMidpointIndex == secondMidpointIndex) {
			firstMidpointIndex -= 1;
		}

		const firstMidpoint = this.InnerAbstractions[firstMidpointIndex];
		const secondMidpoint = this.InnerAbstractions[secondMidpointIndex];

		let isMemSet = false;
		// Check if Value is Immediate
		if (firstMidpoint.Value.isIMM()) {
			if (secondMidpoint.Value.isIMM()) {
				isMemSet = true;
			}
		} else if (firstMidpoint.Value.isREF()) {
			if (secondMidpoint.Value.isREF()) {
				if (lodash.isEqual(firstMidpoint.Value, secondMidpoint.Value)) {
					isMemSet = true;
				}
			}
		}

		return isMemSet;
	}
}

class VirtualState {
	constructor() {
		this.LocalVariables = {};
		this.GlobalVariables = {};
		this.VirtualStack = [];
		this.LinearMemory = {
			SymbolicLocations: []
		};
	}

	push(valueToPush) {
		this.VirtualStack.push(valueToPush);
	}

	pop() {
		return this.VirtualStack.pop();
	}

	getLocalVariable(varName) {
		if (!this.LocalVariables[varName]) {
			const newSymbolicValue = new SymbolicValue(varName, lineNumber);
			const newVarReference = new VariableReference(newSymbolicValue, lineNumber);
			this.LocalVariables[varName] = newVarReference;
		}

		const newVar = lodash.clone(this.LocalVariables[varName].value);
		newVar.variableName = varName;
		return newVar;
	}

	getGlobalVariable(varName) {
		if (!this.GlobalVariables[varName]) {
			const newSymbolicValue = new SymbolicValue(varName, lineNumber);
			const newVarReference = new VariableReference(newSymbolicValue, lineNumber);
			this.GlobalVariables[varName] = newVarReference;
		}

		const newVar = lodash.clone(this.GlobalVariables[varName].value);
		newVar.variableName = varName;
		return newVar;
	}

	setGlobalVariable(varName, valueToSet) {
		if (!this.GlobalVariables[varName]) {
			const newVarReference = new VariableReference(valueToSet, lineNumber);
			this.GlobalVariables[varName] = newVarReference;
		} else {
			this.GlobalVariables[varName].update(valueToSet, lineNumber);
		}
	}

	setLocalVariable(varName, valueToSet) {
		if (!this.LocalVariables[varName]) {
			const newVarReference = new VariableReference(valueToSet, lineNumber);
			this.LocalVariables[varName] = newVarReference;
		} else {
			this.LocalVariables[varName].update(valueToSet, lineNumber);
		}
	}

	storeMemory(location, align, valueToSet) {
		if (!this.LinearMemory[location]) {
			const newVarReference = new VariableReference(valueToSet, lineNumber);
			this.LinearMemory[location] = newVarReference;
		} else {
			this.LinearMemory[location].update(valueToSet, lineNumber);
		}
	}
}

class VirtualStateManager {
	constructor() {
		this.VirtualStates = [ [ new VirtualState() ] ];
		this.ContextBreakStack = [];

		this.Abstractions = [];
		this.CurrentAbstractionList = this.Abstractions;
		this.AbstractionStack = [];
		this.UpperAbstraction = null;
	}

	addAbstraction(abstraction) {
		if (this.AbstractionStack.length > 0) {
			abstraction.ParentAbstraction = this.UpperAbstraction;
		}
		this.CurrentAbstractionList.push(abstraction);
	}

	moveContextIntoAbstraction(abstraction) {
		this.addAbstraction(abstraction);
		this.AbstractionStack.push(this.CurrentAbstractionList);
		this.CurrentAbstractionList = abstraction.InnerAbstractions;
		this.UpperAbstraction = abstraction;
	}

	moveContextToElse() {
		this.moveContextUp();
		const ifAbstraction = this.CurrentAbstractionList[this.CurrentAbstractionList.length - 1];
		this.AbstractionStack.push(this.CurrentAbstractionList);
		this.CurrentAbstractionList = ifAbstraction.ElseAbstractions;
		this.UpperAbstraction = ifAbstraction;
	}

	moveContextUp() {
		const newStackContext = this.AbstractionStack.pop();
		if (newStackContext != null) {
			this.CurrentAbstractionList = newStackContext;
		}

		if (this.AbstractionStack.length > 0) {
			const previousAbstractionLevel = this.AbstractionStack[this.AbstractionStack.length - 1];
			this.UpperAbstraction = previousAbstractionLevel[previousAbstractionLevel.length - 1];
		} else {
			this.UpperAbstraction = null;
		}

		const lastContextedAbstraction = this.CurrentAbstractionList[this.CurrentAbstractionList.length - 1];

		//Convert br_if into For
		if (lastContextedAbstraction.AbstractionType == 'FOR') {
			if (lastContextedAbstraction.Condition == null) {
				if (lastContextedAbstraction.InnerAbstractions.length > 0) {
					const lastInnerAbstraction =
						lastContextedAbstraction.InnerAbstractions[
							lastContextedAbstraction.InnerAbstractions.length - 1
						];
					if (lastInnerAbstraction.AbstractionType === 'IF') {
						lastContextedAbstraction.Condition = lastInnerAbstraction.Condition;
					}
				}
			}
		}

		lastContextedAbstraction.end();
	}

	handleConst(value, dataType) {
		const newImmediateValue = new ImmediateValue(value, dataType, lineNumber);
		this.VirtualStates[this.VirtualStates.length - 1].forEach((activeState) => {
			activeState.push(newImmediateValue);
		}, this);
	}

	handleBinaryOperation(token) {
		this.VirtualStates[this.VirtualStates.length - 1].forEach((activeState) => {
			const rightValue = activeState.pop();
			const leftValue = activeState.pop();
			const dataType_opCode = token.split('.');

			let newOperation = new Operation(dataType_opCode[1], dataType_opCode[0], leftValue, rightValue, lineNumber);
			newOperation = newOperation.execute();
			activeState.push(newOperation);
		}, this);
	}

	handleUnaryOperation(token) {
		this.VirtualStates[this.VirtualStates.length - 1].forEach((activeState) => {
			const leftValue = activeState.pop();
			const dataType_opCode = token.split('.');

			let newOperation = new Operation(dataType_opCode[1], dataType_opCode[0], leftValue, null, lineNumber);
			newOperation = newOperation.execute();
			activeState.push(newOperation);
		}, this);
	}

	handleGetLocal(token, nextToken) {
		this.VirtualStates[this.VirtualStates.length - 1].forEach((activeState) => {
			const varName = nextToken; // tokens[++currentTokenIndex];
			const valueToPush = activeState.getLocalVariable(varName);
			activeState.push(valueToPush);
		}, this);
	}

	handleGetGlobal(token, nextToken) {
		this.VirtualStates[this.VirtualStates.length - 1].forEach((activeState) => {
			const varName = nextToken;
			const valueToPush = activeState.getGlobalVariable(varName);
			activeState.push(valueToPush);
		}, this);
	}

	handleSetLocal(token, nextToken) {
		this.VirtualStates[this.VirtualStates.length - 1].forEach((activeState, index) => {
			const varName = nextToken;
			const newVal = activeState.pop();

			if (index == 0) {
				const newSetAbstraction = new SetAbstraction(varName, newVal);
				this.addAbstraction(newSetAbstraction);
			}

			activeState.setLocalVariable(varName, newVal);
		}, this);
	}

	handleTeeLocal(token, nextToken) {
		this.handleSetLocal(token, nextToken);
		this.handleGetLocal(token, nextToken);
	}

	handleTeeGlobal(token, nextToken) {
		this.handleSetGlobal(token, nextToken);
		this.handleGetGlobal(token, nextToken);
	}

	handleSetGlobal(token, nextToken) {
		this.VirtualStates[this.VirtualStates.length - 1].forEach((activeState, index) => {
			const varName = nextToken;
			const newVal = activeState.pop();

			if (index == 0) {
				const newSetAbstraction = new SetAbstraction(varName, newVal);
				this.addAbstraction(newSetAbstraction);
			}

			activeState.setGlobalVariable(varName, newVal);
		}, this);
	}

	handleLoad(token, nextToken, secondToken) {
		this.VirtualStates[this.VirtualStates.length - 1].forEach((activeState) => {
			const location = activeState.pop();
			let align = null;
			let offset = null;
			// Handle offset and align
			if (nextToken != null) {
				const splitToken = nextToken.split('=');
				if (splitToken[0] == 'offset') {
					offset = parseInt(splitToken[1]);
				} else if (splitToken[0] == 'align') {
					align = parseInt(splitToken[1]);
				}
			}

			if (secondToken != null) {
				const splitToken = secondToken.split('=');
				if (splitToken[0] == 'offset') {
					offset = parseInt(splitToken[1]);
				} else if (splitToken[0] == 'align') {
					align = parseInt(splitToken[1]);
				}
			}

			if (align == null) {
				const dataType = token.split('.')[0];
				switch (dataType) {
					case 'i32':
					case 'f32':
						align = 4;
						break;
					case 'i64':
					case 'f64':
						align = 8;
						break;
				}
			}

			const newMemoryRef = new MemoryReference(location, align, offset, lineNumber);

			activeState.push(newMemoryRef);
		}, this);
	}

	handleDrop() {
		this.VirtualStates[this.VirtualStates.length - 1].forEach((activeState) => {
			activeState.pop();
		}, this);
	}

	handleStore(token, nextToken, secondToken) {
		this.VirtualStates[this.VirtualStates.length - 1].forEach((activeState, index) => {
			const valueToStore = activeState.pop();
			const location = activeState.pop();
			const opType = token.split('.')[0];
			const opCode = token.split('.')[1];
			let align = null;
			let offset = null;
			// Handle offset and align
			if (nextToken != null) {
				const splitToken = nextToken.split('=');
				if (splitToken[0] == 'offset') {
					offset = parseInt(splitToken[1]);
				} else if (splitToken[0] == 'align') {
					align = parseInt(splitToken[1]);
				}
			}

			if (secondToken != null) {
				const splitToken = secondToken.split('=');
				if (splitToken[0] == 'offset') {
					offset = parseInt(splitToken[1]);
				} else if (splitToken[0] == 'align') {
					align = parseInt(splitToken[1]);
				}
			}

			if (align == null) {
				if (opCode == 'store') {
					switch (opType) {
						case 'i32':
						case 'f32':
							align = 4;
							break;
						case 'i64':
						case 'f64':
							align = 8;
							break;
					}
				} else if (opCode == 'store8') {
					align = 1;
				} else if (opCode == 'store16') {
					align = 2;
				} else if (opCode == 'store32') {
					align = 4;
				}
			}

			if (index == 0) {
				const newStoreAbstraction = new StoreAbstraction(location, valueToStore, align, offset, opType, opCode);

				let previousAbstraction;

				previousAbstraction = this.CurrentAbstractionList.pop();

				if (previousAbstraction != null && newStoreAbstraction.canMerge(previousAbstraction)) {
					previousAbstraction = previousAbstraction.merge(newStoreAbstraction);
					this.addAbstraction(previousAbstraction);
				} else {
					if (previousAbstraction != null) {
						this.addAbstraction(previousAbstraction);
					}
					this.addAbstraction(newStoreAbstraction);
				}
			}

			if (location.isIMM()) {
				activeState.storeMemory(location.value, align, valueToStore);
			} else {
				const newSymbolicMemoryStore = new MemoryReference(location, align, offset, lineNumber);
				newSymbolicMemoryStore.Value = valueToStore;

				activeState.LinearMemory.SymbolicLocations.push(newSymbolicMemoryStore);
			}
		}, this);
	}

	handleIf() {
		// const clonedCurrentStates = lodash.cloneDeep(this.VirtualStates[this.VirtualStates.length - 1]);
		// this.VirtualStates.push(clonedCurrentStates);

		this.ContextBreakStack.push(TOKENS.IF_TOKEN);

		const conditionDetails = this.VirtualStates[this.VirtualStates.length - 1][0].pop();
		this.VirtualStates[this.VirtualStates.length - 1][0].push(conditionDetails);

		const newIfAbstraction = new IfAbstraction(conditionDetails);
		this.moveContextIntoAbstraction(newIfAbstraction);
	}

	handleBrIf() {
		const conditionDetails = this.VirtualStates[this.VirtualStates.length - 1][0].pop();
		this.VirtualStates[this.VirtualStates.length - 1][0].push(conditionDetails);
		const fromBrIf = true;
		const newIfAbstraction = new IfAbstraction(conditionDetails, fromBrIf);
		newIfAbstraction.end();
		this.addAbstraction(newIfAbstraction);
	}

	handleFor() {
		const newForAbstraction = new ForAbstraction();
		this.moveContextIntoAbstraction(newForAbstraction);

		this.ContextBreakStack.push(TOKENS.LOOP_TOKEN);
	}

	handleBlock() {
		const newBlockAbstraction = new BlockAbstraction();
		this.moveContextIntoAbstraction(newBlockAbstraction);

		this.ContextBreakStack.push(TOKENS.block);
	}

	handleEnd() {
		const typeOfEnd = this.ContextBreakStack.pop();
		switch (typeOfEnd) {
			case TOKENS.IF_TOKEN:
				break;
			case TOKENS.LOOP_TOKEN:
				break;
			case TOKENS.block:
				break;
		}

		this.moveContextUp();
	}

	handleElse() {
		this.moveContextToElse();
	}

	handleCall(functionName) {
		this.VirtualStates[this.VirtualStates.length - 1].forEach((activeState, index) => {
			const argsToCall = [];
			const namedArgs = {};
			const stackToPushBack = [];
			// Lookup param details if any
			const functionType = getFunctionType(functionName);

			if (functionType != null && functionType.Params != null) {
				let numOfParams = functionType.Params.length - 1;
				while (numOfParams >= 0) {
					const paramName = numOfParams; //this.ProgramDetails.Functions[functionName] == null || this.ProgramDetails.Functions[functionName].Params.length == 0 ? numOfParams : this.ProgramDetails.Functions[functionName].Params[numOfParams].Name;
					const newParam = activeState.pop();
					argsToCall.push(newParam);
					namedArgs[paramName] = newParam;
					stackToPushBack.push(newParam);

					numOfParams--;
				}

				while (stackToPushBack.length > 0) {
					activeState.push(stackToPushBack.pop());
				}

				var resultVar = null;

				if (functionType.Result != null) {
					resultVar = new SymbolicValue(functionName + '_result', lineNumber);
				}
				if (resultVar) {
					activeState.push(resultVar);
				}
			}

			if (index == 0) {
				const newCallAbstraction = new CallAbstraction(functionName, namedArgs);
				this.addAbstraction(newCallAbstraction);
			}
		}, this);
	}

	handleCallIndirect(type) {
		this.VirtualStates[this.VirtualStates.length - 1].forEach((activeState, index) => {
			const argsToCall = [];
			const namedArgs = {};
			const stackToPushBack = [];
			// Lookup param details if any
			const functionType = ProgramDetails.Types[type];

			if (functionType != null && functionType.Params != null) {
				let numOfParams = functionType.Params.length - 1;
				while (numOfParams >= 0) {
					const paramName = numOfParams; //this.ProgramDetails.Functions[functionName] == null || this.ProgramDetails.Functions[functionName].Params.length == 0 ? numOfParams : this.ProgramDetails.Functions[functionName].Params[numOfParams].Name;
					const newParam = activeState.pop();
					argsToCall.push(newParam);
					namedArgs[paramName] = newParam;
					stackToPushBack.push(newParam);

					numOfParams--;
				}

				while (stackToPushBack.length > 0) {
					activeState.push(stackToPushBack.pop());
				}

				var resultVar = null;

				if (functionType.Result != null) {
					resultVar = new SymbolicValue('call_indirect' + type + '_result', lineNumber);
				}
				if (resultVar) {
					activeState.push(resultVar);
				}
			}

			if (index == 0) {
				const newCallIndirectAbstraction = new CallIndirectAbstraction(type);
				newCallIndirectAbstraction.Paths = Array.from(new Set(ProgramDetails.TableFunctions));
				this.addAbstraction(newCallIndirectAbstraction);
			}
		}, this);
	}

	handleInitialDefinition(functionTypeDetails, lineNumber) {
		const functionParams = functionTypeDetails.Params;
		this.VirtualStates[this.VirtualStates.length - 1].forEach((activeState, index) => {
			for (let i = 0; i < functionParams.length; i++) {
				const varName = i.toString();
				const newVal = new SymbolicValue(varName, lineNumber);

				activeState.setLocalVariable(varName, newVal, lineNumber);
			}
		}, this);
	}
}

class FunctionDetails {
	constructor(functionName) {
		this.Name = functionName;
		this.Params = [];
		this.Calls = [];
		this.NumberOfLoops = 0;
		this.NumberOfIfs = 0;
		this.Loops = [];
		this.Ifs = [];
		this.LoopLines = [];
		this.Simulator = new VirtualStateManager();
		this.ControlFlowGraph = null;
		this.HasResult = false;
		this.FunctionType = null;
	}
}

class Queue {
	// Retrieved from : https://www.geeksforgeeks.org/implementation-queue-javascript/
	// Array is used to implement a Queue
	constructor() {
		this.items = [];
	}

	enqueue(element) {
		// adding element to the queue
		this.items.push(element);
	}

	dequeue() {
		// removing element from the queue
		// returns underflow when called
		// on empty queue
		if (this.isEmpty()) return 'Underflow';
		return this.items.shift();
	}

	isEmpty() {
		// return true if the queue is empty.
		return this.items.length == 0;
	}
}

class GraphNode {
	constructor(abstractionElement) {
		this.Abstraction = abstractionElement;
		this.AdjacentVertices = [];
	}
}

class Graph {
	constructor() {
		this.AdjacencyList = new Map();
		this.FirstVertex = null;
		this.LastVertex = null;
	}

	addVertex(abstraction) {
		if (this.AdjacencyList.get(abstraction) == null) {
			const newgraphNode = new GraphNode(abstraction);
			this.AdjacencyList.set(abstraction, newgraphNode);
		}

		if (this.FirstVertex == null) {
			this.FirstVertex = abstraction;
		}
	}

	addEdge(prevAbstraction, nextAbstraction) {
		this.AdjacencyList.get(prevAbstraction).AdjacentVertices.push(nextAbstraction);
	}

	makeLastVertex(abstraction) {
		this.LastVertex = abstraction;
	}

	*traverseBFS(startingNode = this.FirstVertex, traverseInner = false) {
		const nodesToVisit = new Queue();
		const visited = new Map();
		const enqueueAdjacentVertices = (node) => {
			let nodeAdjacencyList = this.AdjacencyList.get(node);
			if (nodeAdjacencyList == null) {
				return;
			}
			nodeAdjacencyList = nodeAdjacencyList.AdjacentVertices;
			for (const abstr of nodeAdjacencyList) {
				if (visited.get(abstr) !== true) {
					nodesToVisit.enqueue(abstr);
					visited.set(abstr, true);
				}
			}
		};

		const traverseInnerAbstractions = function*(abstr) {
			if (abstr.InnerAbstractions.length > 0) {
				for (const innerAbs of abstr.InnerAbstractions) {
					yield innerAbs;
					yield* traverseInnerAbstractions(innerAbs);
				}
			}

			if (abstr.ElseAbstractions != null && abstr.ElseAbstractions.length > 0) {
				for (const innerAbs of abstr.ElseAbstractions) {
					yield innerAbs;
					yield* traverseInnerAbstractions(innerAbs);
				}
			}
		};

		visited.set(startingNode, true);
		nodesToVisit.enqueue(startingNode);

		if (startingNode.ParentAbstraction != null) {
			if (
				startingNode.ParentAbstraction.AbstractionType != 'IF' &&
				startingNode.ParentAbstraction.AbstractionType !== 'MEMCPY' &&
				startingNode.ParentAbstraction.AbstractionType !== 'CALL'
			) {
				const abstrIndexInParent = startingNode.ParentAbstraction.InnerAbstractions.indexOf(startingNode);

				for (let i = abstrIndexInParent; i < startingNode.ParentAbstraction.InnerAbstractions.length; i++) {
					const abstr = startingNode.ParentAbstraction.InnerAbstractions[i];
					if (abstr == startingNode) continue;
					yield abstr;
				}
				enqueueAdjacentVertices(startingNode.ParentAbstraction);
			}
		}

		while (!nodesToVisit.isEmpty()) {
			const abstraction = nodesToVisit.dequeue();

			yield abstraction;

			if (traverseInner == true) {
				if (abstraction.AbstractionType == 'FOR' || abstraction.AbstractionType == 'BLOCK') {
					yield* traverseInnerAbstractions(abstraction);
				}
			}
			enqueueAdjacentVertices(abstraction);
		}
  }
  
  *traverseGraph(startingNode = this.FirstVertex, traverseInner = false) {
		const nodesToVisit = new Queue();
		const visited = new Map();
		const enqueueAdjacentVertices = (node) => {
			let nodeAdjacencyList = this.AdjacencyList.get(node);
			if (nodeAdjacencyList == null) {
				return;
			}
			nodeAdjacencyList = nodeAdjacencyList.AdjacentVertices;
			for (const abstr of nodeAdjacencyList) {
				if (visited.get(abstr) !== true) {
					nodesToVisit.enqueue(abstr);
					visited.set(abstr, true);
				}
			}
		};


		visited.set(startingNode, true);
		nodesToVisit.enqueue(startingNode);

		if (startingNode.ParentAbstraction != null) {
			if (
				startingNode.ParentAbstraction.AbstractionType != 'IF' &&
				startingNode.ParentAbstraction.AbstractionType !== 'MEMCPY' &&
				startingNode.ParentAbstraction.AbstractionType !== 'CALL'
			) {
				const abstrIndexInParent = startingNode.ParentAbstraction.InnerAbstractions.indexOf(startingNode);

				for (let i = abstrIndexInParent; i < startingNode.ParentAbstraction.InnerAbstractions.length; i++) {
					const abstr = startingNode.ParentAbstraction.InnerAbstractions[i];
					if (abstr == startingNode) continue;
					yield abstr;
				}
				enqueueAdjacentVertices(startingNode.ParentAbstraction);
			}
		}

		while (!nodesToVisit.isEmpty()) {
			const abstraction = nodesToVisit.dequeue();

			yield abstraction;

			
			enqueueAdjacentVertices(abstraction);
		}
	}

	// * traverseDFS(startingNode = this.FirstVertex, traverseInner = false) {
	//   const nodesToVisit = [];
	//   const visited = new Map();
	//   const enqueueAdjacentVertices = (node) => {
	//     let nodeAdjacencyList = this.AdjacencyList.get(node);
	//     if (nodeAdjacencyList == null) {
	//       return;
	//     }
	//     nodeAdjacencyList = nodeAdjacencyList.AdjacentVertices;
	//     for (const abstr of nodeAdjacencyList) {
	//       if (visited.get(abstr) !== true) {
	//         nodesToVisit.push(abstr);
	//         visited.set(abstr, true);
	//       }
	//     }
	//   };

	//   const traverseInnerAbstractions = function* (abstr) {
	//     if (abstr.InnerAbstractions.length > 0) {
	//       for (const innerAbs of abstr.InnerAbstractions) {
	//         yield innerAbs;
	//         yield* traverseInnerAbstractions(innerAbs);
	//       }
	//     }

	//     if (abstr.ElseAbstractions != null && abstr.ElseAbstractions.length > 0) {
	//       for (const innerAbs of abstr.ElseAbstractions) {
	//         yield innerAbs;
	//         yield* traverseInnerAbstractions(innerAbs);
	//       }
	//     }
	//   };

	//   visited.set(startingNode, true);
	//   nodesToVisit.push(startingNode);

	//   if (startingNode.ParentAbstraction != null) {
	//     if (
	//       startingNode.ParentAbstraction.AbstractionType != 'IF'
	//       && startingNode.ParentAbstraction.AbstractionType !== 'MEMCPY'
	//       && startingNode.ParentAbstraction.AbstractionType !== 'CALL'
	//     ) {
	//       const abstrIndexInParent = startingNode.ParentAbstraction.InnerAbstractions.indexOf(startingNode);

	//       for (let i = abstrIndexInParent; i < startingNode.ParentAbstraction.InnerAbstractions.length; i++) {
	//         const abstr = startingNode.ParentAbstraction.InnerAbstractions[i];
	//         if (abstr == startingNode) continue;
	//         yield abstr;
	//       }
	//       enqueueAdjacentVertices(startingNode.ParentAbstraction);
	//     }
	//   }

	//   while (nodesToVisit.length > 0) {
	//     const abstraction = nodesToVisit.pop();

	//     yield abstraction;

	//     if (traverseInner == true) {
	//       if (abstraction.AbstractionType == 'FOR' || abstraction.AbstractionType == 'BLOCK') {
	//         yield* traverseInnerAbstractions(abstraction);
	//       }
	//     }
	//     enqueueAdjacentVertices(abstraction);
	//   }
	// }

	*traverseDFSArrayOnly(startingNode = this.FirstVertex) {
		const traverseInnerAbstractions = function*(abstr) {
			if (abstr.InnerAbstractions.length > 0) {
				for (const innerAbs of abstr.InnerAbstractions) {
					yield innerAbs;
					yield* traverseInnerAbstractions(innerAbs);
				}
			}

			if (abstr.ElseAbstractions != null && abstr.ElseAbstractions.length > 0) {
				for (const innerAbs of abstr.ElseAbstractions) {
					yield innerAbs;
					yield* traverseInnerAbstractions(innerAbs);
				}
			}

			if (abstr.Paths != null) {
				for (const path of abstr.Paths) {
					for (const innerAbs of path) {
						yield innerAbs;
						yield* traverseInnerAbstractions(innerAbs);
					}
				}
			}
		};

		yield* traverseInnerAbstractions(startingNode);

		let midpointNode = startingNode;
		while (midpointNode.ParentAbstraction != null) {
			const abstrIndexInParent = midpointNode.ParentAbstraction.InnerAbstractions.indexOf(midpointNode);

			for (let i = abstrIndexInParent; i < midpointNode.ParentAbstraction.InnerAbstractions.length; i++) {
				const abstr = midpointNode.ParentAbstraction.InnerAbstractions[i];
				if (abstr == midpointNode) continue;
				yield abstr;
			}

			midpointNode = midpointNode.ParentAbstraction;
		}
	}
}

class DatabaseConnector {
	constructor() {
		const client = redis.createClient();
		const hgetAsync = promisify(client.hget).bind(client);
		const hsetAsync = promisify(client.hset).bind(client);

		client.on('connect', () => {});

		client.on('error', (error) => {
			console.error(error);

			console.log(JSON.stringify({ error: true, errorDetails: error }));
			process.exit();
		});

		this.client = client;
		this.hgetAsync = hgetAsync;
		this.hsetAsync = hsetAsync;
	}

	async loadAbstractions(functionName) {
		// return ProgramDetails.Functions[functionName].Simulator;
		let loadedSimulator = lodash.cloneDeep(await this.hgetAsync(functionName, 'Abstraction'));
		if (loadedSimulator == null) {
			return null;
		}
		const deSerializedSimulator = serialijse.deserialize(loadedSimulator);
		loadedSimulator = null;
		return deSerializedSimulator;
	}

	async storeAbstractions(functionName, simulatorObject) {
		const serializedSimulator = serialijse.serialize(simulatorObject);
		await this.hsetAsync(functionName, 'Abstraction', serializedSimulator);
		return 'Done';
	}

	quit() {
		this.client.quit();
	}
}
// ////////////////////////////////////////////////////////////////

const DB = new DatabaseConnector();
// ////////////////////// SERIALIZER SETUP ////////////////////////
serialijse.declarePersistable(Abstraction);
serialijse.declarePersistable(StackValue);
serialijse.declarePersistable(DataSection);
serialijse.declarePersistable(ImportDetails);
serialijse.declarePersistable(ExportDetails);
serialijse.declarePersistable(TypeDetails);
serialijse.declarePersistable(SetAbstraction);
serialijse.declarePersistable(StoreAbstraction);
serialijse.declarePersistable(CallAbstraction);
serialijse.declarePersistable(CallIndirectAbstraction);
serialijse.declarePersistable(MemCpyAbstraction);
serialijse.declarePersistable(ForAbstraction);
serialijse.declarePersistable(IfAbstraction);
serialijse.declarePersistable(VariableReference);
serialijse.declarePersistable(BlockAbstraction);
serialijse.declarePersistable(ImmediateValue);
serialijse.declarePersistable(SymbolicValue);
serialijse.declarePersistable(Operation);
serialijse.declarePersistable(MemoryReference);
serialijse.declarePersistable(VirtualState);
serialijse.declarePersistable(VirtualStateManager);
serialijse.declarePersistable(FunctionDetails);
// ///////////////////////////////////////////////////////////////

// //////////////////// UTITLITY FUNCTIONS ///////////////////////
const cleanToken = (token) => token.replace(/[\(\)\;]/g, '');


const addPreviousNodeEdges = (previousNodesList, abstraction,abstractionGraph) => {
  if(abstraction == null){
    return;
  }

  if (Array.isArray(previousNodesList)) {
    previousNodesList.forEach((abstr) => {
        abstractionGraph.addEdge(abstr, abstraction);
    });
  } else {
      abstractionGraph.addEdge(previousNodesList, abstraction);
  }
}
function makeGraphFromAbstractionList(abstractionList, passedGraph, returnAbstraction) {
	const abstractionGraph = passedGraph || new Graph();

	let previousNode = [];

	for (const abstraction of abstractionList) {
		if (abstractionList.length == 1) {
			previousNode = [ abstraction ];

			abstractionGraph.addVertex(abstraction);
		} else {
			if (previousNode == null) {
				abstractionGraph.addVertex(abstraction);
				previousNode = [ abstraction ];
				continue;
			}

			abstractionGraph.addVertex(abstraction);

			addPreviousNodeEdges(previousNode, abstraction,abstractionGraph);

			previousNode = [ abstraction ];
		}

		// if (abstraction.AbstractionType == 'IF') {

		let newPreviousNodeList = [];

		if (abstraction.InnerAbstractions.length > 0) {
			let firstInnerAbstraction = null;
			firstInnerAbstraction = abstraction.InnerAbstractions[0];

      addPreviousNodeEdges(previousNode,firstInnerAbstraction,abstractionGraph );

			const ifSubGraph = makeGraphFromAbstractionList(abstraction.InnerAbstractions, abstractionGraph, true);
      
				if (Array.isArray(ifSubGraph)) {
					newPreviousNodeList = newPreviousNodeList.concat(ifSubGraph);
				} else {
					newPreviousNodeList.push(ifSubGraph);
				}
		}

		if (abstraction.ElseAbstractions != null && abstraction.ElseAbstractions.length > 0) {
			let firstElseAbstraction = null;
			firstElseAbstraction = abstraction.ElseAbstractions[0];

			addPreviousNodeEdges(previousNode, firstElseAbstraction,abstractionGraph);

			const elseSubGraph = makeGraphFromAbstractionList(abstraction.ElseAbstractions, abstractionGraph, true);
				if (Array.isArray(elseSubGraph)) {
					newPreviousNodeList = newPreviousNodeList.concat(elseSubGraph);
				} else {
					newPreviousNodeList.push(elseSubGraph);
				}
		}

		// }
		if (abstraction.Paths != null && abstraction.Paths.length > 0) {
			const functionPaths = abstraction.Paths;

			functionPaths.forEach((path) => {
				if (path != null && path.Abstractions != null && path.Abstractions.length > 0) {
          
          const firstPathAbstraction = path.Abstractions[0];
			    addPreviousNodeEdges(previousNode, firstPathAbstraction,abstractionGraph);

          const pathLastNode = makeGraphFromAbstractionList(path, abstractionGraph, true);
          
          
          if (Array.isArray(pathLastNode)) {
            newPreviousNodes = newPreviousNodes.concat(pathLastNode);
          } else {
            newPreviousNodes.push(pathLastNode);
          }

					abstractionGraph.addEdge(abstraction, path.Abstractions[0]);
				}
			});
		}

    if(newPreviousNodeList.length > 0  ){
      previousNode = newPreviousNodeList;

    }

		// else if (abstraction.AbstractionType == 'CALL') {
		//   if (abstraction.InnerAbstractions.length > 0) {
		//     previousNode = makeGraphFromAbstractionList(abstraction.InnerAbstractions, abstractionGraph, true);
		//     abstractionGraph.addEdge(abstraction, abstraction.InnerAbstractions[0]);
		//   }
		// }
	}

	if (returnAbstraction == true) {
		return previousNode;
	}

	return abstractionGraph;
}
// ///////////////////////////////////////////////////////////////

// /////////////// DETECTION ALGORITHM FUNCTIONS /////////////////

function Identify_MainLoopBlock(controlFlowGraph) {
	const MainLoopBlock = [];
	const signatureLoopConstants = [ 524288, 262144 /*, 1048576*/ ];
	const traverseObject = controlFlowGraph.traverseBFS(controlFlowGraph.FirstVertex, true);
	let nextVal = traverseObject.next();
	while (nextVal.value) {
		const key = nextVal.value;

		// if(key.AbstractionType == 'BLOCK'){
		//   if(key.InnerAbstractions[0] != null){
		//     if(key.InnerAbstractions[0].AbstractionType == 'IF'){
		//       if(key.InnerAbstractions[0].Condition.containsConstantValue(524288)){
		//         console.log(key.InnerAbstractions[0].Condition)
		//       }
		//     }
		//   }
		// }

		if (key.AbstractionType == 'IF') {
			const cond_expr = key.Condition;
			if (cond_expr) {
				for (const signatureConstant of signatureLoopConstants) {
					if (cond_expr.containsConstantValue(signatureConstant)) {
						MainLoopBlock.push(cond_expr);
					}
				}
			}
		}

		if (key.AbstractionType == 'FOR') {
			const cond_expr = key.Get_Condition();

			if (cond_expr) {
				const ifCondition = cond_expr;
				for (const signatureConstant of signatureLoopConstants) {
					if (ifCondition.containsConstantValue(signatureConstant)) {
						MainLoopBlock.push(ifCondition);
					}
				}
			}
		}

		nextVal = traverseObject.next();
	}

	return MainLoopBlock;
}

function Identify_HashEachBlock(controlFlowGraph, blocksizes, variable_definitions) {
	const HashEachBlock = [];

	const traverseObject = controlFlowGraph.traverseBFS(controlFlowGraph.FirstVertex, true);
	let nextVal = traverseObject.next();
	while (nextVal.value) {
		const key = nextVal.value;
		if (key.AbstractionType == 'FOR') {
			const cond_expr = key.Get_Condition();

			const dec_expr = key.Dec_Expr();
			const inc_expr = key.Inc_Expr();

			if (dec_expr == null || inc_expr == null) {
				nextVal = traverseObject.next();
				continue;
			}
			const dec_const = Math.abs(key.Get_Decrement());
			const inc_const = Math.abs(key.Get_Increment());

			blocksizes.forEach((b) => {
				if (dec_const == b || dec_const == b / 8) {
					const BLOCKSIZE = dec_const;
					const rem_msglen = dec_expr.LValue; // Get_Var_Operand(dec_expr.RValue);
					const decAliases = TraceVariablePath(dec_expr);

					const lineOfRem_msglen = dec_expr.Start;

					const msglen = Get_Lastdef(rem_msglen, variable_definitions, lineOfRem_msglen);

					if (inc_const == b || inc_const == b / 8) {
						const block = inc_expr;
						if (Is_More_Blocks(cond_expr, rem_msglen, BLOCKSIZE, dec_const, decAliases)) {
							HashEachBlock.push({
								n: key,
								BLOCKSIZE,
								rem_msglen,
								msglen,
								block,
								rem_msglen_aliases: decAliases
							});
						}
					}
				}
			});
		}
		nextVal = traverseObject.next();
	}

	return HashEachBlock;
}

function Identify_StoreRemainMessage(controlFlowGraph, hashEachBlock, variable_definitions) {
	const StoreRemainMessage = [];
	hashEachBlock.forEach((hashBlk) => {
		const { block, rem_msglen, BLOCKSIZE, rem_msglen_aliases } = hashBlk;
		const traverseObject = controlFlowGraph.traverseBFS(block, true);
		let nextVal = traverseObject.next();
		while (nextVal.value) {
			const n = nextVal.value;
			if (n.AbstractionType == 'IF') {
				if (Is_Empty_Msg(n, rem_msglen, rem_msglen_aliases, BLOCKSIZE)) {
					const memcpy_stmts = Get_MemCpy_Stmt(n, controlFlowGraph);
					if (memcpy_stmts.length > 0) {
						for (const memcpy_stmt of memcpy_stmts) {
							const tmp_buf = memcpy_stmt.GetDestArg();
							const rem_msg = memcpy_stmt.GetSourceArg();
							const rem_msglen = memcpy_stmt.GetSizeArg();

							StoreRemainMessage.push({
								block,
								hashBlk,
								n,
								tmp_buf,
								rem_msg,
								rem_msglen
							});
						}
					}
				}
			}
			nextVal = traverseObject.next();
		}
	});
	return StoreRemainMessage;
}

function Identify_PadLastPartialBlock(controlFlowGraph, storeRemainMessage, variable_definitions) {
	const HashCandidates = [];
	storeRemainMessage.forEach((remainMsg) => {
		const { block, tmp_buf, hashBlk, rem_msg, rem_msglen } = remainMsg;
		const storeBlock = remainMsg.n;
		const traverseGraph = controlFlowGraph.traverseBFS(storeBlock, true);
		let nextVal = traverseGraph.next();
		while (nextVal.value) {
			const n = nextVal.value;
			if (n.AbstractionType == 'IF') {
				const affectedVars = GetAffectedVariables(storeBlock);
				const { BLOCKSIZE } = hashBlk;
				const tmp_blk_aliases = TraceParameterAliases(tmp_buf, block);
				const rem_msg_alias = TraceParameterAliases(rem_msg, block);

				if (Is_End_Of_Block(n, tmp_buf, tmp_blk_aliases, affectedVars, BLOCKSIZE)) {
					const mem_stmts = Get_MemCpy_Stmt(n, controlFlowGraph);
					if (mem_stmts.length > 0) {
						for (const mem_stmt of mem_stmts) {
							const arg2 = mem_stmt.GetSourceArg();
							const arg1 = mem_stmt.GetDestArg();
							const arg3 = mem_stmt.GetSizeArg();

							if (
								(lodash.isEqual(tmp_buf, arg1) || Operation_Contains_Variable(arg1, tmp_buf)) &&
								Is_Sub_Operation(arg3, rem_msg, block, BLOCKSIZE, mem_stmt)
							) {
								HashCandidates.push({ block, hashBlk, n });
							}
						}
					}
				}
			}
			nextVal = traverseGraph.next();
		}
	});

	return HashCandidates;
}

function Get_Lastdef(variableOperand, variableDefinitions, lineNumberOfOperation) {
	let defsToSearchFrom;
	const varName = variableOperand;
	if (varName.charAt(1) == 'p' || varName.charAt(1) == 'l') {
		defsToSearchFrom = variableDefinitions.LocalVariables;
	}
	if (varName.charAt(1) == 'g') {
		defsToSearchFrom = variableDefinitions.GlobalVariables;
	}

	if (defsToSearchFrom == null) {
		if (variableDefinitions.LocalVariables[varName] != null) {
			defsToSearchFrom = variableDefinitions.LocalVariables;
		} else {
			defsToSearchFrom = variableDefinitions.GlobalVariables;
		}
	}

	const varReference = defsToSearchFrom[varName];
	if (varReference === undefined || varReference.previousValues.length == 0) {
		return variableOperand;
	}

	if (varReference.lineNumberSet > lineNumberOfOperation) {
		for (let i = varReference.previousValues.length - 1; i >= 0; i--) {
			const previousDefinition = varReference.previousValues[i];
			if (previousDefinition.Line < lineNumberOfOperation) {
				return previousDefinition;
			}

			if (i == 0) {
				return previousDefinition;
			}
		}
	} else {
		return varReference;
	}
}

function Get_MemCpy_Stmt(ifAbstraction, controlFlowGraph, isMemSet = false) {
	const memcpyAbstraction = [];

	const traverseGraph = controlFlowGraph.traverseDFSArrayOnly(ifAbstraction, true);
	let nextVal = traverseGraph.next();
	while (nextVal.value) {
		const abstraction = nextVal.value;
		if (abstraction.AbstractionType == 'MEMCPY') {
			if (isMemSet == true) {
				if (abstraction.IsMemSet()) {
					memcpyAbstraction.push(abstraction);
				}
			} else {
				memcpyAbstraction.push(abstraction);
			}
		}
		nextVal = traverseGraph.next();
	}

	if (memcpyAbstraction.length > 0) {
		return memcpyAbstraction;
	}

	// GROESTL CASE: Check inner abstractions for special STORE
	// Possibly a STORE whose location is a variable affected by incremented operand in condition
	if (ifAbstraction.InnerAbstractions.length > 0) {
		for (const possibleMemcpy of ifAbstraction.InnerAbstractions) {
			if (possibleMemcpy.AbstractionType == 'MEMCPY') {
				if (isMemSet == true) {
					if (possibleMemcpy.IsMemSet()) {
						memcpyAbstraction.push(possibleMemcpy);
					}
				} else {
					memcpyAbstraction.push(possibleMemcpy);
				}
			}
		}
	}
	return memcpyAbstraction;
}

function Get_MemSet_Stmt(ifAbstraction, controlFlowGraph) {
	return Get_MemCpy_Stmt(ifAbstraction, controlFlowGraph, true);
}

function Is_More_Blocks(loopAbstraction, rem_msglen, BLOCKSIZE, decrementConstant, rem_msg_alias) {
	if (loopAbstraction == null) {
		return false;
	}
	let hasBLOCKSIZE = false;
	let hasRem_msg = false;
	const aliases = rem_msg_alias.map((alias) => alias[0].name);
	aliases.push(rem_msglen);
	const condition = loopAbstraction;
	if (condition != null && !condition.isOP()) {
		return false;
	}
	const conditionConstant = condition.lValue.isIMM()
		? condition.lValue.value
		: condition.rValue != null && condition.rValue.isIMM() ? condition.rValue.value : null;

	const targetBlocksize = BLOCKSIZE - 1;
	const operationsToUnwind = new Queue();
	operationsToUnwind.enqueue(condition);

	while (!operationsToUnwind.isEmpty()) {
		const abstr = operationsToUnwind.dequeue();

		if (abstr.variableName == rem_msglen) {
			hasRem_msg = true;
			continue;
		}

		if (abstr.isOP()) {
			operationsToUnwind.enqueue(abstr.lValue);
			if (abstr.rValue != null) {
				operationsToUnwind.enqueue(abstr.rValue);
			}
		} else if (abstr.isIMM()) {
			// Can be blocksize
			if (
				abstr.value == targetBlocksize ||
				abstr.value == targetBlocksize + decrementConstant ||
				abstr.value == BLOCKSIZE
			) {
				hasBLOCKSIZE = true;
			}
		} else if (abstr.isSYM()) {
			aliases.forEach((alias) => {
				if (alias == abstr.name) {
					hasRem_msg = true;
				}
			});
		}
	}

	return hasBLOCKSIZE && hasRem_msg;
}

function Is_Empty_Msg(ifAbstraction, msgBuffer, msgBufferAliases, blocksize) {
	const condition = ifAbstraction.Condition;
	let hasZero = false;
	let hasMsgBuffer = false;
	const operationsToUnwind = new Queue();
	operationsToUnwind.enqueue(condition);

	while (!operationsToUnwind.isEmpty()) {
		const op = operationsToUnwind.dequeue();

		if (op.variableName == msgBuffer) {
			hasMsgBuffer = true;
			continue;
		}
		if (op.isOP()) {
			if (op.operator == 'eqz') {
				hasZero = true;
			}
			operationsToUnwind.enqueue(op.lValue);
			if (op.rValue != null) {
				operationsToUnwind.enqueue(op.rValue);
			}
		} else if (op.isIMM()) {
			// Can be zero
			if (op.value == 0) {
				hasZero = true;
			}
		} else if (op.isSYM()) {
			msgBufferAliases.forEach((alias) => {
				const msgBuffer = alias[0];
				if (lodash.isEqual(op, msgBuffer)) {
					hasMsgBuffer = true;
				}
			});
		}
	}
	if (hasZero && hasMsgBuffer) {
		return true;
	}

	// GROESTL case: Check if IF abstraction contains condition with rem_msg alias and less than comparison

	if (hasMsgBuffer === true) {
		if (condition.operator == 'lt_s' || condition.operator == 'lt_u') {
			return true;
		}
	}

	return false;
}

function Is_End_Of_Block(ifAbstraction, tmp_buf, tmp_buf_aliases, affectedVars, blocksize) {
	const condition = ifAbstraction.Condition;
	const targetBlocksize = [ blocksize, blocksize / 8, 440 ];
	const targetShiftLeft = 3;
	const targetBufVar = tmp_buf.isOP() ? tmp_buf.getSymbolicValue().name : null;
	tmp_buf_aliases.push(targetBufVar);
	tmp_buf_aliases.push(tmp_buf.variableName);
	let hasTargetNum = false;
	let hasZero = false;
	let hasTargetBuf = false;
	let hasLT = false;
	let hasGT = false;
	let hasEq = false;
	const operationsToUnwind = new Queue();
	operationsToUnwind.enqueue(condition);

	while (!operationsToUnwind.isEmpty()) {
		const op = operationsToUnwind.dequeue();

		if (op.variableName != null) {
			if (affectedVars.includes(op.variableName)) {
				hasTargetBuf = true;
			}

			if (tmp_buf_aliases.includes(op.variableName)) {
				hasTargetBuf = true;
			}
		}

		if (op.isOP()) {
			if (op.operator == 'lt_u' || op.operator == 'lt_s') {
				hasLT = true;
			}

			if (op.operator == 'gt_u' || op.operator == 'gt_s') {
				hasGT = true;
			}

			if (op.operator == 'eq') {
				hasEq = true;
			}

			if (op.operator == 'eqz') {
				hasEq = true;
				hasZero = true;
			}

			operationsToUnwind.enqueue(op.lValue);
			if (op.rValue != null) {
				operationsToUnwind.enqueue(op.rValue);
			}
		} else if (op.isIMM()) {
			targetBlocksize.forEach((targetNum) => {
				if (op.value == targetNum) {
					hasTargetNum = true;
				}
			});

			if (op.value == 0) {
				hasZero = true;
			}
		} else if (op.isREF()) {
			if (lodash.isEqual(op.Address, tmp_buf.Address)) {
				hasTargetBuf = true;
			} else {
				operationsToUnwind.enqueue(op.Address);
			}
		} else if (op.isSYM()) {
			if (affectedVars.includes(op.name) || op.name == targetBufVar) {
				hasTargetBuf = true;
			}

			if (tmp_buf_aliases.includes(op.name)) {
				hasTargetBuf = true;
			}
		}
	}

	const targetCondition = hasTargetBuf && ((hasLT && hasTargetNum) || (hasGT && hasZero) || (hasEq && hasZero));

	// BLAKE case: Look for Sub with blocksize and target buf alias
	if (targetCondition == false) {
		return Has_Sub_Operation(condition, blocksize);
	}
	return targetCondition;
}

function Is_Sub_Operation(operation, rem_msg, rem_msg_abstraction, BLOCKSIZE, operation_abstraction) {
	if (typeof operation !== 'object') return false;
	let hasSub = false;
	let hasBlocksize = false;
	let hasRem_msg = false;
	let haveSeen = new Map();
	const variableName = null;
	const possibleVariableNames = [];
	const unwindRem_msg = new Queue();
	unwindRem_msg.enqueue(rem_msg);

	while (!unwindRem_msg.isEmpty()) {
		const op = unwindRem_msg.dequeue();
		if (op.variableName != null) {
			possibleVariableNames.push(op.variableName);
		}

		if (op.isOP()) {
			unwindRem_msg.enqueue(op.lValue);
			if (op.rValue != null) {
				unwindRem_msg.enqueue(op.rValue);
			}
		} else if (op.isREF()) {
			unwindRem_msg.enqueue(op.Address);
		} else if (op.isSYM()) {
			const aliasIterator = IterateOverParameterAliases(op, rem_msg_abstraction);
			let alias = aliasIterator.next();
			while (alias.value) {
				if (haveSeen.get(alias.value) == null) {
					unwindRem_msg.enqueue(alias.value);
					haveSeen.set(alias.value, true);
				}
				alias = aliasIterator.next();
			}
			possibleVariableNames.push(op.name);
		}
	}
	haveSeen = new Map();
	const operationsToUnwind = new Queue();
	operationsToUnwind.enqueue(operation);

	while (!operationsToUnwind.isEmpty()) {
		const op = operationsToUnwind.dequeue();

		if (op.variableName != null) {
			if (possibleVariableNames.includes(op.variableName)) {
				hasRem_msg = true;
			}
		}

		if (op.isOP()) {
			if (op.operator == 'sub') {
				hasSub = true;
			}

			operationsToUnwind.enqueue(op.lValue);
			if (op.rValue != null) {
				operationsToUnwind.enqueue(op.rValue);
			}
		} else if (op.isIMM()) {
			if (op.value == BLOCKSIZE || op.value == BLOCKSIZE / 8) {
				hasBlocksize = true;
			}
		} else if (op.isREF()) {
			operationsToUnwind.enqueue(op.Address);
		} else if (op.isSYM()) {
			if (possibleVariableNames.includes(op.name)) {
				hasRem_msg = true;
			}

			const aliasIterator = IterateOverParameterAliases(op, operation_abstraction);
			let alias = aliasIterator.next();
			while (alias.value) {
				if (haveSeen.get(alias.value) == null) {
					operationsToUnwind.enqueue(alias.value);
					haveSeen.set(alias.value, true);
				}
				alias = aliasIterator.next();
			}
		}
	}

	return hasBlocksize && hasRem_msg && hasSub;
}

function Has_Sub_Operation(operation, BLOCKSIZE) {
	let hasSub = false;
	let hasBlocksize = false;
	const blocksizes = [ BLOCKSIZE, BLOCKSIZE < 100 ? BLOCKSIZE * 8 : BLOCKSIZE / 8 ];

	const operationsToUnwind = new Queue();
	operationsToUnwind.enqueue(operation);

	while (!operationsToUnwind.isEmpty()) {
		const op = operationsToUnwind.dequeue();

		if (op.isOP()) {
			if (op.operator == 'sub') {
				hasSub = true;
			}

			operationsToUnwind.enqueue(op.lValue);
			if (op.rValue != null) {
				operationsToUnwind.enqueue(op.rValue);
			}
		} else if (op.isIMM()) {
			blocksizes.forEach((blocksize) => {
				if (op.value == blocksize) {
					hasBlocksize = true;
				}
			});
		} else if (op.isREF()) {
			operationsToUnwind.enqueue(op.Address);
		}
	}

	return hasBlocksize && hasSub;
}

function Operation_Contains_Variable(operation, variable) {
	let variableName = variable.name;
	if (variableName == null) {
		if (variable.isOP()) {
			variableName = variable.getSymbolicValue().name;
		}
	}

	const operationsToUnwind = new Queue();
	operationsToUnwind.enqueue(operation);

	while (!operationsToUnwind.isEmpty()) {
		const op = operationsToUnwind.dequeue();

		if (op.variableName != null) {
			if (op.variableName == variableName) {
				return true;
			}
		}

		if (op.isOP()) {
			operationsToUnwind.enqueue(op.lValue);
			if (op.rValue != null) {
				operationsToUnwind.enqueue(op.rValue);
			}
		} else if (op.isSYM()) {
			if (op.name == variableName) {
				return true;
			}
		}
	}

	return false;
}

function TraceVariablePath(abstraction) {
	const varAliasPath = [];
	const targetSymbol = abstraction.RValue.getSymbolicValue();
	if (targetSymbol == null) {
		return varAliasPath;
	}
	let targetVarName = targetSymbol.name;
	varAliasPath.push([ targetSymbol, { FunctionName: 'self' } ]);
	while (abstraction.ParentAbstraction != null) {
		abstraction = abstraction.ParentAbstraction;

		if (abstraction.AbstractionType == 'CALL') {
			// Look through Call Arguments
			if (abstraction.Arguments[targetVarName] != null) {
				let newVarAlias = abstraction.Arguments[targetVarName];
				if (newVarAlias.isOP()) {
					newVarAlias = newVarAlias.getSymbolicValue();
					targetVarName = newVarAlias.name;
				} else if (newVarAlias.isSYM()) {
					targetVarName = newVarAlias.name;
				} else if (newVarAlias.isREF()) {
					newVarAlias = newVarAlias.Address.getSymbolicValue();
					targetVarName = newVarAlias.name;
				} else if (newVarAlias.isIMM()) {
					break;
				}

				varAliasPath.push([ newVarAlias, abstraction ]);
			}
		}
	}

	return varAliasPath;
}

function TraceParameterAliases(variableOperand, abstraction) {
	const varPath = [];
	const operand = variableOperand;
	let symbolicValue = null;
	let targetVarName = null;
	if (operand.variableName != null) {
		varPath.push(operand.variableName);
	}

	if (operand.isOP()) {
		symbolicValue = operand.getSymbolicValue();
	} else if (operand.isSYM()) {
		symbolicValue = operand;
	} else if (operand.isREF()) {
		if (operand.Address.isSYM()) {
			symbolicValue = operand.Address;
		} else if (operand.Address.isOP()) {
			symbolicValue = operand.Address.getSymbolicValue();
		}
	}
	if (symbolicValue == null) {
		return varPath;
	}
	varPath.push(symbolicValue.name);
	targetVarName = symbolicValue.name;
	while (abstraction.ParentAbstraction != null) {
		abstraction = abstraction.ParentAbstraction;

		if (abstraction.AbstractionType == 'CALL') {
			// Look through Call Arguments
			if (abstraction.Arguments[targetVarName] != null) {
				let newVarAlias = abstraction.Arguments[targetVarName];
				if (newVarAlias.variableName != null) {
					varPath.push(newVarAlias.variableName);
				}
				if (newVarAlias.isOP()) {
					newVarAlias = newVarAlias.getSymbolicValue();
					targetVarName = newVarAlias.name;
				} else if (newVarAlias.isSYM()) {
					targetVarName = newVarAlias.name;
				} else if (newVarAlias.isREF()) {
					if (newVarAlias.Address.isSYM()) {
						newVarAlias = newVarAlias.Address;
					} else if (newVarAlias.Address.isOP()) {
						newVarAlias = newVarAlias.Address.getSymbolicValue();
					}
					targetVarName = newVarAlias.name;
				} else if (newVarAlias.isIMM()) {
					break;
				}

				varPath.push(targetVarName);
			}
		}
	}

	return varPath;
}

function GetAffectedVariables(abstraction) {
	let affectedVars = [];

	for (const innerAbs of abstraction.InnerAbstractions) {
		if (innerAbs.AbstractionType == 'SET') {
			affectedVars.push(innerAbs.LValue);
		}

		if (innerAbs.InnerAbstractions.length > 0) {
			affectedVars = affectedVars.concat(GetAffectedVariables(innerAbs));
		}
	}

	return affectedVars;
}

function* IterateOverParameterAliases(variableOperand, abstraction) {
	const operand = variableOperand;
	let symbolicValue = null;
	let targetVarName = null;

	if (operand.isOP()) {
		symbolicValue = operand.getSymbolicValue();
	} else if (operand.isSYM()) {
		symbolicValue = operand;
	} else if (operand.isREF()) {
		if (operand.Address.isSYM()) {
			symbolicValue = operand.Address;
		} else if (operand.Address.isOP()) {
			symbolicValue = operand.Address.getSymbolicValue();
		}
	}
	if (symbolicValue == null) {
		return;
	}

	targetVarName = symbolicValue.name;

	while (abstraction != null) {
		if (abstraction.AbstractionType == 'CALL') {
			// Look through Call Arguments
			if (abstraction.Arguments[targetVarName] != null) {
				let newVarAlias = abstraction.Arguments[targetVarName];
				yield newVarAlias;
				if (newVarAlias.isOP()) {
					newVarAlias = newVarAlias.getSymbolicValue();
					targetVarName = newVarAlias.name;
				} else if (newVarAlias.isSYM()) {
					targetVarName = newVarAlias.name;
				} else if (newVarAlias.isREF()) {
					if (newVarAlias.Address.isSYM()) {
						newVarAlias = newVarAlias.Address;
					} else if (newVarAlias.Address.isOP()) {
						newVarAlias = newVarAlias.Address.getSymbolicValue();
					}
					targetVarName = newVarAlias.name;
				} else if (newVarAlias.isIMM()) {
					break;
				}
			}
		}
		abstraction = abstraction.ParentAbstraction;
	}
}
// ///////////////////////////////////////////////////////////////

// ///////////////// POST PROCESSING FUNCTIONS ///////////////////

function postProcessAllFunctions() {
  for (const functionName of Object.keys(ProgramDetails.Functions)) {
    abstractionPostProcessing(ProgramDetails.Functions[functionName].Simulator.Abstractions);
  }


  //For Removing actual copy linking method to save memory
  // Object.defineProperty(CallAbstraction.prototype, 'InnerAbstractions',{
  //   get(){
  //     if(!ProgramDetails.Functions[this.FunctionName] || !ProgramDetails.Functions[this.FunctionName].Simulator){
  //       return [];
  //     } else {
  //       return ProgramDetails.Functions[this.FunctionName].Simulator.Abstractions;

  //     }
  //   },
  //   set(abstraction){

  //   }
  // })

  for (const functionName of Object.keys(ProgramDetails.Functions)) {
    LinkFunctionCalls(ProgramDetails.Functions[functionName].Simulator.Abstractions);
  }
}

async function storeAllFunctionsInDB() {
	// return 'Done'

	for (const functionName of Object.keys(ProgramDetails.Functions)) {
		if (
			ProgramDetails.Functions[functionName].Simulator != null &&
			ProgramDetails.Functions[functionName].Simulator.Abstractions != null &&
			ProgramDetails.Functions[functionName].Simulator.Abstractions.length > 0
		) {
			await DB.storeAbstractions(functionName, ProgramDetails.Functions[functionName].Simulator);
			ProgramDetails.Functions[functionName].Simulator = null;
		}
	}

	return 'Done';
}

function abstractionPostProcessingR(abstractionList) {
	let case2ForIndex = null;
	let case2NewMemCpy = null;
	for (let i = 0; i < abstractionList.length; i++) {
		var abstraction = abstractionList[i];

		if (abstraction.AbstractionType == 'IF') {
			// CASE 1
			// check for FOR
			let forIndex = null;
			let store8AbstractionIndex = null;
			let ifAbstractionIndex = null;

			for (var j = 0; j < abstraction.InnerAbstractions.length; j++) {
				const innerAbstraction = abstraction.InnerAbstractions[j];
				if (innerAbstraction.AbstractionType == 'FOR') {
					// Check for IF and Store8 type STORE

					for (let k = 0; k < innerAbstraction.InnerAbstractions.length; k++) {
						const twoLevelsInnerAbstraction = innerAbstraction.InnerAbstractions[k];
						if (twoLevelsInnerAbstraction.AbstractionType == 'STORE') {
							if (twoLevelsInnerAbstraction.OperationCode == 'store8') {
								store8AbstractionIndex = k;
							}
						}

						if (twoLevelsInnerAbstraction.AbstractionType == 'IF') {
							ifAbstractionIndex = k;
						}
					}

					if (store8AbstractionIndex != null && ifAbstractionIndex != null) {
						// Process Loop and Store into Memcpy
						forIndex = j;

						// Make MEMCPY Abstraction
						const store8Abstraction = innerAbstraction.InnerAbstractions[store8AbstractionIndex];
						const ifAbstraction = innerAbstraction.InnerAbstractions[ifAbstractionIndex];
						const newMemcpySize = new Operation(
							'sub',
							'i32',
							ifAbstraction.Condition.lValue,
							ifAbstraction.Condition.rValue,
							store8Abstraction.Start
						);
						const newMemCpyAbstraction = new MemCpyAbstraction(store8Abstraction);
						newMemCpyAbstraction.Size = newMemcpySize;

						// Insert Into For Abstraction
						innerAbstraction.InnerAbstractions.splice(store8AbstractionIndex, 1, newMemCpyAbstraction);

						// Insert SET statement making top IF true
						if (ifAbstraction.Condition.isOP()) {
							const ifConditionSymbolicValue = ifAbstraction.Condition.getSymbolicValue();
							if (ifConditionSymbolicValue != null) {
								const varName = ifConditionSymbolicValue.name;
								const newSetAbstraction = new SetAbstraction(varName, ifAbstraction.Condition.lValue);
								// Remove inner IF from FOR
								innerAbstraction.InnerAbstractions.splice(ifAbstractionIndex, 1, newSetAbstraction);
							}
						} else {
							// Remove inner IF from FOR
							innerAbstraction.InnerAbstractions.splice(ifAbstractionIndex, 1);
						}

						// Update Parent Abstraction in FOR to top IF
						innerAbstraction.InnerAbstractions.forEach((abstr) => {
							abstr.ParentAbstraction = abstraction;
						});
					}
				}
			}

			if (store8AbstractionIndex != null && ifAbstractionIndex != null && forIndex != null) {
				// Remove FOR Abstraction and move FOR Inner Abstractions to IF
				const newIfInnerAbstractionsList = abstraction.InnerAbstractions[forIndex].InnerAbstractions;
				abstraction.InnerAbstractions.splice(forIndex, 1, ...newIfInnerAbstractionsList);
			}
		}

		if (abstraction.AbstractionType == 'FOR') {
			// CASE 2
			if (abstraction.InnerAbstractions.length == 1) {
				const possibleIFMemcpy = abstraction.InnerAbstractions[0];
				for (let j = 0; j < possibleIFMemcpy.InnerAbstractions.length; j++) {
					const innerAbs = possibleIFMemcpy.InnerAbstractions[j];
					if (innerAbs.AbstractionType == 'STORE') {
						if (innerAbs.OperationCode == 'store8') {
							case2ForIndex = i;
							const newMemCpyAbstraction = new MemCpyAbstraction(innerAbs);
							let storeAbstraction = abstraction.Condition;
							if (storeAbstraction != null) {
								// storeAbstraction = storeAbstraction.Condition;

								if (storeAbstraction.isOP()) {
									newMemCpyAbstraction.Size = new Operation(
										'sub',
										'i32',
										storeAbstraction.lValue,
										storeAbstraction.rValue,
										abstraction.Start
									).execute();
								} else {
									newMemCpyAbstraction.Size = storeAbstraction;
								}

								case2NewMemCpy = newMemCpyAbstraction;
							}
						}
					}
				}
			}
		}
	}

	if (case2ForIndex != null && case2NewMemCpy != null) {
		// CASE 2
		abstractionList.splice(case2ForIndex, 1, case2NewMemCpy);
	}
}

function abstractionPostProcessing(abstractionList) {
	RecurseOverInnerAbstractionsIteratively(abstractionList, () => {}, abstractionPostProcessingR);
}

function RecurseOverInnerAbstractionsIteratively(abstractionList, abstractionCallback, abstractionListCallback) {
	if (abstractionList.length == 0) return;
	const abstractionListStack = [];
	abstractionListStack.push(abstractionList);
	while (abstractionListStack.length > 0) {
		const currentList = abstractionListStack.pop();

		abstractionListCallback(currentList);

		for (const innerAbs of currentList) {
			abstractionCallback(innerAbs);
			if (innerAbs.InnerAbstractions.length > 0) {
				abstractionListStack.push(innerAbs.InnerAbstractions);
			}

			if (innerAbs.ElseAbstractions != null && innerAbs.ElseAbstractions.length > 0) {
				abstractionListStack.push(innerAbs.ElseAbstractions);
			}
		}
	}
}

function LinkFunctionCallR(abstraction, currentDepth = 0) {
	if (abstraction.AbstractionType == 'CALL') {
		if (currentDepth < 4) {
			if (abstraction.InnerAbstractions.length > 0) return;

			if (IsFunctionCallRecursive(abstraction)) {
				return;
			}
			const loadedSimulator = lodash.cloneDeep(ProgramDetails.Functions[abstraction.FunctionName].Simulator); // await DB.loadAbstractions(abstraction.FunctionName);
			if (loadedSimulator.Abstractions != null && loadedSimulator.Abstractions.length > 0) {
				const callAbstractions = loadedSimulator.Abstractions;
				callAbstractions.forEach((abs) => {
					abs.ParentAbstraction = abstraction;
				});
				abstraction.InnerAbstractions = callAbstractions;
				abstraction.Scope = loadedSimulator.VirtualStates[0][0];
			}
		}
	}
}

function IsFunctionCallRecursive(callAbstraction) {
	const seenFunctions = {};
	seenFunctions[callAbstraction.FunctionName] = 1;

	let functionName = callAbstraction.FunctionName;
	while (callAbstraction != null) {
		if (callAbstraction.AbstractionType == 'CALL') {
			if (seenFunctions[functionName] == null) {
				seenFunctions[functionName] = 0;
			}
			seenFunctions[functionName] += 1;
		}

		if (callAbstraction.AbstractionType == 'CALL_INDIRECT') {
			functionName = 'Indirect';
			if (seenFunctions[functionName] == null) {
				seenFunctions[functionName] = 0;
			}
			seenFunctions[functionName] += 1;
		}

		if (seenFunctions[functionName] > 2) {
			return true;
		}
		callAbstraction = callAbstraction.ParentAbstraction;
	}
	return false;
}

function LinkFunctionCalls(abstractionList) {
	if (abstractionList.length == 0) return;
	const abstractionListStack = [];
	abstractionListStack.push(abstractionList);
	while (abstractionListStack.length > 0) {
		const currentList = abstractionListStack.pop();

		for (const innerAbs of currentList) {
			LinkFunctionCallR(innerAbs);
			if (innerAbs.InnerAbstractions.length > 0) {
				abstractionListStack.push(innerAbs.InnerAbstractions);
			}

			if (innerAbs.ElseAbstractions != null && innerAbs.ElseAbstractions.length > 0) {
				abstractionListStack.push(innerAbs.ElseAbstractions);
			}
		}
	}
}

function getFunctionType(functionName) {
	//First check internally defined
	let functionType = null;
	if (ProgramDetails.Functions[functionName]) {
		functionType = ProgramDetails.Functions[functionName].FunctionType;
		if (functionType != null) {
			return functionType;
		}
	}

	//If not there, check Imports
	for (const imp of ProgramDetails.Imports) {
		if (imp.ImportedName == functionName) {
			functionType = imp.FunctionType;
			return functionType;
		}
	}
	return functionType;
}
// ///////////////////////////////////////////////////////////////

//////////////////// LINE PROCESSING FUNCTIONS ///////////////////

function onLineReadForDetails(line) {
	let tokens = line.split(/\s+/).map(cleanToken).filter((token) => token != '');
	// Clean comments
	let markCommentIndex = -1;
	for (let k = 0; k < tokens.length; k++) {
		if (tokens[k].includes(';;')) {
			// this and every token after is a comment
			markCommentIndex = k;
			break;
		}
	}

	if (markCommentIndex !== -1) {
		tokens = tokens.slice(0, markCommentIndex);
	}

	let currentTokenIndex = 0;
	while (currentTokenIndex < tokens.length) {
		const token = tokens[currentTokenIndex];

		if (token == TOKENS.DATA_TOKEN && tokens[currentTokenIndex + 2] == TOKENS.i32_const) {
			const startOffset = tokens[currentTokenIndex + 2];
			const payload = tokens.slice(4).join('');
			const dataSection = new DataSection(startOffset, payload);
			ProgramDetails.DataSections.push(dataSection);
		}

		if (token == TOKENS.IMPORT_TOKEN && tokens.includes(TOKENS.FUNCTION_TOKEN)) {
			let funcTokenIndex = tokens.indexOf(TOKENS.FUNCTION_TOKEN);
			let typeTokenIndex = tokens.indexOf(TOKENS.FUNCTION_TYPE_TOKEN);
			const importName = tokens.slice(currentTokenIndex + 1, funcTokenIndex).join(' ');
			const importType = TOKENS.FUNCTION_TOKEN;
			const importFunctionType = ProgramDetails.Types[tokens.slice(typeTokenIndex + 1).join('')];
			const importedName = tokens[funcTokenIndex + 1];
			const importDetails = new ImportDetails(importName, importType);
			importDetails.FunctionType = importFunctionType;
			importDetails.ImportedName = importedName;

			ProgramDetails.Imports.push(importDetails);
		}

		if (token == TOKENS.EXPORT_TOKEN && tokens.includes(TOKENS.FUNCTION_TOKEN)) {
			let funcTokenIndex = tokens.indexOf(TOKENS.FUNCTION_TOKEN);
			const exportName = tokens.slice(currentTokenIndex + 1, funcTokenIndex).join(' ');
			const exportType = TOKENS.FUNCTION_TOKEN;
			const exportedName = tokens.slice(funcTokenIndex + 1).join('');
			const exportDetails = new ExportDetails(exportName, exportType);
			exportDetails.ExportSource = exportedName;

			ProgramDetails.Exports.push(exportDetails);
		}

		if (
			token == TOKENS.FUNCTION_TOKEN &&
			tokens[currentTokenIndex + 2] == TOKENS.FUNCTION_TYPE_TOKEN &&
			!tokens.includes(TOKENS.IMPORT_TOKEN)
		) {
			const functionName = tokens[currentTokenIndex + 1];
			const functionType = tokens[currentTokenIndex + 3];
			// Update current function context
			currentFunction = functionName;
			// Get the function details
			ProgramDetails.NumberOfFunctions += 1;
			const functionDetails = new FunctionDetails(functionName);
			functionDetails.FunctionType = ProgramDetails.Types[functionType];

			if (functionDetails.FunctionType.Result != null) {
				functionDetails.HasResult = true;
				functionDetails.ResultType = functionDetails.FunctionType.Result;
				functionDetails.Params = [ ...functionDetails.FunctionType.Params ];
			}
			for (let i = 3; i < tokens.length; i++) {
				// Get function parameter details
				if (tokens[i] == TOKENS.FUNCTION_PARAM_TOKEN) {
					functionDetails.Params.push({ Name: tokens[i + 1], Type: tokens[i + 2] }); // get rid of trailing parenthesis
				}

				if (tokens[i] == TOKENS.FUNCTION_RESULT_TOKEN) {
					functionDetails.HasResult = true;
					functionDetails.ResultType = tokens[i + 1];
				}
			}
			if (ProgramDetails.Functions[functionName] == null) {
				ProgramDetails.Functions[functionName] = functionDetails;
			} else {
				ProgramDetails.Functions[functionName].Params = functionDetails.Params;
				ProgramDetails.Functions[functionName].NumberOfLoops = functionDetails.NumberOfLoops;
				ProgramDetails.Functions[functionName].NumberOfIfs = functionDetails.NumberOfIfs;
				ProgramDetails.Functions[functionName].Loops = functionDetails.Loops;
				ProgramDetails.Functions[functionName].LoopLines = functionDetails.LoopLines;
				ProgramDetails.Functions[functionName].Ifs = functionDetails.Ifs;
				ProgramDetails.Functions[functionName].HasResult = functionDetails.HasResult;
				ProgramDetails.Functions[functionName].ResultType = functionDetails.ResultType;
				ProgramDetails.Functions[functionName].FunctionType = functionDetails.FunctionType;
			}

			return;
		}

		if (token == TOKENS.FUNCTION_TOKEN && tokens[currentTokenIndex + 1] == TOKENS.EXPORT_TOKEN) {
			const functionName = tokens[currentTokenIndex + 1];
			// Update current function context
			currentFunction = functionName;
			// Get the function details
			ProgramDetails.NumberOfFunctions += 1;
			const functionDetails = new FunctionDetails(functionName);

			if (ProgramDetails.Functions[functionName] == null) {
				ProgramDetails.Functions[functionName] = functionDetails;
			} else {
				ProgramDetails.Functions[functionName].Params = functionDetails.Params;
				ProgramDetails.Functions[functionName].NumberOfLoops = functionDetails.NumberOfLoops;
				ProgramDetails.Functions[functionName].NumberOfIfs = functionDetails.NumberOfIfs;
				ProgramDetails.Functions[functionName].Loops = functionDetails.Loops;
				ProgramDetails.Functions[functionName].LoopLines = functionDetails.LoopLines;
				ProgramDetails.Functions[functionName].Ifs = functionDetails.Ifs;
			}

			return;
		}

		if (token == TOKENS.FUNCTION_TYPE_TOKEN && currentTokenIndex == 0) {
			const typeName = tokens[currentTokenIndex + 1];
			const typeDetails = new TypeDetails(typeName);

			let seenParamKeyword = false;
			let seenResultKeyword = false;
			for (let i = currentTokenIndex + 2; i < tokens.length; i++) {
				if (tokens[i] == TOKENS.FUNCTION_PARAM_TOKEN) {
					seenParamKeyword = true;
					continue;
				}

				if (tokens[i] == TOKENS.FUNCTION_RESULT_TOKEN) {
					seenParamKeyword = false;
					seenResultKeyword = true;
					continue;
				}

				if (seenParamKeyword) {
					typeDetails.Params.push(tokens[i]);
				}

				if (seenResultKeyword) {
					typeDetails.Result = tokens[i];
				}
			}

			ProgramDetails.Types[typeName] = typeDetails;
		}

		if (token == TOKENS.elemToken) {
			let globalInstructionIndex = tokens.indexOf(TOKENS.get_global);
			if (globalInstructionIndex == -1) {
				globalInstructionIndex = tokens.indexOf(TOKENS.get_global_alt);
			} else {
				globalInstructionIndex += 2;
			}
			if (globalInstructionIndex == -1) {
				globalInstructionIndex = currentTokenIndex + 3;
			} else {
				globalInstructionIndex += 2;
			}

			for (let i = globalInstructionIndex; i < tokens.length; i++) {
				ProgramDetails.TableFunctions.push(tokens[i]);
			}
		}

		if (token == '') {
			currentTokenIndex++;
			continue;
		}

		switch (token) {
			case TOKENS.call:
				{
					const functionCallName = tokens[++currentTokenIndex];
					if (ProgramDetails.Functions[functionCallName] == null) {
						ProgramDetails.Functions[functionCallName] = new FunctionDetails(functionCallName);
					}
					ProgramDetails.Functions[currentFunction].Calls.push({
						Function: ProgramDetails.Functions[functionCallName],
						Line: lineNumber,
						Args: []
					});
				}
				break;
		}
		if (token == TOKENS.CALL_INDIRECT_TOKEN) {
			ProgramDetails.Functions[currentFunction].Calls.push({
				Function: { Name: '<call_indirect>', Calls: [] },
				Line: lineNumber,
				Args: []
			});
		}

		// Look for the start of loops
		if (token == TOKENS.LOOP_TOKEN) {
			contextBreakStack.push({ type: TOKENS.LOOP_TOKEN, line: lineNumber });
			ProgramDetails.Functions[currentFunction].LoopLines.push(lineNumber);
		}

		// Look for the start of if statements
		if (token == TOKENS.IF_TOKEN) {
			contextBreakStack.push({ type: TOKENS.IF_TOKEN, line: lineNumber });
		}

		// Look for the end of a loop or if statement
		if (token == TOKENS.END_TOKEN) {
			if (contextBreakStack.length > 0) {
				const lastToken = contextBreakStack.pop();

				if (lastToken.type == TOKENS.LOOP_TOKEN) {
					ProgramDetails.Functions[currentFunction].NumberOfLoops += 1;
				} else if (lastToken.type == TOKENS.IF_TOKEN) {
					ProgramDetails.Functions[currentFunction].NumberOfIfs += 1;
					ProgramDetails.Functions[currentFunction].Ifs.push({
						type: TOKENS.IF_TOKEN,
						start: lastToken.line,
						end: lineNumber
					});
				}
			}
		}
		currentTokenIndex += 1;
	}
}

function onLineReadForAbstraction(line) {
	let tokens = line.split(/\s+/).map(cleanToken);

	let currentTokenIndex = 0;
	try {
		while (currentTokenIndex < tokens.length) {
			const token = tokens[currentTokenIndex];

			// /////////////////////////////  PREPROCESSING STUFF /////////////////////////////////
			if (token == '') {
				currentTokenIndex++;
				continue;
			}

			if (
				token == TOKENS.FUNCTION_TOKEN &&
				tokens[currentTokenIndex + 2] == TOKENS.FUNCTION_TYPE_TOKEN &&
				!tokens.includes(TOKENS.IMPORT_TOKEN)
			) {
				const functionName = tokens[currentTokenIndex + 1];
				// Store Simulator of previous function in DB
				if (Simulator != null) {
					// Simulator.Abstractions = await abstractionPostProcessing(Simulator.Abstractions);
					DB.storeAbstractions(currentFunction, Simulator);
					// ProgramDetails.Functions[currentFunction].Simulator = null;
				}

				// Update current function context
				currentFunction = functionName;
				Simulator = ProgramDetails.Functions[currentFunction].Simulator;
				const functionType = getFunctionType(currentFunction);
				Simulator.handleInitialDefinition(functionType, lineNumber);
			}

			// /////////////////////////////  PARSING FUNCTIONALITY /////////////////////////////////

			switch (token) {
				case TOKENS.call:
					{
						const functionCallName = cleanToken(tokens[++currentTokenIndex]);
						Simulator.handleCall(functionCallName);
					}
					break;
				case TOKENS.call_indirect:
					{
						let functionType = null;
						if (tokens[currentTokenIndex + 2] != null) {
							functionType = tokens[currentTokenIndex + 2];
						}
						Simulator.handleCallIndirect(functionType);
					}
					break;
				case TOKENS.get_global:
				case TOKENS.get_global_alt:
					{
						const varName = tokens[++currentTokenIndex];

						Simulator.handleGetGlobal(token, varName);
					}
					break;
				case TOKENS.set_global:
				case TOKENS.set_global_alt:
					{
						const varName = tokens[++currentTokenIndex];

						Simulator.handleSetGlobal(token, varName);
					}
					break;
				case TOKENS.get_local:
				case TOKENS.get_local_alt:
					{
						const varName = tokens[++currentTokenIndex];

						Simulator.handleGetLocal(token, varName);
					}
					break;
				case TOKENS.set_local:
				case TOKENS.set_local_alt:
					{
						const varName = tokens[++currentTokenIndex];

						Simulator.handleSetLocal(token, varName);
					}
					break;
				case TOKENS.tee_local:
				case TOKENS.tee_local_alt:
					{
						const varName = tokens[++currentTokenIndex];

						Simulator.handleTeeLocal(token, varName);
					}
					break;
				case TOKENS.i32_load8_s:
				case TOKENS.i32_load8_u:
				case TOKENS.i32_load16_s:
				case TOKENS.i32_load16_u:
				case TOKENS.i32_load:
				case TOKENS.i64_load8_s:
				case TOKENS.i64_load8_u:
				case TOKENS.i64_load16_s:
				case TOKENS.i64_load16_u:
				case TOKENS.i64_load32_s:
				case TOKENS.i64_load32_u:
				case TOKENS.i64_load:
				case TOKENS.f32_load:
				case TOKENS.f64_load:
					{
						const secondToken = ++currentTokenIndex < tokens.length ? tokens[currentTokenIndex] : null;
						const thirdToken = ++currentTokenIndex < tokens.length ? tokens[currentTokenIndex] : null;
						Simulator.handleLoad(token, secondToken, thirdToken);
					}
					break;
				case TOKENS.i32_store8:
				case TOKENS.i32_store16:
				case TOKENS.i32_store:
				case TOKENS.i64_store8:
				case TOKENS.i64_store16:
				case TOKENS.i64_store32:
				case TOKENS.i64_store:
				case TOKENS.f32_store:
				case TOKENS.f64_store:
					{
						const secondToken = ++currentTokenIndex < tokens.length ? tokens[currentTokenIndex] : null;
						const thirdToken = ++currentTokenIndex < tokens.length ? tokens[currentTokenIndex] : null;
						Simulator.handleStore(token, secondToken, thirdToken);
					}
					break;
				case TOKENS.i32_const:
				case TOKENS.i64_const:
				case TOKENS.f32_const:
				case TOKENS.f64_const:
					{
						const dataType = token.split('.')[0];
						const val = tokens[++currentTokenIndex];

						Simulator.handleConst(val, dataType);
					}
					break;
				// Binary Operators
				case TOKENS.i32_add:
				case TOKENS.i32_sub:
				case TOKENS.i32_mul:
				case TOKENS.i32_div_s:
				case TOKENS.i32_div_u:
				case TOKENS.i32_rem_s:
				case TOKENS.i32_rem_u:
				case TOKENS.i32_and:
				case TOKENS.i32_or:
				case TOKENS.i32_xor:
				case TOKENS.i32_shl:
				case TOKENS.i32_shr_u:
				case TOKENS.i32_shr_s:
				case TOKENS.i32_rotl:
				case TOKENS.i32_rotr:
				case TOKENS.i32_eq:
				case TOKENS.i32_ne:
				case TOKENS.i32_lt_s:
				case TOKENS.i32_le_s:
				case TOKENS.i32_lt_u:
				case TOKENS.i32_le_u:
				case TOKENS.i32_gt_s:
				case TOKENS.i32_ge_s:
				case TOKENS.i32_gt_u:
				case TOKENS.i32_ge_u:
				case TOKENS.i64_add:
				case TOKENS.i64_sub:
				case TOKENS.i64_mul:
				case TOKENS.i64_div_s:
				case TOKENS.i64_div_u:
				case TOKENS.i64_rem_s:
				case TOKENS.i64_rem_u:
				case TOKENS.i64_and:
				case TOKENS.i64_or:
				case TOKENS.i64_xor:
				case TOKENS.i64_shl:
				case TOKENS.i64_shr_u:
				case TOKENS.i64_shr_s:
				case TOKENS.i64_rotl:
				case TOKENS.i64_rotr:
				case TOKENS.i64_eq:
				case TOKENS.i64_ne:
				case TOKENS.i64_lt_s:
				case TOKENS.i64_le_s:
				case TOKENS.i64_lt_u:
				case TOKENS.i64_le_u:
				case TOKENS.i64_gt_s:
				case TOKENS.i64_ge_s:
				case TOKENS.i64_gt_u:
				case TOKENS.i64_ge_u:
				case TOKENS.f32_add:
				case TOKENS.f32_sub:
				case TOKENS.f32_mul:
				case TOKENS.f32_div:
				case TOKENS.f32_eq:
				case TOKENS.f32_ne:
				case TOKENS.f32_lt:
				case TOKENS.f32_le:
				case TOKENS.f32_gt:
				case TOKENS.f32_ge:
				case TOKENS.f32_min:
				case TOKENS.f32_max:
				case TOKENS.f64_add:
				case TOKENS.f64_sub:
				case TOKENS.f64_mul:
				case TOKENS.f64_div:
				case TOKENS.f64_eq:
				case TOKENS.f64_ne:
				case TOKENS.f64_lt:
				case TOKENS.f64_le:
				case TOKENS.f64_gt:
				case TOKENS.f64_ge:
				case TOKENS.f64_min:
				case TOKENS.f64_max:
					{
						Simulator.handleBinaryOperation(token);
					}
					break;
				// Unary Operators
				case TOKENS.i32_clz:
				case TOKENS.i32_ctz:
				case TOKENS.i32_popcnt:
				case TOKENS.i32_eqz:
				case TOKENS.i64_clz:
				case TOKENS.i64_ctz:
				case TOKENS.i64_popcnt:
				case TOKENS.i64_eqz:
				case TOKENS.f32_abs:
				case TOKENS.f32_neg:
				case TOKENS.f32_copysign:
				case TOKENS.f32_ceil:
				case TOKENS.f32_floor:
				case TOKENS.f32_trunc:
				case TOKENS.f32_nearest:
				case TOKENS.f32_sqrt:
				case TOKENS.f64_abs:
				case TOKENS.f64_neg:
				case TOKENS.f64_copysign:
				case TOKENS.f64_ceil:
				case TOKENS.f64_floor:
				case TOKENS.f64_trunc:
				case TOKENS.f64_sqrt:
				case TOKENS.f64_nearest:
				case TOKENS.i32_wrap_i64:
				case TOKENS.i32_trunc_s_f32:
				case TOKENS.i32_trunc_s_f64:
				case TOKENS.i32_trunc_u_f32:
				case TOKENS.i32_trunc_u_f64:
				case TOKENS.i32_reinterpret_f32:
				case TOKENS.i64_extend_s_i32:
				case TOKENS.i64_extend_u_i32:
				case TOKENS.i64_trunc_s_f32:
				case TOKENS.i64_trunc_s_f64:
				case TOKENS.i64_trunc_u_f32:
				case TOKENS.i64_trunc_u_f64:
				case TOKENS.i64_reinterpret_f64:
				case TOKENS.f32_demote_f64:
				case TOKENS.f32_convert_s_i32:
				case TOKENS.f32_convert_s_i64:
				case TOKENS.f32_convert_u_i32:
				case TOKENS.f32_convert_u_i64:
				case TOKENS.f32_reinterpret_i32:
				case TOKENS.f64_promote_f32:
				case TOKENS.f64_convert_s_i32:
				case TOKENS.f64_convert_s_i64:
				case TOKENS.f64_convert_u_i32:
				case TOKENS.f64_convert_u_i64:
				case TOKENS.f64_reinterpret_i64:
					Simulator.handleUnaryOperation(token);
					break;
				case TOKENS.IF_TOKEN:
					Simulator.handleIf();
					break;
				case TOKENS.LOOP_TOKEN:
					Simulator.handleFor();
					break;
				case TOKENS.END_TOKEN:
					if (lineNumber == 45251) {
						console.log('HEre');
					}
					Simulator.handleEnd();
					break;
				case TOKENS.drop:
					Simulator.handleDrop();
					break;
				case TOKENS.ELSE_TOKEN:
					Simulator.handleElse();
					break;
				case TOKENS.block:
					Simulator.handleBlock();
					break;
				case TOKENS.br_if:
					if (lineNumber == 45250) {
						console.log('HEre');
					}
					Simulator.handleBrIf();
					break;
			}

			currentTokenIndex += 1;
		}
	} catch (error) {
		console.error(error);

		console.log(JSON.stringify({ error: true, errorDetails: error }));
		process.exit();
	}
}

async function onLineReadForDetailsEnd() {
	let totalTimeForGraph = 0;
	let totalMemoryUsage = 0;
	let totalTimeForDetection = 0;

	const beforeFunctionPostProcess = process.memoryUsage();
	const postProcessStart = process.hrtime();
	try {
		postProcessAllFunctions();
	} catch (error) {
		console.error(error);

		console.log(JSON.stringify({ error: true, errorDetails: error }));
		DB.quit();
		process.exit();
	}
	const afterFunctionPostProcess = process.memoryUsage();

	totalTimeForGraph += process.hrtime(postProcessStart)[1];
	totalMemoryUsage += afterFunctionPostProcess.heapUsed - beforeFunctionPostProcess.heapUsed;

	storeAllFunctionsInDB()
		.then(() => {
			const HashCandidates = [];
			const probableHashCandidates = [];
			const unlikelyHashCandidates = [];
			const mainLoopBlock = [];
			// global.gc();
			const functionsToCheck = Object.keys(ProgramDetails.Functions);

			Promise.all(
				functionsToCheck.map((functionName) =>
					DB.loadAbstractions(functionName)
						.then((loadedSimulator) => {
							if (loadedSimulator == null) {
								return null;
							}
							if (loadedSimulator.Abstractions != null && loadedSimulator.Abstractions.length > 0) {
								const beforeMemUsage = process.memoryUsage();
								const individualGraphStart = process.hrtime();
								let graph = makeGraphFromAbstractionList(loadedSimulator.Abstractions);

								totalTimeForGraph += process.hrtime(individualGraphStart)[1];
								const afterMemUsage = process.memoryUsage();

								totalMemoryUsage += afterMemUsage.heapUsed - beforeMemUsage.heapUsed;
								const variable_definitions =
									loadedSimulator.VirtualStates[loadedSimulator.VirtualStates.length - 1][0];
								const detectionStart = process.hrtime();

								const MainLoopBlock = Identify_MainLoopBlock(graph);
								if (MainLoopBlock.length > 0) {
									mainLoopBlock.push(...MainLoopBlock);
								}
								const HashEachBlock = Identify_HashEachBlock(
									graph,
									[ 1, 2, 4, 8, 32, 64, 128, 256, 512, 1024 ],
									variable_definitions
								);
								const StoreRemainMessage = Identify_StoreRemainMessage(graph, HashEachBlock);
								const PadLastPartialBlock = Identify_PadLastPartialBlock(graph, StoreRemainMessage);
								if (PadLastPartialBlock.length > 0) {
									HashCandidates.push([ functionName, PadLastPartialBlock ]);
									// probableHashCandidates.push([ functionName,  StoreRemainMessage]);
									// unlikelyHashCandidates.push([ functionName,  HashEachBlock]);
								} else {
									if (StoreRemainMessage.length > 0) {
										probableHashCandidates.push([ functionName, StoreRemainMessage ]);
										// unlikelyHashCandidates.push([ functionName,  HashEachBlock]);
									} else {
										if (HashEachBlock.length > 0) {
											unlikelyHashCandidates.push([ functionName, HashEachBlock ]);
										}
									}
								}
								totalTimeForDetection += process.hrtime(detectionStart)[1];

								graph = null;
								return Promise.resolve();
							}
							return Promise.resolve();
						})
						.catch((e) => {
							console.error(e);

							console.log(JSON.stringify({ error: true, errorDetails: e }));
							process.exit();
						})
				)
			).then((results) => {
				const outputObject = {
					certain: HashCandidates.map((entry) => entry[0]),
					probable: probableHashCandidates.map((entry) => entry[0]),
					unlikely: unlikelyHashCandidates.map((entry) => entry[0]),
					mainLoop: mainLoopBlock[0]
				};
				console.log(JSON.stringify(outputObject));
				const stats = fs.statSync(FILE_TO_READ);
				const fileSizeInBytes = stats.size;
				// console.log(`File Size: ${fileSizeInBytes / 1e3} KB`);
				// console.log(`Total Memory Usage: ${totalMemoryUsage / 1e6} MB`);
				// console.log(`Total Time for Graph Construction: ${totalTimeForGraph / 1e6 } ms`);
				// console.log(`Total Time for Detection: ${totalTimeForDetection / 1e6} ms`);
				// console.log(`${FILE_TO_READ},${fileSizeInBytes / 1e3},${totalMemoryUsage / 1e6},${totalTimeForGraph / 1e6},${totalTimeForDetection / 1e6}`)

				DB.quit();
				process.exit();
			});
		})
		.catch((e) => {
			console.error(e);

			console.log(JSON.stringify({ error: true, errorDetails: e }));
			process.exit();
		});
}
//////////////////////////////////////////////////////////////////

//////////////////// MAIN EXECUTION ///////////////////

let currentFunction = null;
const contextBreakStack = [];
let lineNumber = 0;
let Simulator;

const fileStream = fs.createReadStream(resolve(FILE_TO_READ));
fileStream.on('error', (error) => {
	console.log(JSON.stringify({ error: true, errorDetails: error }));
	console.error(error);
	DB.quit();
	process.exit();
});

const readInterface = readline.createInterface({
	input: fileStream
});

let secondReadInterface;
const fileLineBuffer = new FileLineReader(100);
readInterface.on('line', (line) => {
	onLineReadForDetails(line);

	lineNumber += 1;
});
readInterface.on('error', (error) => {
	console.error(error);

	console.log(JSON.stringify({ error: true, errorDetails: error }));
	DB.quit();
	process.exit();
});

readInterface.on('close', () => {
	secondReadInterface = readline.createInterface({
		input: fs.createReadStream(resolve(FILE_TO_READ))
	});
	lineNumber = 0;
	currentFunction = null;
	secondReadInterface.on('error', (error) => {
		console.error(error);

		console.log(JSON.stringify({ error: true, errorDetails: error }));
		DB.quit();
		process.exit();
	});
	secondReadInterface.on('line', (line) => {
		lineNumber += 1;

		fileLineBuffer.addLine(line);
		onLineReadForAbstraction(line);
	});

	secondReadInterface.on('close', onLineReadForDetailsEnd);
});
