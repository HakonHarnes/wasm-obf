//Token constants, move to separate file later

//Memory Accessors
const i32_load8_s = 'i32.load8_s'
const i32_load8_u = 'i32.load8_u'
const i32_load16_s = 'i32.load16_s'
const i32_load16_u = 'i32.load16_u'
const i32_load = 'i32.load'
const i64_load8_s = 'i64.load8_s'
const i64_load8_u = 'i64.load8_u'
const i64_load16_s = 'i64.load16_s'
const i64_load16_u = 'i64.load16_u'
const i64_load32_s = 'i64.load32_s'
const i64_load32_u = 'i64.load32_u'
const i64_load = 'i64.load'
const f32_load = 'f32.load'
const f64_load = 'f64.load'

const i32_store8 = 'i32.store8'
const i32_store16 = 'i32.store16'
const i32_store = 'i32.store'
const i64_store8 = 'i64.store8'
const i64_store16 = 'i64.store16'
const i64_store32 = 'i64.store32'
const i64_store = 'i64.store'
const f32_store = 'f32.store'
const f64_store = 'f64.store'

const get_local = 'get_local'
const set_local = 'set_local'
const tee_local = 'tee_local'

const get_global = 'get_global'
const set_global = 'set_global'

const get_local_alt = 'local.get'
const set_local_alt = 'local.set'
const tee_local_alt = 'local.tee'

const get_global_alt = 'global.get'
const set_global_alt = 'global.set'

//Control flow
const nop = 'nop'
const block = 'block'
const loop = 'loop'
const wasm_if = 'if'
const wasm_else = 'else'
const br = 'br'
const br_if = 'br_if'
const br_table = 'br_table'
const wasm_return = 'return'
const end = 'end'

const call = 'call'
const call_indirect = 'call_indirect'

//Constant
const i32_const = 'i32.const'
const i64_const = 'i64.const'
const f32_const = 'f32.const'
const f64_const = 'f64.const'

//Operations
const i32_add = 'i32.add'
const i32_sub = 'i32.sub'
const i32_mul = 'i32.mul'
const i32_div_s = 'i32.div_s'
const i32_div_u = 'i32.div_u'
const i32_rem_s = 'i32.rem_s'
const i32_rem_u = 'i32.rem_u'
const i32_and = 'i32.and'
const i32_or = 'i32.or'
const i32_xor = 'i32.xor'
const i32_shl = 'i32.shl'
const i32_shr_u = 'i32.shr_u'
const i32_shr_s = 'i32.shr_s'
const i32_rotl = 'i32.rotl'
const i32_rotr = 'i32.rotr'
const i32_eq = 'i32.eq'
const i32_ne = 'i32.ne'
const i32_lt_s = 'i32.lt_s'
const i32_le_s = 'i32.le_s'
const i32_lt_u = 'i32.lt_u'
const i32_le_u = 'i32.le_u'
const i32_gt_s = 'i32.gt_s'
const i32_ge_s = 'i32.ge_s'
const i32_gt_u = 'i32.gt_u'
const i32_ge_u = 'i32.ge_u'
const i32_clz = 'i32.clz'
const i32_ctz = 'i32.ctz'
const i32_popcnt = 'i32.popcnt'
const i32_eqz = 'i32.eqz'

const i64_add = 'i64.add'
const i64_sub = 'i64.sub'
const i64_mul = 'i64.mul'
const i64_div_s = 'i64.div_s'
const i64_div_u = 'i64.div_u'
const i64_rem_s = 'i64.rem_s'
const i64_rem_u = 'i64.rem_u'
const i64_and = 'i64.and'
const i64_or = 'i64.or'
const i64_xor = 'i64.xor'
const i64_shl = 'i64.shl'
const i64_shr_u = 'i64.shr_u'
const i64_shr_s = 'i64.shr_s'
const i64_rotl = 'i64.rotl'
const i64_rotr = 'i64.rotr'
const i64_eq = 'i64.eq'
const i64_ne = 'i64.ne'
const i64_lt_s = 'i64.lt_s'
const i64_le_s = 'i64.le_s'
const i64_lt_u = 'i64.lt_u'
const i64_le_u = 'i64.le_u'
const i64_gt_s = 'i64.gt_s'
const i64_ge_s = 'i64.ge_s'
const i64_gt_u = 'i64.gt_u'
const i64_ge_u = 'i64.ge_u'
const i64_clz = 'i64.clz'
const i64_ctz = 'i64.ctz'
const i64_popcnt = 'i64.popcnt'
const i64_eqz = 'i64.eqz'

const f32_add = 'f32.add'
const f32_sub = 'f32.sub'
const f32_mul = 'f32.mul'
const f32_div = 'f32.div'
const f32_abs = 'f32.abs'
const f32_neg = 'f32.neg'
const f32_copysign = 'f32.copysign'
const f32_ceil = 'f32.ceil'
const f32_floor = 'f32.floor'
const f32_trunc = 'f32.trunc'
const f32_nearest = 'f32.nearest'
const f32_eq = 'f32.eq'
const f32_ne = 'f32.ne'
const f32_lt = 'f32.lt'
const f32_le = 'f32.le'
const f32_gt = 'f32.gt'
const f32_ge = 'f32.ge'
const f32_sqrt = 'f32.sqrt'
const f32_min = 'f32.min'
const f32_max = 'f32.max'

const f64_add = 'f64.add'
const f64_sub = 'f64.sub'
const f64_mul = 'f64.mul'
const f64_div = 'f64.div'
const f64_abs = 'f64.abs'
const f64_neg = 'f64.neg'
const f64_copysign = 'f64.copysign'
const f64_ceil = 'f64.ceil'
const f64_floor = 'f64.floor'
const f64_trunc = 'f64.trunc'
const f64_nearest = 'f64.nearest'
const f64_eq = 'f64.eq'
const f64_ne = 'f64.ne'
const f64_lt = 'f64.lt'
const f64_le = 'f64.le'
const f64_gt = 'f64.gt'
const f64_ge = 'f64.ge'
const f64_sqrt = 'f64.sqrt'
const f64_min = 'f64.min'
const f64_max = 'f64.max'

const i32_wrap_i64 = 'i32.wrap/i64'
const i32_trunc_s_f32 = 'i32.trunc_s/f32'
const i32_trunc_s_f64 = 'i32.trunc_s/f64'
const i32_trunc_u_f32 = 'i32.trunc_u/f32'
const i32_trunc_u_f64 = 'i32.trunc_u/f64'
const i32_reinterpret_f32 = 'i32.reinterpret/f32'
const i64_extend_s_i32 = 'i64.extend_s/i32'
const i64_extend_u_i32 = 'i64.extend_u/i32'
const i64_trunc_s_f32 = 'i64.trunc_s/f32'
const i64_trunc_s_f64 = 'i64.trunc_s/f64'
const i64_trunc_u_f32 = 'i64.trunc_u/f32'
const i64_trunc_u_f64 = 'i64.trunc_u/f64'
const i64_reinterpret_f64 = 'i64.reinterpret/f64'
const f32_demote_f64 = 'f32.demote/f64'
const f32_convert_s_i32 = 'f32.convert_s/i32'
const f32_convert_s_i64 = 'f32.convert_s/i64'
const f32_convert_u_i32 = 'f32.convert_u/i32'
const f32_convert_u_i64 = 'f32.convert_u/i64'
const f32_reinterpret_i32 = 'f32.reinterpret/i32'
const f64_promote_f32 = 'f64.promote/f32'
const f64_convert_s_i32 = 'f64.convert_s/i32'
const f64_convert_s_i64 = 'f64.convert_s/i64'
const f64_convert_u_i32 = 'f64.convert_u/i32'
const f64_convert_u_i64 = 'f64.convert_u/i64'
const f64_reinterpret_i64 = 'f64.reinterpret/i64'

const drop = 'drop'
const select = 'select'

const elseToken = 'else';
const elemToken = 'elem';

const FUNCTION_TOKEN = 'func'
const FUNCTION_TYPE_TOKEN = "type"
const FUNCTION_PARAM_TOKEN = 'param'
const FUNCTION_RESULT_TOKEN = 'result'
const CALL_TOKEN = 'call';
const CALL_INDIRECT_TOKEN = 'call_indirect'
const LOOP_TOKEN = 'loop';
const END_TOKEN = 'end';
const IF_TOKEN = 'if';
const GET_LOCAL_TOKEN = 'get_local'
const TEE_LOCAL_TOKEN = 'tee_local'
const SET_LOCAL_TOKEN = 'set_local'
const STORE_LOCAL_TOKEN='store';
const LOAD_TOKEN='load'
const GET_GLOBAL='get_global'
const SET_GLOBAL='set_global'

const CONST_OP = 'const'

const EQUAL_OP ='eq';
const NOT_EQUAL_OP='ne'
const LESS_THAN_SIGNED_OP='lt_s'
const LESS_EQUAL_SIGNED_OP='le_s'
const LESS_THAN_UNSIGNED_OP='lt_u'
const LESS_EQUAL_UNSIGNED_OP='le_u'
const GREATER_THAN_SIGNED_OP='gt_s'
const GREATER_EQUAL_SIGNED_OP='ge_s'
const GREATER_THAN_UNSIGNED_OP='gt_u'
const GREATER_EQUAL_UNSIGNED_OP='ge_u'
const EQUAL_ZERO_OP='eqz'

const BLOCK_TOKEN = 'block';

const ADD_OP='add';
const SUB_OP = 'sub';
const MUL_OP = 'mul';
const DIV_SIGNED_OP = 'div_s';
const DIV_UNSIGNED_OP = 'div_u';
const AND_OP = 'and';
const OR_OP = 'or';
const XOR_OP = 'xor';
const SHIFT_LEFT_OP = 'shl';
const SHIFT_RIGHT_SIGNED = 'shr_s'
const SHIFT_RIGHT_UNSIGNED = 'shr_u'
const ROTATE_LEFT = 'rotl'
const ROTATE_RIGHT = 'rotr';

const BRANCH_TOKEN = 'br';
const RETURN_TOKEN = 'return'

const BINARY_COMPARISONS = [EQUAL_OP, NOT_EQUAL_OP,LESS_EQUAL_SIGNED_OP,LESS_THAN_SIGNED_OP, LESS_EQUAL_UNSIGNED_OP, LESS_THAN_UNSIGNED_OP, GREATER_THAN_SIGNED_OP, GREATER_EQUAL_SIGNED_OP, GREATER_THAN_UNSIGNED_OP, GREATER_EQUAL_UNSIGNED_OP]
const UNARY_COMPARISONS = [EQUAL_ZERO_OP]

const DIRECT_STACK_PUSHING_OP = [CONST_OP]
const INDIRECT_STACK_PUSHING_OP = [GET_LOCAL_TOKEN, TEE_LOCAL_TOKEN]

const ZERO_CHANGE_OPS = [LOAD_TOKEN, TEE_LOCAL_TOKEN]
const PLUS_ONE_CHANGE_OPS = [GET_LOCAL_TOKEN,  CONST_OP, GET_GLOBAL]
const MINUS_ONE_CHANGE_OPS = [SHIFT_LEFT_OP, SHIFT_RIGHT_SIGNED,SHIFT_RIGHT_UNSIGNED, ROTATE_LEFT, ROTATE_RIGHT, ADD_OP, SUB_OP, MUL_OP, DIV_SIGNED_OP, DIV_UNSIGNED_OP, AND_OP, OR_OP, XOR_OP, SET_GLOBAL, SET_LOCAL_TOKEN]
const MINUS_TWO_CHANGE_OPS = [STORE_LOCAL_TOKEN]

const Constant_Ops = [i32_const, i64_const, f32_const, f64_const]

//Loads
module.exports.i32_load8_s = i32_load8_s
module.exports.i32_load8_u = i32_load8_u
module.exports.i32_load16_s = i32_load16_s
module.exports.i32_load16_u = i32_load16_u
module.exports.i32_load = i32_load
module.exports.i64_load8_s = i64_load8_s
module.exports.i64_load8_u = i64_load8_u
module.exports.i64_load16_s = i64_load16_s
module.exports.i64_load16_u = i64_load16_u
module.exports.i64_load32_s = i64_load32_s
module.exports.i64_load32_u = i64_load32_u
module.exports.i64_load = i64_load
module.exports.f32_load = f32_load
module.exports.f64_load = f64_load

//Stores
module.exports.i32_store8 = i32_store8
module.exports.i32_store16 = i32_store16
module.exports.i32_store = i32_store
module.exports.i64_store8 = i64_store8
module.exports.i64_store16 = i64_store16
module.exports.i64_store32 = i64_store32
module.exports.i64_store = i64_store
module.exports.f32_store = f32_store
module.exports.f64_store = f64_store

//Locals
module.exports.get_local = get_local
module.exports.set_local = set_local
module.exports.tee_local = tee_local
module.exports.get_local_alt = get_local_alt
module.exports.set_local_alt = set_local_alt
module.exports.tee_local_alt = tee_local_alt
//Globals
module.exports.get_global = get_global
module.exports.set_global = set_global
module.exports.get_global_alt = get_global_alt
module.exports.set_global_alt = set_global_alt
//Control flow
module.exports.nop = nop
module.exports.block = block
module.exports.loop = loop
module.exports.wasm_if = wasm_if
module.exports.wasm_else = wasm_else
module.exports.br = br
module.exports.br_if = br_if
module.exports.br_table = br_table
module.exports.wasm_return = wasm_return
module.exports.end = end

//Calls
module.exports.call = call
module.exports.call_indirect = call_indirect

//Constant
module.exports.i32_const = i32_const
module.exports.i64_const = i64_const
module.exports.f32_const = f32_const
module.exports.f64_const = f64_const

//Operations
module.exports.i32_add = i32_add
module.exports.i32_sub = i32_sub
module.exports.i32_mul = i32_mul
module.exports.i32_div_s = i32_div_s
module.exports.i32_div_u = i32_div_u
module.exports.i32_rem_s = i32_rem_s
module.exports.i32_rem_u = i32_rem_u
module.exports.i32_and = i32_and
module.exports.i32_or = i32_or
module.exports.i32_xor = i32_xor
module.exports.i32_shl = i32_shl
module.exports.i32_shr_u = i32_shr_u
module.exports.i32_shr_s = i32_shr_s
module.exports.i32_rotl = i32_rotl
module.exports.i32_rotr = i32_rotr
module.exports.i32_eq = i32_eq
module.exports.i32_ne = i32_ne
module.exports.i32_lt_s = i32_lt_s
module.exports.i32_le_s = i32_le_s
module.exports.i32_lt_u = i32_lt_u
module.exports.i32_le_u = i32_le_u
module.exports.i32_gt_s = i32_gt_s
module.exports.i32_ge_s = i32_ge_s
module.exports.i32_gt_u = i32_gt_u
module.exports.i32_ge_u = i32_ge_u
module.exports.i32_clz = i32_clz
module.exports.i32_ctz = i32_ctz
module.exports.i32_popcnt = i32_popcnt
module.exports.i32_eqz = i32_eqz

module.exports.i64_add = i64_add
module.exports.i64_sub = i64_sub
module.exports.i64_mul = i64_mul
module.exports.i64_div_s = i64_div_s
module.exports.i64_div_u = i64_div_u
module.exports.i64_rem_s = i64_rem_s
module.exports.i64_rem_u = i64_rem_u
module.exports.i64_and = i64_and
module.exports.i64_or = i64_or
module.exports.i64_xor = i64_xor
module.exports.i64_shl = i64_shl
module.exports.i64_shr_u = i64_shr_u
module.exports.i64_shr_s = i64_shr_s
module.exports.i64_rotl = i64_rotl
module.exports.i64_rotr = i64_rotr
module.exports.i64_eq = i64_eq
module.exports.i64_ne = i64_ne
module.exports.i64_lt_s = i64_lt_s
module.exports.i64_le_s = i64_le_s
module.exports.i64_lt_u = i64_lt_u
module.exports.i64_le_u = i64_le_u
module.exports.i64_gt_s = i64_gt_s
module.exports.i64_ge_s = i64_ge_s
module.exports.i64_gt_u = i64_gt_u
module.exports.i64_ge_u = i64_ge_u
module.exports.i64_clz = i64_clz
module.exports.i64_ctz = i64_ctz
module.exports.i64_popcnt = i64_popcnt
module.exports.i64_eqz = i64_eqz

module.exports.f32_add = f32_add
module.exports.f32_sub = f32_sub
module.exports.f32_mul = f32_mul
module.exports.f32_div = f32_div
module.exports.f32_abs = f32_abs
module.exports.f32_neg = f32_neg
module.exports.f32_copysign = f32_copysign
module.exports.f32_ceil = f32_ceil
module.exports.f32_floor = f32_floor
module.exports.f32_trunc = f32_trunc
module.exports.f32_nearest = f32_nearest
module.exports.f32_eq = f32_eq
module.exports.f32_ne = f32_ne
module.exports.f32_lt = f32_lt
module.exports.f32_le = f32_le
module.exports.f32_gt = f32_gt
module.exports.f32_ge = f32_ge
module.exports.f32_sqrt = f32_sqrt
module.exports.f32_min = f32_min
module.exports.f32_max = f32_max

module.exports.f64_add = f64_add
module.exports.f64_sub = f64_sub
module.exports.f64_mul = f64_mul
module.exports.f64_div = f64_div
module.exports.f64_abs = f64_abs
module.exports.f64_neg = f64_neg
module.exports.f64_copysign = f64_copysign
module.exports.f64_ceil = f64_ceil
module.exports.f64_floor = f64_floor
module.exports.f64_trunc = f64_trunc
module.exports.f64_nearest = f64_nearest
module.exports.f64_eq = f64_eq
module.exports.f64_ne = f64_ne
module.exports.f64_lt = f64_lt
module.exports.f64_le = f64_le
module.exports.f64_gt = f64_gt
module.exports.f64_ge = f64_ge
module.exports.f64_sqrt = f64_sqrt
module.exports.f64_min = f64_min
module.exports.f64_max = f64_max

//Conversions
module.exports.i32_wrap_i64 = i32_wrap_i64
module.exports.i32_trunc_s_f32 = i32_trunc_s_f32
module.exports.i32_trunc_s_f64 = i32_trunc_s_f64
module.exports.i32_trunc_u_f32 = i32_trunc_u_f32
module.exports.i32_trunc_u_f64 = i32_trunc_u_f64
module.exports.i32_reinterpret_f32 = i32_reinterpret_f32
module.exports.i64_extend_s_i32 = i64_extend_s_i32
module.exports.i64_extend_u_i32 = i64_extend_u_i32
module.exports.i64_trunc_s_f32 = i64_trunc_s_f32
module.exports.i64_trunc_s_f64 = i64_trunc_s_f64
module.exports.i64_trunc_u_f32 = i64_trunc_u_f32
module.exports.i64_trunc_u_f64 = i64_trunc_u_f64
module.exports.i64_reinterpret_f64 = i64_reinterpret_f64
module.exports.f32_demote_f64 = f32_demote_f64
module.exports.f32_convert_s_i32 = f32_convert_s_i32
module.exports.f32_convert_s_i64 = f32_convert_s_i64
module.exports.f32_convert_u_i32 = f32_convert_u_i32
module.exports.f32_convert_u_i64 = f32_convert_u_i64
module.exports.f32_reinterpret_i32 = f32_reinterpret_i32
module.exports.f64_promote_f32 = f64_promote_f32
module.exports.f64_convert_s_i32 = f64_convert_s_i32
module.exports.f64_convert_s_i64 = f64_convert_s_i64
module.exports.f64_convert_u_i32 = f64_convert_u_i32
module.exports.f64_convert_u_i64 = f64_convert_u_i64
module.exports.f64_reinterpret_i64 = f64_reinterpret_i64

//MISC
module.exports.drop = drop
module.exports.select = select
module.exports.elemToken = elemToken;
module.exports.elseToken = elseToken;


module.exports.FUNCTION_TOKEN = FUNCTION_TOKEN
module.exports.FUNCTION_TYPE_TOKEN = FUNCTION_TYPE_TOKEN
module.exports.FUNCTION_PARAM_TOKEN = FUNCTION_PARAM_TOKEN
module.exports.FUNCTION_RESULT_TOKEN = FUNCTION_RESULT_TOKEN
module.exports.CALL_TOKEN = CALL_TOKEN
module.exports.CALL_INDIRECT_TOKEN = CALL_INDIRECT_TOKEN
module.exports.LOOP_TOKEN = LOOP_TOKEN
module.exports.END_TOKEN = END_TOKEN
module.exports.IF_TOKEN = IF_TOKEN
module.exports.GET_LOCAL_TOKEN = GET_LOCAL_TOKEN
module.exports.TEE_LOCAL_TOKEN = TEE_LOCAL_TOKEN
module.exports.SET_LOCAL_TOKEN = SET_LOCAL_TOKEN
module.exports.STORE_LOCAL_TOKEN = STORE_LOCAL_TOKEN
module.exports.LOAD_TOKEN = LOAD_TOKEN
module.exports.GET_GLOBAL = GET_GLOBAL
module.exports.SET_GLOBAL = SET_GLOBAL

module.exports.CONST_OP = CONST_OP

module.exports.EQUAL_OP = EQUAL_OP
module.exports.NOT_EQUAL_OP = NOT_EQUAL_OP
module.exports.LESS_THAN_SIGNED_OP = LESS_THAN_SIGNED_OP
module.exports.LESS_EQUAL_SIGNED_OP = LESS_EQUAL_SIGNED_OP
module.exports.LESS_THAN_UNSIGNED_OP = LESS_THAN_UNSIGNED_OP
module.exports.LESS_EQUAL_UNSIGNED_OP = LESS_EQUAL_UNSIGNED_OP
module.exports.GREATER_THAN_SIGNED_OP = GREATER_THAN_SIGNED_OP
module.exports.GREATER_EQUAL_SIGNED_OP = GREATER_EQUAL_SIGNED_OP
module.exports.GREATER_THAN_UNSIGNED_OP = GREATER_THAN_UNSIGNED_OP
module.exports.GREATER_EQUAL_UNSIGNED_OP = GREATER_EQUAL_UNSIGNED_OP
module.exports.EQUAL_ZERO_OP = EQUAL_ZERO_OP

module.exports.ADD_OP = ADD_OP
module.exports.SUB_OP = SUB_OP
module.exports.MUL_OP = MUL_OP
module.exports.DIV_SIGNED_OP = DIV_SIGNED_OP
module.exports.DIV_UNSIGNED_OP = DIV_UNSIGNED_OP
module.exports.AND_OP = AND_OP
module.exports.OR_OP = OR_OP
module.exports.XOR_OP = XOR_OP
module.exports.SHIFT_LEFT_OP = SHIFT_LEFT_OP
module.exports.SHIFT_RIGHT_SIGNED = SHIFT_RIGHT_SIGNED
module.exports.SHIFT_RIGHT_UNSIGNED = SHIFT_RIGHT_UNSIGNED
module.exports.ROTATE_LEFT = ROTATE_LEFT
module.exports.ROTATE_RIGHT = ROTATE_RIGHT

module.exports.BRANCH_TOKEN = BRANCH_TOKEN
module.exports.RETURN_TOKEN = RETURN_TOKEN

module.exports.BINARY_COMPARISONS = BINARY_COMPARISONS
module.exports.UNARY_COMPARISONS = UNARY_COMPARISONS

module.exports.DIRECT_STACK_PUSHING_OP = DIRECT_STACK_PUSHING_OP
module.exports.INDIRECT_STACK_PUSHING_OP = INDIRECT_STACK_PUSHING_OP

module.exports.ZERO_CHANGE_OPS = ZERO_CHANGE_OPS
module.exports.PLUS_ONE_CHANGE_OPS = PLUS_ONE_CHANGE_OPS
module.exports.MINUS_ONE_CHANGE_OPS = MINUS_ONE_CHANGE_OPS
module.exports.MINUS_TWO_CHANGE_OPS = MINUS_TWO_CHANGE_OPS
module.exports.Constant_Ops = Constant_Ops;
module.exports.ELSE_TOKEN = elseToken;
module.exports.BLOCK_TOKEN - BLOCK_TOKEN;
module.exports.EXPORT_TOKEN = 'export'
module.exports.IMPORT_TOKEN = 'import'
module.exports.DATA_TOKEN = 'data'
module.exports.MEMORY_TOKEN = 'memory'