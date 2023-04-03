/*
 * MyJIT 
 * Copyright (C) 2010 Petr Krajca, <krajcap@inf.upol.cz>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 3 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */
#include<assert.h>
#include<ctype.h>
//#include<dlfcn.h>
#include<limits.h>
#include<stdarg.h>
#include<stdint.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<sys/mman.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>
#define JITLIB_CORE_H
#define FR_IMM	(jit_mkreg(JIT_RTYPE_FLOAT, JIT_RTYPE_IMM, 0))
#define R_IMM	(jit_mkreg(JIT_RTYPE_INT, JIT_RTYPE_IMM, 0)) // used by amd64 and sparc
#define GET_OP(op) ((jit_opcode) (op->code & 0xfff8))
#define GET_OP_SUFFIX(op) (op->code & 0x0007)
#define IS_IMM(op) (op->code & IMM)
#define IS_SIGNED(op) (!(op->code & UNSIGNED))
#define ARG_TYPE(op, arg) (((op)->spec >> ((arg) - 1) * 2) & 0x03)
#define JIT_BUFFER_OFFSET(jit)       ((jit_value)jit->ip - (jit_value)jit->buf)
#define MIN(a,b) ((a) < (b) ? (a) : (b))
#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define TRACE_PREV      (1)
#define TRACE_NEXT      (2)
#define R(x) (jit_mkreg(JIT_RTYPE_INT, JIT_RTYPE_REG, (x)))
#define FR(x) (jit_mkreg(JIT_RTYPE_FLOAT, JIT_RTYPE_REG, (x)))
typedef long jit_value;
typedef unsigned long jit_unsigned_value;
typedef double jit_float;
void *malloc(size_t size);
void free(void *ptr);
void *realloc(void *ptr, size_t size);




struct jit_tree;
struct jit_set;
struct jit_rmap;
struct jit_debug_info;

typedef struct jit_op {
        unsigned short code;
        unsigned char spec;
        unsigned char arg_size;
        unsigned char assigned;
        unsigned char fp;
 unsigned char in_use;
        double flt_imm;
        jit_value arg[3];
        jit_value r_arg[3];
        long patch_addr;
        struct jit_op * jmp_addr;
        struct jit_op * next;
        struct jit_op * prev;
        struct jit_set * live_in;
        struct jit_set * live_out;
        struct jit_rmap * regmap;
        int normalized_pos;
        struct jit_tree * allocator_hints;
 struct jit_debug_info *debug_info;
 unsigned long code_offset;
 unsigned long code_length;
 void *addendum;
} jit_op;

typedef struct jit_label {
        long pos;
        jit_op * op;
        struct jit_label * next;
} jit_label;

typedef jit_value jit_reg;

union jit_proc_value_alias {
        void (*ptr)();
        jit_value num;
};


static inline jit_value jit_proc_value(void (*f)(void))
{
 union jit_proc_value_alias alias;
 alias.ptr = f;
 return alias.num;
}
enum jit_inp_type {
 JIT_SIGNED_NUM,
 JIT_UNSIGNED_NUM,
 JIT_FLOAT_NUM,
 JIT_PTR
};

enum jit_warning {
 JIT_WARN_DEAD_CODE = 0x00000001,
 JIT_WARN_OP_WITHOUT_EFFECT = 0x00000002,
 JIT_WARN_INVALID_DATA_SIZE = 0x00000004,
 JIT_WARN_UNINITIALIZED_REG = 0x00000008,
 JIT_WARN_UNALIGNED_CODE = 0x00000010,
 JIT_WARN_INVALID_CODE_REFERENCE = 0x00000020,
 JIT_WARN_INVALID_DATA_REFERENCE = 0x00000040,
 JIT_WARN_MISSING_PATCH = 0x00000080,
 JIT_WARN_REGISTER_TYPE_MISMATCH = 0x00000100,
 JIT_WARN_ALL = 0x7fffffff
};
struct jit * jit_init();
struct jit_op * jit_add_op(struct jit * jit, unsigned short code, unsigned char spec, jit_value arg1, jit_value arg2, jit_value arg3, unsigned char arg_sizee, struct jit_debug_info *debug_info);
struct jit_op * jit_add_fop(struct jit * jit, unsigned short code, unsigned char spec, jit_value arg1, jit_value arg2, jit_value arg3, double flt_imm, unsigned char arg_sizee, struct jit_debug_info *debug_info);
struct jit_debug_info *jit_debug_info_new(const char *filename, const char *function, int lineno);
void jit_generate_code(struct jit * jit);
void jit_free(struct jit * jit);

void jit_dump_ops(struct jit * jit, int verbosity);
void jit_check_code(struct jit *jit, int warnings);
void jit_trace(struct jit *jit, int verbosity);

void jit_enable_optimization(struct jit * jit, int opt);
void jit_disable_optimization(struct jit * jit, int opt);
jit_op * jit_add_prolog(struct jit *, void *, struct jit_debug_info *);
jit_label * jit_get_label(struct jit * jit);
int jit_allocai(struct jit * jit, int size);
jit_op *jit_data_bytes(struct jit *jit, jit_value count, unsigned char *data)
{
 jit_op *op = jit_add_op(jit, JIT_DATA_BYTES | 0x02, (((0x00) << 4) | ((0x00) << 2) | (0x02)), count, 0, 0, 0, NULL);
 op->addendum = malloc(count);
 memcpy(op->addendum, data, count);
 return op;
}
int jit_regs_active_count(jit_op *op);
void jit_regs_active(jit_op *op, jit_value *dest);
typedef jit_value jit_tree_key;
typedef void * jit_tree_value;

typedef struct jit_tree {
 struct jit_tree * left;
 struct jit_tree * right;
 int color;
 jit_tree_key key;
 jit_tree_value value;
} jit_tree;


static inline int is_red(jit_tree * n)
{
 if (n == NULL) return 0;
 return (n->color == (1));
}

static inline jit_tree * rotate_left(jit_tree * h)
{
 jit_tree * x = h->right;
 h->right = x->left;
 x->left = h;
 x->color = x->left->color;
 x->left->color = (1);
 return x;
}

static inline jit_tree * rotate_right(jit_tree * h)
{
 jit_tree * x = h->left;
 h->left = x->right;
 x->right = h;
 x->color = x->right->color;
 x->right->color = (1);
 return x;
}

static inline void color_flip(jit_tree * h)
{
 h->color = !h->color;
 h->left->color = !h->left->color;
 h->right->color = !h->right->color;
}

static inline jit_tree * fixup(jit_tree * h)
{
 if (is_red(h->right)) h = rotate_left(h);

 if (is_red(h->left) && (is_red(h->left->left))) {
  h = rotate_right(h);
  color_flip(h);
 }

 if (is_red(h->left) && is_red(h->right)) color_flip(h);

 return h;
}



static inline jit_tree * node_new(jit_tree_key key, jit_tree_value value)
{
 jit_tree * res = malloc(sizeof(jit_tree));
 res->key = key;
 res->value = value;
 res->color = (1);
 res->left = NULL;
 res->right = NULL;
 return res;
}

static jit_tree * node_insert(jit_tree * h, jit_tree_key key, jit_tree_value value, int * found)
{
 if (h == NULL) return node_new(key, value);
 if (is_red(h->left) && is_red(h->right)) color_flip(h);


 if (h->key == key) {
  h->value = value;
  if (found) *found = 1;
 } else if (h->key > key) h->left = node_insert(h->left, key, value, found);
 else h->right = node_insert(h->right, key, value, found);





 return fixup(h);
}

static jit_tree * jit_tree_insert(jit_tree * root, jit_tree_key key, jit_tree_value value, int * found)
{
 if (found) *found = 0;
 root = node_insert(root, key, value, found);
 root->color = (0);
 return root;
}


static jit_tree * jit_tree_search(jit_tree * h, jit_tree_key key)
{
 if ((h == NULL) || (h->key == key)) return h;
 if (h->key > key) return jit_tree_search(h->left, key);
 return jit_tree_search(h->right, key);
}

static inline jit_tree * move_red_left(jit_tree * h)
{
 color_flip(h);
 if (is_red(h->right->left)) {
  h->right = rotate_right(h->right);
  h = rotate_left(h);
  color_flip(h);
 }
 return h;
}

static inline jit_tree * move_red_right(jit_tree * h)
{


 color_flip(h);
 if (is_red(h->left->left)) {
  h = rotate_right(h);
  color_flip(h);
 }
 return h;
}

static inline jit_tree_key node_min(jit_tree * x)
{
 if (x->left == NULL) return x->key;
 else return node_min(x->left);
}

static jit_tree * delete_min(jit_tree * h)
{
 if (h->left == NULL) {
  free(h);
  return NULL;
 }

 if ((!is_red(h->left)) && (!is_red(h->left->left)))
  h = move_red_left(h);

 h->left = delete_min(h->left);

 return fixup(h);
}

static jit_tree * delete_node(jit_tree * h, jit_tree_key key, int * found)
{
 if (h == NULL) {
  if (found) *found = 0;
  return NULL;
 }

 if (key < h->key) {

  if ((!is_red(h->left)) && (h->left) && (!is_red(h->left->left)))
   h = move_red_left(h);
  h->left = delete_node(h->left, key, found);
 } else {
  if (is_red(h->left)) h = rotate_right(h);
  if ((key == h->key) && (h->right == NULL)) {
   free(h);
   if (found) *found = 1;
   return NULL;
  }


  if (!is_red(h->right) && (h->right) && !is_red(h->right->left)) h = move_red_right(h);
  if (key == h->key) {
   h->value = jit_tree_search(h->right, node_min(h->right))->value;
   h->key = node_min(h->right);
   h->right = delete_min(h->right);
   if (found) *found = 1;
  }
  else h->right = delete_node(h->right, key, found);
 }
 return fixup(h);
}

static inline jit_tree * jit_tree_delete(jit_tree * root, jit_tree_key key, int * found)
{
 root = delete_node(root, key, found);
 if (root) root->color = (0);
 return root;
}




static inline jit_tree * jit_tree_addall(jit_tree * target, jit_tree * n)
{
 if (n == NULL) return target;
 target = jit_tree_addall(target, n->left);
 target = jit_tree_insert(target, n->key, n->value, NULL);
 target = jit_tree_addall(target, n->right);
 return target;
}

static inline jit_tree * jit_tree_clone(jit_tree * root)
{
 return jit_tree_addall(NULL, root);
}



static void jit_tree_walk(jit_tree *h, void (*func)(jit_tree_key key, jit_tree_value value, void *thunk), void *thunk)
{
        if (!h) return;
 jit_tree_walk(h->left, func, thunk);
        func(h->key, h->value, thunk);
 jit_tree_walk(h->right, func, thunk);
}

static inline void jit_print_tree(jit_tree * h, int level)
{
 if (h == NULL) return;
 for (int i = 0; i < level; i++)
  printf(" ");

 printf("%i:%li\n", (int)h->key, (long)h->value);
 jit_print_tree(h->left, level + 1);
 jit_print_tree(h->right, level + 1);
}

static void jit_tree_free(jit_tree * h)
{
 if (h == NULL) return;
 jit_tree_free(h->left);
 jit_tree_free(h->right);
 free(h);
}

static int jit_tree_subset(jit_tree * root, jit_tree * n)
{
 if (n == NULL) return 1;
 return jit_tree_search(root, n->key) && jit_tree_subset(root, n->left) && jit_tree_subset(root, n->right);
}

static int jit_tree_equal(jit_tree * r1, jit_tree * r2)
{
 return jit_tree_subset(r1, r2) && jit_tree_subset(r2, r1);
}

static int jit_tree_size(jit_tree *h)
{
 if (h == NULL) return 0;
 return jit_tree_size(h->left) + jit_tree_size(h->right) + 1;
}
typedef struct {
 int id;
 char * name;
 char callee_saved;
 char fp;
 short priority;
} jit_hw_reg;

struct jit_reg_allocator {
 int gp_reg_cnt;
 int fp_reg_cnt;
 int fp_reg;
 int gp_arg_reg_cnt;
 int fp_arg_reg_cnt;
 jit_hw_reg * ret_reg;
 jit_hw_reg * fpret_reg;

 jit_hw_reg * gp_regs;
 jit_hw_reg * fp_regs;
 jit_hw_reg ** gp_arg_regs;
 jit_hw_reg ** fp_arg_regs;
 struct jit_func_info * current_func_info;
};

typedef struct jit_rmap {
 jit_tree * map;
} jit_rmap;

struct jit_allocator_hint {
 int last_pos;
 int should_be_calleesaved;
 int should_be_eax;
 int refs;
};

typedef struct jit_prepared_args {
 int count;
 int ready;
 int gp_args;
 int fp_args;
 int stack_size;
 jit_op * op;
 struct jit_out_arg {
  union {
   long generic;
   double fp;
  } value;
  int argpos;
  char isreg;
  char isfp;
  char size;
 } * args;
} jit_prepared_args;

typedef struct jit_set {
 jit_tree * root;
} jit_set;

struct jit_func_info {
 int general_arg_cnt;
 int float_arg_cnt;
 long allocai_mem;
 int arg_capacity;
 struct jit_inp_arg {
  enum jit_inp_type type;
  int size;
  char passed_by_reg;
  union {
   int reg;
   int stack_pos;
  } location;
  int spill_pos;
  int gp_pos;
  int fp_pos;
  int overflow;
  int phys_reg;
 } * args;

 int gp_reg_count;
 int fp_reg_count;
 int has_prolog;
 struct jit_op *first_op;

 int gp_callee_saved_regs;

};

struct jit {
 unsigned char * buf;
 unsigned int buf_capacity;

 unsigned char * ip;

 struct jit_op * ops;
 struct jit_op * last_op;
 struct jit_reg_allocator * reg_al;
 struct jit_op * current_func;
 jit_label * labels;
 jit_prepared_args prepared_args;
 int push_count;
 unsigned int optimizations;
 unsigned char mmaped_buf;
};

struct jit_debug_info {
        const char *filename;
 const char *function;
        int lineno;
        int warnings;
};


void jit_patch_external_calls(struct jit * jit);
void jit_patch_local_addrs(struct jit *jit);

void jit_collect_statistics(struct jit * jit);

void jit_optimize_st_ops(struct jit * jit);
int jit_optimize_join_addmul(struct jit * jit);
int jit_optimize_join_addimm(struct jit * jit);
void jit_optimize_frame_ptr(struct jit * jit);
void jit_optimize_unused_assignments(struct jit * jit);
static int is_cond_branch_op(jit_op *op);
static inline void jit_set_free(jit_set * s);
void jit_trace_callback(struct jit *jit, jit_op *op, int verbosity, int trace);







void jit_init_arg_params(struct jit * jit, struct jit_func_info * info, int argpos, int * phys_reg);


void jit_assign_regs(struct jit * jit);
struct jit_reg_allocator * jit_reg_allocator_create();
void jit_reg_allocator_free(struct jit_reg_allocator * a);
void jit_gen_op(struct jit * jit, jit_op * op);
char * jit_reg_allocator_get_hwreg_name(struct jit_reg_allocator * al, int reg);
int jit_reg_in_use(jit_op * op, int reg, int fp);
jit_hw_reg * jit_get_unused_reg(struct jit_reg_allocator * al, jit_op * op, int fp);
jit_hw_reg * jit_get_unused_reg_with_index(struct jit_reg_allocator * al, jit_op * op, int fp, int index);
void rmap_free(jit_rmap * regmap);
void jit_allocator_hints_free(jit_tree *);


static struct jit_op * jit_op_new(unsigned short code, unsigned char spec, long arg1, long arg2, long arg3, unsigned char arg_size)
{
 struct jit_op * r = malloc(sizeof(struct jit_op));
 r->code = code;
 r->spec = spec;
 r->fp = 0;

 r->arg[0] = arg1;
 r->arg[1] = arg2;
 r->arg[2] = arg3;

 r->r_arg[0] = -1;
 r->r_arg[1] = -1;
 r->r_arg[2] = -1;

 r->assigned = 0;
 r->in_use = 1;
 r->arg_size = arg_size;
 r->next = NULL;
 r->prev = NULL;
 r->patch_addr = 0;
 r->jmp_addr = NULL;
 r->regmap = NULL;
 r->live_in = NULL;
 r->live_out = NULL;
 r->allocator_hints = NULL;
 r->debug_info = NULL;
 r->addendum = NULL;
 return r;
}

static inline void jit_op_append(jit_op * op, jit_op * appended)
{
 appended->next = op->next;
 if (op->next != NULL) op->next->prev = appended;
 appended->prev = op;
 op->next = appended;
}

static inline void jit_op_prepend(jit_op * op, jit_op * prepended)
{
 prepended->prev = op->prev;
 if (op->prev != NULL) op->prev->next = prepended;
 prepended->next = op;
 op->prev = prepended;
}

static inline jit_op * jit_op_first(jit_op * op)
{
 while (op->prev != NULL) op = op->prev;
 return op;
}

static inline jit_op * jit_op_last(jit_op * op)
{
 while (op->next != NULL) op = op->next;
 return op;
}

static inline void jit_free_op(struct jit_op *op)
{
        if (op->live_in) jit_set_free(op->live_in);
        if (op->live_out) jit_set_free(op->live_out);
        rmap_free(op->regmap);
        jit_allocator_hints_free(op->allocator_hints);
 if (op->debug_info) free(op->debug_info);

        if (((jit_opcode) (op->code & 0xfff8)) == JIT_PROLOG) {
                struct jit_func_info * info = (struct jit_func_info *)op->arg[1];
                free(info->args);
                free(info);
        }

        free(op);
}

static inline void jit_op_delete(jit_op *op)
{
 op->prev->next = op->next;
 if (op->next) op->next->prev = op->prev;
 jit_free_op(op);
}

static inline int jit_is_label(struct jit * jit, void * ptr)
{
 jit_label * lab = jit->labels;
 while (1) {
  if (lab == NULL) return 0;
  if (lab == ptr) return 1;
  lab = lab->next;
 }
}

static inline struct jit_func_info * jit_current_func_info(struct jit * jit)
{
 return (struct jit_func_info *)(jit->current_func->arg[1]);
}

static inline void funcall_prepare(struct jit * jit, jit_op * op, int count)
{
 jit->prepared_args.args = malloc(sizeof(struct jit_out_arg) * count);
 jit->prepared_args.count = count;
 jit->prepared_args.ready = 0;
 jit->prepared_args.stack_size = 0;
 jit->prepared_args.op = op;
 jit->prepared_args.gp_args = 0;
 jit->prepared_args.fp_args = 0;
}

static inline void funcall_put_arg(struct jit * jit, jit_op * op)
{
 int pos = jit->prepared_args.ready;
 struct jit_out_arg * arg = &(jit->prepared_args.args[pos]);
 arg->isreg = !(op->code & 0x02);
 arg->isfp = 0;
 arg->value.generic = op->arg[0];
 arg->argpos = jit->prepared_args.gp_args++;
 jit->prepared_args.ready++;

 if (jit->prepared_args.gp_args > jit->reg_al->gp_arg_reg_cnt) {
  jit->prepared_args.stack_size += (sizeof(void *));
 }
}

static inline void funcall_fput_arg(struct jit * jit, jit_op * op)
{
 int pos = jit->prepared_args.ready;
 struct jit_out_arg * arg = &(jit->prepared_args.args[pos]);
 arg->isreg = !(op->code & 0x02);
 arg->isfp = 1;
 arg->size = op->arg_size;
 arg->argpos = jit->prepared_args.fp_args++;
 if ((op->code & 0x02)) arg->value.fp = op->flt_imm;
 else arg->value.generic = op->arg[0];
 jit->prepared_args.ready++;

 if (jit->prepared_args.fp_args > jit->reg_al->fp_arg_reg_cnt) {



  jit->prepared_args.stack_size += op->arg_size;

 }
}





static inline jit_value jit_value_align(jit_value value, jit_value alignment)
{
 return (value + (alignment - 1)) & (- alignment);
}

static inline jit_set * jit_set_new()
{
 jit_set * s = malloc(sizeof(jit_set));
 s->root = NULL;
 return s;
}

static inline jit_set * jit_set_clone(jit_set * s)
{
 jit_set * clone = jit_set_new();
 clone->root = jit_tree_clone(s->root);
 return clone;
}

static inline void jit_set_free(jit_set * s)
{
 jit_tree_free(s->root);
 free(s);
}

static inline void jit_set_addall(jit_set * target, jit_set * s)
{
 target->root = jit_tree_addall(target->root, s->root);
}

static inline int jit_set_get(jit_set * s, int value)
{
 return (jit_tree_search(s->root, value) != NULL);
}

static inline void jit_set_add(jit_set * s, int value)
{
 s->root = jit_tree_insert(s->root, value, (void *)1, NULL);
}

static inline void jit_set_remove(jit_set * s, int value)
{
 s->root = jit_tree_delete(s->root, value, NULL);
}

static inline int jit_set_equal(jit_set * s1, jit_set * s2)
{
 return jit_tree_equal(s1->root, s2->root);
}

static inline int jit_set_size(jit_set *s)
{
 return jit_tree_size(s->root);
}

struct copy_target {
        jit_value *target;
        int index;
};

static void copy_reg_to_array(jit_tree_key key, jit_tree_value value, void *target)
{
        struct copy_target *t = target;
        t->target[t->index] = key;
        t->index++;
}

static inline void jit_set_to_array(jit_set *s, jit_value *dest)
{
 struct copy_target t;
 t.target = dest;
 t.index = 0;
 jit_tree_walk(s->root, copy_reg_to_array, &t);
}
typedef enum {
 ARMREG_R0 = 0,
 ARMREG_R1,
 ARMREG_R2,
 ARMREG_R3,
 ARMREG_R4,
 ARMREG_R5,
 ARMREG_R6,
 ARMREG_R7,
 ARMREG_R8,
 ARMREG_R9,
 ARMREG_R10,
 ARMREG_R11,
 ARMREG_R12,
 ARMREG_R13,
 ARMREG_R14,
 ARMREG_R15,




 ARMREG_A1 = ARMREG_R0,
 ARMREG_A2 = ARMREG_R1,
 ARMREG_A3 = ARMREG_R2,
 ARMREG_A4 = ARMREG_R3,


 ARMREG_V1 = ARMREG_R4,
 ARMREG_V2 = ARMREG_R5,
 ARMREG_V3 = ARMREG_R6,
 ARMREG_V4 = ARMREG_R7,
 ARMREG_V5 = ARMREG_R8,
 ARMREG_V6 = ARMREG_R9,
 ARMREG_V7 = ARMREG_R10,

 ARMREG_FP = ARMREG_R11,
 ARMREG_IP = ARMREG_R12,
 ARMREG_SP = ARMREG_R13,
 ARMREG_LR = ARMREG_R14,
 ARMREG_PC = ARMREG_R15,


 ARMREG_CR0 = 0,
 ARMREG_CR1,
 ARMREG_CR2,
 ARMREG_CR3,
 ARMREG_CR4,
 ARMREG_CR5,
 ARMREG_CR6,
 ARMREG_CR7,
 ARMREG_CR8,
 ARMREG_CR9,
 ARMREG_CR10,
 ARMREG_CR11,
 ARMREG_CR12,
 ARMREG_CR13,
 ARMREG_CR14,
 ARMREG_CR15,


 ARMREG_ACC0 = ARMREG_CR0,

 ARMREG_MAX = ARMREG_R15
} ARMReg;

typedef enum {
 ARMREG_D0 = 0,
 ARMREG_D1,
 ARMREG_D2,
 ARMREG_D3,
 ARMREG_D4,
 ARMREG_D5,
 ARMREG_D6,
 ARMREG_D7,
 ARMREG_D8,
 ARMREG_D9,
 ARMREG_D10,
 ARMREG_D11,
 ARMREG_D12,
 ARMREG_D13,
 ARMREG_D14,
 ARMREG_D15
} ARMVreg;


typedef enum {
 ARMCOND_EQ = 0x0,
 ARMCOND_NE = 0x1,
 ARMCOND_CS = 0x2,
 ARMCOND_HS = ARMCOND_CS,
 ARMCOND_CC = 0x3,
 ARMCOND_LO = ARMCOND_CC,
 ARMCOND_MI = 0x4,
 ARMCOND_PL = 0x5,
 ARMCOND_VS = 0x6,
 ARMCOND_VC = 0x7,
 ARMCOND_HI = 0x8,
 ARMCOND_LS = 0x9,
 ARMCOND_GE = 0xA,
 ARMCOND_LT = 0xB,
 ARMCOND_GT = 0xC,
 ARMCOND_LE = 0xD,
 ARMCOND_AL = 0xE,
 ARMCOND_NV = 0xF,

 ARMCOND_SHIFT = 28
} ARMCond;

typedef enum {
 ARMSHIFT_LSL = 0,
 ARMSHIFT_LSR = 1,
 ARMSHIFT_ASR = 2,
 ARMSHIFT_ROR = 3,

 ARMSHIFT_ASL = ARMSHIFT_LSL

} ARMShiftType;
typedef enum {
 ARMOP_AND = 0x0,
 ARMOP_EOR = 0x1,
 ARMOP_SUB = 0x2,
 ARMOP_RSB = 0x3,
 ARMOP_ADD = 0x4,
 ARMOP_ADC = 0x5,
 ARMOP_SBC = 0x6,
 ARMOP_RSC = 0x7,
 ARMOP_TST = 0x8,
 ARMOP_TEQ = 0x9,
 ARMOP_CMP = 0xa,
 ARMOP_CMN = 0xb,
 ARMOP_ORR = 0xc,
 ARMOP_MOV = 0xd,
 ARMOP_BIC = 0xe,
 ARMOP_MVN = 0xf,




 ARMOP_STR = 0x0,
 ARMOP_LDR = 0x1,


 ARMOP_MUL = 0x0,
 ARMOP_MLA = 0x1,


 ARMOP_UMULL = 0x4,
 ARMOP_UMLAL = 0x5,
 ARMOP_SMULL = 0x6,
 ARMOP_SMLAL = 0x7,


 ARM_UP = 1,
 ARM_DOWN = 0
} ARMOpcode;






static inline int arm32_imm_rotate(int x)
{
 if ((((x) & ~0xff) == 0)) return 0;
 for (int i = 2; i < 32; i += 2) {
  x = ((((unsigned int) (x)) << (2)) | ((unsigned int) (x) >> (32 - (2))));
  if ((((x) & ~0xff) == 0)) return i;
 }
 return -1;
}

static inline int arm32_encode_imm(int x)
{
 int r = arm32_imm_rotate(x);
 if (r == -1) abort();
 return ((r / 2) << 8) | (((((unsigned int) (x)) << (r)) | ((unsigned int) (x) >> (32 - (r)))) & 0xff);
}
void jit_optimize_st_ops(struct jit * jit)
{
 for (jit_op * op = jit_op_first(jit->ops); op != NULL; op = op->next) {
  if ((((jit_opcode) (op->code & 0xfff8)) == JIT_ST)
  && (op->prev)
  && (op->prev->code == (JIT_MOV | 0x02))
  && (op->arg[1] == op->prev->arg[0])
  && (((((long)(op->prev->arg[1])) >= INT32_MIN) && (((long)(op->prev->arg[1])) <= INT32_MAX)))
  && (!jit_set_get(op->live_out, op->arg[1])))
  {
   if (!(op->code & 0x02)) {
    op->code = JIT_X86_STI | 0x01;
    op->spec = (((0x00) << 4) | ((0x02) << 2) | (0x01));
   } else {
    op->code = JIT_X86_STI | 0x02;
    op->spec = (((0x00) << 4) | ((0x02) << 2) | (0x02));
   }
   op->arg[1] = op->prev->arg[1];
   op->prev->code = JIT_NOP;
   op->prev->spec = (((0x00) << 4) | ((0x00) << 2) | (0x00));
  }

  if ((((jit_opcode) (op->code & 0xfff8)) == JIT_STX)
  && (op->prev)
  && (op->prev->code == (JIT_MOV | 0x02))
  && (op->arg[2] == op->prev->arg[0])
  && (((((long)(op->prev->arg[1])) >= INT32_MIN) && (((long)(op->prev->arg[1])) <= INT32_MAX)))
  && (!jit_set_get(op->live_out, op->arg[2])))
  {
   if (!(op->code & 0x02)) {
    op->code = JIT_X86_STXI | 0x01;
    op->spec = (((0x02) << 4) | ((0x01) << 2) | (0x01));
   } else {
    op->code = JIT_X86_STXI | 0x02;
    op->spec = (((0x02) << 4) | ((0x01) << 2) | (0x02));
   }
   op->arg[2] = op->prev->arg[1];
   op->prev->code = JIT_NOP;
   op->prev->spec = (((0x00) << 4) | ((0x00) << 2) | (0x00));
  }

 }
}

void jit_optimize_frame_ptr(struct jit * jit)
{
 if (!(jit->optimizations & (0x01))) return;

 struct jit_func_info * info = NULL;
 int uses_frame_ptr = 0;
 for (jit_op * op = jit_op_first(jit->ops); ; op = op->next) {
  if (!op || ((jit_opcode) (op->code & 0xfff8)) == JIT_PROLOG) {
   if (info && !uses_frame_ptr) {
    info->has_prolog = 0;
    uses_frame_ptr = 0;
   }

   if (op) info = (struct jit_func_info *) op->arg[1];
  }
  if (!op) break;
  if ((((jit_opcode) (op->code & 0xfff8)) == JIT_ALLOCA) || (((jit_opcode) (op->code & 0xfff8)) == JIT_UREG) || (((jit_opcode) (op->code & 0xfff8)) == JIT_LREG) || (((jit_opcode) (op->code & 0xfff8)) == JIT_SYNCREG)) {
   uses_frame_ptr |= 1;
  }
 }
}

void jit_optimize_unused_assignments(struct jit * jit)
{
 for (jit_op * op = jit_op_first(jit->ops); op != NULL; op = op->next) {
  if ((((op)->spec >> ((1) - 1) * 2) & 0x03) == 0x03) {

   if ((((jit_opcode) (op->code & 0xfff8)) == JIT_ADDC) || (((jit_opcode) (op->code & 0xfff8)) == JIT_ADDX)
   || (((jit_opcode) (op->code & 0xfff8)) == JIT_SUBC) || (((jit_opcode) (op->code & 0xfff8)) == JIT_SUBX)) continue;

   if (!jit_set_get(op->live_out, op->arg[0])) {
    op->code = JIT_NOP;
    op->spec = (((0x00) << 4) | ((0x00) << 2) | (0x00));
   }
  }
 }
}







static inline void make_nop(jit_op * op)
{
 op->code = JIT_NOP;
 op->spec = (((0x00) << 4) | ((0x00) << 2) | (0x00));
}

static jit_op * get_related_op(jit_op * op, int result_reg)
{
 jit_op * nextop = op->next;

 if ((nextop->arg[0] != result_reg) && (jit_set_get(nextop->live_out, result_reg))) return NULL;

 int used = 0;
 for (int i = 0; i < 3; i++)
  if (((((nextop)->spec >> ((i + 1) - 1) * 2) & 0x03) == 0x01) && (nextop->arg[i])) {
   used = 1;
   break;
  }
 if (used) return nextop;
 return NULL;
}

static int join_2ops(jit_op * op, int opcode1, int opcode2, int (* joinfn)(jit_op *, jit_op *))
{
 if (op->code == opcode1) {
  jit_value result_reg = op->arg[0];
  jit_op * nextop = get_related_op(op, result_reg);
  if (nextop && (nextop->code == opcode2)) return joinfn(op, nextop);
 }
 return 0;
}

static int shift_index(int arg)
{
 if (arg == 2) return 1;
 if (arg == 4) return 2;
 if (arg == 8) return 3;
 assert(0);
}

static inline int pow2(int arg)
{
 int r = 1;
 for (int i = 0; i < arg; i++)
  r *= 2;
 return r;
}

static inline int is_suitable_mul(jit_op * op)
{
 jit_value arg = op->arg[2];
 return ((((op->code == (JIT_MUL | 0x02)) && ((arg == 2) || (arg == 4) || (arg == 8))))
 || ((op->code == (JIT_LSH | 0x02)) && ((arg == 1) || (arg == 2) || (arg == 3))));
}

static inline int make_addmuli(jit_op * op, jit_op * nextop)
{
 nextop->code = JIT_X86_ADDMUL | 0x02;
 nextop->spec = (((0x02) << 4) | ((0x01) << 2) | (0x03));

 nextop->arg[1] = op->arg[1];
 nextop->arg_size = (((jit_opcode) (op->code & 0xfff8)) == JIT_MUL ? shift_index(op->arg[2]) : op->arg[2]);

 make_nop(op);
 return 1;
}






static int join_muli_addi(jit_op * op, jit_op * nextop)
{
 if (!((((long)(nextop->arg[2])) >= INT32_MIN) && (((long)(nextop->arg[2])) <= INT32_MAX))) return 0;
 if (!is_suitable_mul(op)) return 0;
 return make_addmuli(op, nextop);
}






static int join_muli_ori(jit_op * op, jit_op * nextop)
{
 if (!is_suitable_mul(op)) return 0;
 int max = (((jit_opcode) (op->code & 0xfff8)) == JIT_MUL) ? max = op->arg[2] : pow2(op->arg[2]);

 if ((nextop->arg[2] > 0) && (nextop->arg[2] < max)) return make_addmuli(op, nextop);
 else return 0;
}






static int join_muli_addr(jit_op * op, jit_op * nextop)
{
 if ((!is_suitable_mul(op) || (nextop->arg[1] == nextop->arg[2]))) return 0;

 jit_value add_reg = (nextop->arg[1] == op->arg[0]) ? nextop->arg[2] : nextop->arg[1];

 nextop->code = JIT_X86_ADDMUL | 0x01;
 nextop->spec = (((0x01) << 4) | ((0x01) << 2) | (0x03));

 nextop->arg[1] = add_reg;
 nextop->arg[2] = op->arg[1];
 nextop->arg_size = (((jit_opcode) (op->code & 0xfff8)) == JIT_MUL ? shift_index(op->arg[2]) : op->arg[2]);

 make_nop(op);
 return 1;
}

int jit_optimize_join_addmul(struct jit * jit)
{
 int change = 0;
 for (jit_op * op = jit_op_first(jit->ops); op != NULL; op = op->next) {
  change |= join_2ops(op, JIT_MUL | 0x02, JIT_ADD | 0x02, join_muli_addi);
  change |= join_2ops(op, JIT_LSH | 0x02, JIT_ADD | 0x02, join_muli_addi);
  change |= join_2ops(op, JIT_MUL | 0x02, JIT_ADD | 0x01, join_muli_addr);
  change |= join_2ops(op, JIT_LSH | 0x02, JIT_ADD | 0x01, join_muli_addr);
  change |= join_2ops(op, JIT_MUL | 0x02, JIT_OR | 0x02, join_muli_ori);
  change |= join_2ops(op, JIT_LSH | 0x02, JIT_OR | 0x02, join_muli_ori);
 }
 return change;
}






static int join_addr_addi(jit_op * op, jit_op * nextop)
{
 if (!((((long)(nextop->arg[2])) >= INT32_MIN) && (((long)(nextop->arg[2])) <= INT32_MAX))) return 0;
 make_nop(op);

 nextop->code = JIT_X86_ADDIMM;
 nextop->spec = (((0x01) << 4) | ((0x01) << 2) | (0x03));

 nextop->arg[2] = nextop->arg[2];

 memcpy(&nextop->flt_imm, &(nextop->arg[2]), sizeof(jit_value));
 nextop->arg[1] = op->arg[1];
 nextop->arg[2] = op->arg[2];

 return 1;
}






static int join_addi_addr(jit_op * op, jit_op * nextop)
{
 if (!((((long)(op->arg[2])) >= INT32_MIN) && (((long)(op->arg[2])) <= INT32_MAX))) return 0;
 if (((jit_opcode) (op->code & 0xfff8)) == JIT_SUB) op->arg[2] = -op->arg[2];

 make_nop(op);

 nextop->code = JIT_X86_ADDIMM;
 nextop->spec = (((0x01) << 4) | ((0x01) << 2) | (0x03));

 if (nextop->arg[1] == nextop->arg[2]) op->arg[2] *= 2;
 memcpy(&nextop->flt_imm, &(op->arg[2]), sizeof(jit_value));

 if (nextop->arg[1] == op->arg[0]) nextop->arg[1] = op->arg[1];
 if (nextop->arg[2] == op->arg[0]) nextop->arg[2] = op->arg[1];

 return 1;
}

int jit_optimize_join_addimm(struct jit * jit)
{
 int change = 0;
 for (jit_op * op = jit_op_first(jit->ops); op != NULL; op = op->next) {
  change |= join_2ops(op, JIT_ADD | 0x01, JIT_ADD | 0x02, join_addr_addi);
  change |= join_2ops(op, JIT_ADD | 0x01, JIT_SUB | 0x02, join_addr_addi);
  change |= join_2ops(op, JIT_ADD | 0x02, JIT_ADD | 0x01, join_addi_addr);
  change |= join_2ops(op, JIT_SUB | 0x02, JIT_ADD | 0x01, join_addi_addr);
 }
 return change;
}
static inline int _bit_pop(unsigned int x) {
        x = (x & 0x55555555) + ((x >> 1) & 0x55555555);
        x = (x & 0x33333333) + ((x >> 2) & 0x33333333);
        x = (x & 0x0F0F0F0F) + ((x >> 4) & 0x0F0F0F0F);
        x = (x & 0x00FF00FF) + ((x >> 8) & 0x00FF00FF);
        x = (x & 0x0000FFFF) + ((x >>16) & 0x0000FFFF);
        return x;
}

static int uses_hw_reg(struct jit_op * op, jit_value reg, int fp)
{
 if ((((jit_opcode) (op->code & 0xfff8)) == JIT_RENAMEREG) && (op->r_arg[0] == reg)) return 1;
 for (int i = 0; i < 3; i++)
  if (((((op)->spec >> ((i + 1) - 1) * 2) & 0x03) == 0x01) || ((((op)->spec >> ((i + 1) - 1) * 2) & 0x03) == 0x03)) {
   if (fp && (((op->arg[i]) & 0x01) == (0))) continue;
   if (!fp && (((op->arg[i]) & 0x01) == (1))) continue;
   if (op->r_arg[i] == reg) return 1;
  }
 return 0;
}
inline jit_hw_reg * rmap_get(jit_rmap *rmap, jit_value reg);

static inline int GET_REG_POS(struct jit *jit, int r)
{
 struct jit_func_info * info = jit_current_func_info(jit);
 if ((((r) >> 1) & 0x03) == (0)) {

  int SHADOW_REG_SPACE = ((0) > (info->general_arg_cnt - jit->reg_al->gp_arg_reg_cnt) ? (0) : (info->general_arg_cnt - jit->reg_al->gp_arg_reg_cnt)) * (sizeof(void *))
   + ((0) > (info->float_arg_cnt) ? (0) : (info->float_arg_cnt)) * sizeof(double);

  int allocai_mem = jit_current_func_info(jit)->allocai_mem;
  if (((r) & 0x01) == (0)) {
   return - SHADOW_REG_SPACE - ((((r) >> 4) & 0xfffffff) + 1) * (sizeof(void *)) - allocai_mem;
  } else {
   return - SHADOW_REG_SPACE - info->gp_reg_count * (sizeof(void *)) - ((((r) >> 4) & 0xfffffff) + 1) * sizeof(double) - allocai_mem;
  }
 }
 if ((((r) >> 1) & 0x03) == (3)) {
  int arg_id = (((r) >> 4) & 0xfffffff);
  struct jit_inp_arg *a = &(jit_current_func_info(jit)->args[arg_id]);
  return a->spill_pos;
 }
 assert(0);
}

static inline int GET_ARG_SPILL_POS(struct jit *jit, struct jit_func_info *info, int arg)
{
 return - (arg + 1) * (sizeof(void *)) - jit_current_func_info(jit)->allocai_mem;
}

static inline int GET_FPARG_SPILL_POS(struct jit *jit, struct jit_func_info *info, int arg)
{
 return - (((0) > (info->general_arg_cnt - jit->reg_al->gp_arg_reg_cnt) ? (0) : (info->general_arg_cnt - jit->reg_al->gp_arg_reg_cnt))) * (sizeof(void *))
  - (info->gp_reg_count * (sizeof(void *)))
  - (arg + 1) * sizeof(double)
  - jit_current_func_info(jit)->allocai_mem;
}

int jit_allocai(struct jit * jit, int size)
{
 int real_size = jit_value_align(size, 4);
 jit_add_op(jit, JIT_ALLOCA | 0x02, (((0x00) << 4) | ((0x00) << 2) | (0x02)), (long)real_size, 0, 0, 0, NULL);

 struct jit_func_info *info = jit_current_func_info(jit);
 info->allocai_mem += real_size;
 return -(info->allocai_mem);
}

struct jit_scheduled_argument {
 int index;
 char isfp;
 char passed_in_reg;
 struct jit_out_arg *oarg;
};

struct jit_argument_schedule {
 int arg_index;
 int gp_index;
 int fp_index;
 int stack_index;
 char allocated_fp[32];
 struct jit_scheduled_argument arguments[];
};

struct jit_argument_schedule *argument_schedule_create(int arg_cnt)
{
 struct jit_argument_schedule *schedule = malloc(sizeof(struct jit_argument_schedule) + sizeof(struct jit_scheduled_argument) * arg_cnt);
 schedule->arg_index = 0;
 schedule->gp_index = 0;
 schedule->fp_index = 0;
 schedule->stack_index = 0;
 for (int i = 0; i < sizeof(schedule->allocated_fp); i++)
  schedule->allocated_fp[i] = 0;
 return schedule;
}

static void argument_schedule_add_gp_arg(struct jit_argument_schedule *schedule, struct jit *jit, struct jit_out_arg *arg)
{
 int i = schedule->arg_index ++;
 schedule->arguments[i].oarg = arg;
 schedule->arguments[i].isfp = 0;
 if (schedule->gp_index < jit->reg_al->gp_arg_reg_cnt) {
  schedule->arguments[i].passed_in_reg = 1;
  schedule->arguments[i].index = schedule->gp_index ++;
 } else {
  schedule->arguments[i].passed_in_reg = 0;
  schedule->arguments[i].index = schedule->stack_index;
  schedule->stack_index ++;
 }
}

static void argument_schedule_add_fp_arg(struct jit_argument_schedule *schedule, struct jit *jit, int size, struct jit_out_arg *arg)
{
 int i = schedule->arg_index ++;
 schedule->arguments[i].oarg = arg;
 schedule->arguments[i].isfp = 1;
 int step = (size == sizeof(float) ? 1 : 2);
 int index = -1;
 for (int j = 0; j <= jit->reg_al->fp_arg_reg_cnt * 2 - step; j += step) {
  if (((step == 1) && !schedule->allocated_fp[j])
  || ((step == 2) && !schedule->allocated_fp[j] && !schedule->allocated_fp[j + 1])) {
   index = j;
   for (int k = 0; k < step; k++)
    schedule->allocated_fp[index + k] = 1;
   break;
  }
 }
 if (index >= 0) {
  schedule->arguments[i].passed_in_reg = 1;
  schedule->arguments[i].index = index;
 } else {
  schedule->arguments[i].passed_in_reg = 0;
  schedule->arguments[i].index = schedule->stack_index;
  schedule->stack_index += step;
  }
}

static struct jit_argument_schedule *argument_schedule_create_output(struct jit *jit, struct jit_prepared_args *prepared_args)
{
 int arg_cnt = jit->prepared_args.count;
 struct jit_argument_schedule *schedule = argument_schedule_create(arg_cnt);
 struct jit_out_arg *args = prepared_args->args;

 for (int i = 0; i < arg_cnt; i++) {
                struct jit_out_arg *arg = &(args[i]);
  if (!arg->isfp) argument_schedule_add_gp_arg(schedule, jit, arg);
  else argument_schedule_add_fp_arg(schedule, jit, arg->size, arg);
 }
 return schedule;
}

static struct jit_argument_schedule *argument_schedule_create_input(struct jit *jit, struct jit_func_info *info, int arg_cnt)
{
 struct jit_argument_schedule *schedule = argument_schedule_create(arg_cnt + 1);

 for (int i = 0; i <= arg_cnt; i++) {
  struct jit_inp_arg *arg = &(info->args[i]);
  if (arg->type != JIT_FLOAT_NUM) argument_schedule_add_gp_arg(schedule, jit, NULL);
  else argument_schedule_add_fp_arg(schedule, jit, arg->size, NULL);
 }
 return schedule;
}



void jit_init_arg_params(struct jit *jit, struct jit_func_info *info, int p, int *phys_reg)
{

 struct jit_argument_schedule *schedule = argument_schedule_create_input(jit, info, p);
 struct jit_inp_arg *a = &(info->args[p]);
 struct jit_scheduled_argument *sa = &(schedule->arguments[p]);

 a->passed_by_reg = sa->passed_in_reg;
 a->overflow = 0;

 if (!sa->passed_in_reg) {
  a->location.stack_pos = (1 + sa->index) * (sizeof(void *));
  a->spill_pos = a->location.stack_pos;
  goto free_schedule;
 }

 if (!sa->isfp) {
  a->location.reg = jit->reg_al->gp_arg_regs[sa->index]->id;
  a->spill_pos = GET_ARG_SPILL_POS(jit, info, p);
  goto free_schedule;
 }


 if (a->size == sizeof(double)) {
  a->location.reg = jit->reg_al->fp_arg_regs[sa->index / 2]->id;
  a->spill_pos = GET_FPARG_SPILL_POS(jit, info, a->fp_pos);
 }

 if (a->size == sizeof(float)) {
  a->location.reg = sa->index;

  a->spill_pos = GET_FPARG_SPILL_POS(jit, info, a->fp_pos);
 }
free_schedule:
 free(schedule);
}

static int frame_size(struct jit *jit, struct jit_func_info *info) {
 int stack_mem = 0;
 stack_mem += info->allocai_mem;
 stack_mem += info->gp_reg_count * (sizeof(void *));
 stack_mem += info->general_arg_cnt * (sizeof(void *));
 stack_mem += info->fp_reg_count * sizeof(double);
 stack_mem += info->float_arg_cnt * sizeof(double);
 return jit_value_align(stack_mem, 8);
}

static int used_callee_saved_regs(struct jit *jit)
{

 struct jit_op * op = jit->current_func;
 int mask = 0;
 for (int i = 0; i < jit->reg_al->gp_reg_cnt; i++) {
  jit_hw_reg * r = &(jit->reg_al->gp_regs[i]);
  if (!r->callee_saved) continue;
  for (struct jit_op * o = op->next; o != NULL; o = o->next) {
   if (((jit_opcode) (o->code & 0xfff8)) == JIT_PROLOG) break;
   if (uses_hw_reg(o, r->id, 0)) {
    mask |= 1 << (r->id);
    break;
   }
  }
 }

 for (struct jit_op * o = op->next; o != NULL; o = o->next) {
  if (((jit_opcode) (o->code & 0xfff8)) == JIT_PROLOG) break;
  if (((jit_opcode) (o->code & 0xfff8)) == JIT_CALL) {
   mask |= 1 << (ARMREG_LR);
   break;
  }
 }
 return mask;
}



static void emit_prolog(struct jit *jit, struct jit_op *op)
{
 jit->current_func = op;
 struct jit_func_info *info = jit_current_func_info(jit);
 op->patch_addr = ((jit_value)jit->ip - (jit_value)jit->buf);
 do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0x52d) << 16) | ((ARMREG_FP) << 12) | ((0x4) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
 do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0)) << 25) | (((ARMOP_MOV)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_FP) << 12) | ((((ARMREG_SP) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
 do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_SUB)) << 21) | ((0) << 20) | ((ARMREG_SP) << 16) | ((ARMREG_SP) << 12) | ((((arm32_encode_imm(((intptr_t)((frame_size(jit, info)))))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);;


 for (int i = 0; i < info->general_arg_cnt + info->float_arg_cnt; i++) {
  struct jit_inp_arg a = info->args[i];
  if ((a.type == JIT_FLOAT_NUM) && (a.size == sizeof(float)) && a.passed_by_reg) {
   do { int __disp = a.spill_pos; if ((__disp >= -4095) && (__disp <= 4095)) { do { int __val = (__disp) / 4; int __absval = (__val < 0 ? -__val : __val); do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((ARMCOND_AL) << 28) | ((0xd) << 24) | ((__val >= 0) << 23) | (((a.location.reg) & 0x1) << 22) | ((0) << 20) | ((ARMREG_FP) << 16) | (((a.location.reg) >> 1) << 12) | ((0x5) << 9) | ((((1) ? 0x0: 0x1)) << 8) | ((__absval & 0xff) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); if (0 && 1) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xeb7) << 16) | ((a.location.reg) << 12) | ((0x5) << 9) | ((0) << 8) | ((0xc) << 4) | ((a.location.reg) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } else { do { int __imm = ((intptr_t)(__disp)); if (arm32_imm_rotate(((intptr_t)(__imm))) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MOV)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R12) << 12) | ((((arm32_encode_imm(((intptr_t)(__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else if (arm32_imm_rotate(~__imm) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MVN)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R12) << 12) | ((((arm32_encode_imm(((intptr_t)(~__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else { do { unsigned __val = __imm & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x30) << 20) | ((ARMREG_R12) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); do { unsigned __val = __imm >> 16 & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x34) << 20) | ((ARMREG_R12) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } } while (0); do { int __val = (ARMREG_R12) / 4; int __absval = (__val < 0 ? -__val : __val); do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((ARMCOND_AL) << 28) | ((0xd) << 24) | (((__val >= 0) & 0x1) << 23) | ((0) << 22) | (((0) & 0x1) << 20) | (((ARMREG_FP) & 0xf) << 16) | (((a.location.reg) & 0xf) << 12) | ((0x5) << 9) | ((((1) ? 0x0: 0x1)) << 8) | ((__absval & 0xff) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); if (0 && 1) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xeb7) << 16) | ((a.location.reg) << 12) | ((0x5) << 9) | ((0) << 8) | ((0xc) << 4) | ((a.location.reg) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } } while (0);
  }
 }

 int mask = used_callee_saved_regs(jit);
 info->gp_callee_saved_regs = mask;
 if (mask) do { if (mask == 0) {} else if (((((mask) & (((mask) - 1))) == 0) && ((mask) != (1 << 31)))) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0x52d) << 16) | ((ffs(mask) - 1) << 12) | ((0x4) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); else do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0x92d) << 16) | ((mask) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0);
}

static void emit_epilog(struct jit *jit)
{
 struct jit_func_info *info = jit_current_func_info(jit);
 if (info->gp_callee_saved_regs) do { if (info->gp_callee_saved_regs == 0) {} else if (((((info->gp_callee_saved_regs) & (((info->gp_callee_saved_regs) - 1))) == 0) && ((info->gp_callee_saved_regs) != (1 << 31)))) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0x49d) << 16) | ((ffs(info->gp_callee_saved_regs) - 1) << 12) | ((0x4) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); else do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0x8bd) << 16) | ((info->gp_callee_saved_regs) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0);
 do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0)) << 25) | (((ARMOP_MOV)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_SP) << 12) | ((((ARMREG_FP) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
 do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0x49d) << 16) | ((ARMREG_FP) << 12) | ((0x4) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
 do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x12fff1) << 4) | ((ARMREG_LR) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
}

static inline void emit_cond_op(struct jit *jit, struct jit_op *op, int cond, int imm)
{
 if (imm) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_CMP)) << 21) | ((1) << 20) | ((op->r_arg[1]) << 16) | ((0) << 12) | ((((arm32_encode_imm(op->r_arg[2])) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
 else do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0)) << 25) | (((ARMOP_CMP)) << 21) | ((1) << 20) | ((op->r_arg[1]) << 16) | ((0) << 12) | ((((op->r_arg[2]) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);

 do { int __imm = ((intptr_t)(0)); if (arm32_imm_rotate(((intptr_t)(__imm))) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MOV)) << 21) | ((0) << 20) | ((0) << 16) | ((op->r_arg[0]) << 12) | ((((arm32_encode_imm(((intptr_t)(__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else if (arm32_imm_rotate(~__imm) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MVN)) << 21) | ((0) << 20) | ((0) << 16) | ((op->r_arg[0]) << 12) | ((((arm32_encode_imm(((intptr_t)(~__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else { do { unsigned __val = __imm & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x30) << 20) | ((op->r_arg[0]) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); do { unsigned __val = __imm >> 16 & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x34) << 20) | ((op->r_arg[0]) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } } while (0);
 do { int __imm = ((intptr_t)(1)); if (arm32_imm_rotate(((intptr_t)(__imm))) != -1) { do { *((unsigned int *)(jit->ip)) = ((cond) << 28) | (((1)) << 25) | (((ARMOP_MOV)) << 21) | ((0) << 20) | ((0) << 16) | ((op->r_arg[0]) << 12) | ((((arm32_encode_imm(((intptr_t)(__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else if (arm32_imm_rotate(~__imm) != -1) { do { *((unsigned int *)(jit->ip)) = ((cond) << 28) | (((1)) << 25) | (((ARMOP_MVN)) << 21) | ((0) << 20) | ((0) << 16) | ((op->r_arg[0]) << 12) | ((((arm32_encode_imm(((intptr_t)(~__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else { do { unsigned __val = __imm & 0xffff; do { *((unsigned int *)(jit->ip)) = ((cond) << 28) | ((0x30) << 20) | ((op->r_arg[0]) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); do { unsigned __val = __imm >> 16 & 0xffff; do { *((unsigned int *)(jit->ip)) = ((cond) << 28) | ((0x34) << 20) | ((op->r_arg[0]) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } } while (0);
}

static inline void emit_branch_op(struct jit * jit, struct jit_op * op, int cond, int imm)
{
 if (imm) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_CMP)) << 21) | ((1) << 20) | ((op->r_arg[1]) << 16) | ((0) << 12) | ((((arm32_encode_imm(op->r_arg[2])) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
 else do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0)) << 25) | (((ARMOP_CMP)) << 21) | ((1) << 20) | ((op->r_arg[1]) << 16) | ((0) << 12) | ((((op->r_arg[2]) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);

 op->patch_addr = ((jit_value)jit->ip - (jit_value)jit->buf);
 do { *((unsigned int *)(jit->ip)) = ((cond) << 28) | ((0x5) << 25) | ((0) << 24) | ((((!jit_is_label(jit, (void *)(op->r_arg[0])) ? (op->r_arg[0]) : ((((long)jit->buf + (long)((jit_label *)(op->r_arg[0]))->pos - (long)jit->ip)) / 4)) - 2) & 0xffffff) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
}


static inline void emit_branch_mask_op(struct jit * jit, struct jit_op * op, int cond, int imm)
{
 if (imm) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_TST)) << 21) | ((1) << 20) | ((op->r_arg[1]) << 16) | ((0) << 12) | ((((arm32_encode_imm(op->r_arg[2])) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
 else do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0)) << 25) | (((ARMOP_TST)) << 21) | ((1) << 20) | ((op->r_arg[1]) << 16) | ((0) << 12) | ((((op->r_arg[2]) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);

 op->patch_addr = ((jit_value)jit->ip - (jit_value)jit->buf);
 do { *((unsigned int *)(jit->ip)) = ((cond) << 28) | ((0x5) << 25) | ((0) << 24) | ((((!jit_is_label(jit, (void *)(op->r_arg[0])) ? (op->r_arg[0]) : ((((long)jit->buf + (long)((jit_label *)(op->r_arg[0]))->pos - (long)jit->ip)) / 4)) - 2) & 0xffffff) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
}

static inline void emit_op_and_overflow_branch(struct jit * jit, struct jit_op * op, int alu_op, int imm, int negation)
{
 long a1 = op->r_arg[0];
 long a2 = op->r_arg[1];
 long a3 = op->r_arg[2];
 if (imm) {
  switch (alu_op) {
   case JIT_ADD: do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_ADD)) << 21) | ((1) << 20) | ((a2) << 16) | ((a2) << 12) | ((((arm32_encode_imm(a3)) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); break;
   case JIT_SUB: do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_SUB)) << 21) | ((1) << 20) | ((a2) << 16) | ((a2) << 12) | ((((arm32_encode_imm(a3)) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); break;
   default: assert(0);
  }
 } else {
  switch (alu_op) {
   case JIT_ADD: do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0)) << 25) | (((ARMOP_ADD)) << 21) | ((1) << 20) | ((a2) << 16) | ((a2) << 12) | ((((a3) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); break;
   case JIT_SUB: do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0)) << 25) | (((ARMOP_SUB)) << 21) | ((1) << 20) | ((a2) << 16) | ((a2) << 12) | ((((a3) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); break;
   default: assert(0);
  }
 }
 op->patch_addr = ((jit_value)jit->ip - (jit_value)jit->buf);
 if (!negation) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_VS) << 28) | ((0x5) << 25) | ((0) << 24) | ((((!jit_is_label(jit, (void *)(a1)) ? (a1) : ((((long)jit->buf + (long)((jit_label *)(a1))->pos - (long)jit->ip)) / 4)) - 2) & 0xffffff) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
 else do { *((unsigned int *)(jit->ip)) = ((ARMCOND_VC) << 28) | ((0x5) << 25) | ((0) << 24) | ((((!jit_is_label(jit, (void *)(a1)) ? (a1) : ((((long)jit->buf + (long)((jit_label *)(a1))->pos - (long)jit->ip)) / 4)) - 2) & 0xffffff) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
}

static inline void emit_fpbranch_op(struct jit * jit, struct jit_op * op, int cond, int arg1, int arg2)
{
 if ((op->code & 0x02)) {
  do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xeb) << 20) | (((1) ? 0x5 : 0x4) << 16) | ((op->r_arg[1]) << 12) | ((0xbc) << 4) | ((0) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
 } else {
  do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xeb) << 20) | (((0) ? 0x5 : 0x4) << 16) | ((op->r_arg[1]) << 12) | ((0xbc) << 4) | ((op->r_arg[2]) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
 }
 do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0x77) << 21) | ((1) << 20) | ((0x1) << 16) | ((0xf) << 12) | ((0xa10) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);

 op->patch_addr = ((jit_value)jit->ip - (jit_value)jit->buf);
 do { *((unsigned int *)(jit->ip)) = ((cond) << 28) | ((0x5) << 25) | ((0) << 24) | ((((!jit_is_label(jit, (void *)(op->r_arg[0])) ? (op->r_arg[0]) : ((((long)jit->buf + (long)((jit_label *)(op->r_arg[0]))->pos - (long)jit->ip)) / 4)) - 2) & 0xffffff) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
}






static inline int is_spilled(int arg_id, jit_op * prepare_op, int * reg)
{
 jit_hw_reg * hreg = rmap_get(prepare_op->regmap, arg_id);
 if (hreg) {
  *reg = hreg->id;
  return 0;
 }
 return 1;
}

static void emit_pass_gp_arg(struct jit *jit, struct jit_scheduled_argument *sched)
{
 int index = sched->index;
 struct jit_out_arg *arg = sched->oarg;
 int passed_in_reg = sched->passed_in_reg;

 int dreg = (passed_in_reg ? jit->reg_al->gp_arg_regs[index]->id : ARMREG_R12);

 if (arg->isreg) {
  int sreg;
  long reg = arg->value.generic;
  if (is_spilled(reg, jit->prepared_args.op, &sreg)) {
   do { int __disp = GET_REG_POS(jit, reg); if ((arm32_imm_rotate(__disp) >= 0) || (arm32_imm_rotate(-__disp) >= 0)) { do { unsigned int op = ((ARMCOND_AL) << 28) | ((0x1) << 26) | ((0) << 25) | ((0x1) << 24) | ((0) << 22) | ((0x0) << 21) | ((1) << 20) | ((ARMREG_FP) << 16) | ((dreg) << 12); if (0) { op |= ((0x1) << 23); op |= ((__disp) << 0); } else { int _imm = ((intptr_t)(__disp)); if (arm32_imm_rotate(_imm) >= 0) { op |= ((0x1) << 23); op |= arm32_encode_imm(__disp); } else if (arm32_imm_rotate(-_imm) >= 0) { op |= ((0x0) << 23); op |= arm32_encode_imm(-_imm); } else { abort(); } } do { *((unsigned int *)(jit->ip)) = op; (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } else { do { int __imm = ((intptr_t)(__disp)); if (arm32_imm_rotate(((intptr_t)(__imm))) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MOV)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R12) << 12) | ((((arm32_encode_imm(((intptr_t)(__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else if (arm32_imm_rotate(~__imm) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MVN)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R12) << 12) | ((((arm32_encode_imm(((intptr_t)(~__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else { do { unsigned __val = __imm & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x30) << 20) | ((ARMREG_R12) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); do { unsigned __val = __imm >> 16 & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x34) << 20) | ((ARMREG_R12) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } } while (0); do { unsigned int op = ((ARMCOND_AL) << 28) | ((0x1) << 26) | ((1) << 25) | ((0x1) << 24) | ((0) << 22) | ((0x0) << 21) | ((1) << 20) | ((ARMREG_FP) << 16) | ((dreg) << 12); if (1) { op |= ((0x1) << 23); op |= ((ARMREG_R12) << 0); } else { int _imm = ((intptr_t)(ARMREG_R12)); if (arm32_imm_rotate(_imm) >= 0) { op |= ((0x1) << 23); op |= arm32_encode_imm(ARMREG_R12); } else if (arm32_imm_rotate(-_imm) >= 0) { op |= ((0x0) << 23); op |= arm32_encode_imm(-_imm); } else { abort(); } } do { *((unsigned int *)(jit->ip)) = op; (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } } while (0);
  } else {
   if (dreg != sreg) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0)) << 25) | (((ARMOP_MOV)) << 21) | ((0) << 20) | ((0) << 16) | ((dreg) << 12) | ((((sreg) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
  }
 } else {
  do { int __imm = ((intptr_t)(arg->value.generic)); if (arm32_imm_rotate(((intptr_t)(__imm))) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MOV)) << 21) | ((0) << 20) | ((0) << 16) | ((dreg) << 12) | ((((arm32_encode_imm(((intptr_t)(__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else if (arm32_imm_rotate(~__imm) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MVN)) << 21) | ((0) << 20) | ((0) << 16) | ((dreg) << 12) | ((((arm32_encode_imm(((intptr_t)(~__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else { do { unsigned __val = __imm & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x30) << 20) | ((dreg) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); do { unsigned __val = __imm >> 16 & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x34) << 20) | ((dreg) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } } while (0);
 }

 if (!passed_in_reg) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0x52d) << 16) | ((dreg) << 12) | ((0x4) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
}

static void emit_pass_fp_arg_double(struct jit *jit, struct jit_scheduled_argument *sched)
{
 int index = sched->index;
 struct jit_out_arg *arg = sched->oarg;
 int passed_in_reg = sched->passed_in_reg;
 int dreg = (passed_in_reg ? jit->reg_al->fp_arg_regs[index / 2]->id : ARMREG_D15);

 if (arg->isreg) {
  int sreg;
  long reg = arg->value.generic;
  if (is_spilled(reg, jit->prepared_args.op, &sreg)) {
   do { int __disp = GET_REG_POS(jit, reg); if ((__disp >= -4095) && (__disp <= 4095)) { do { int __val = (__disp) / 4; int __absval = (__val < 0 ? -__val : __val); do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((ARMCOND_AL) << 28) | ((0xd) << 24) | (((__val >= 0) & 0x1) << 23) | ((0) << 22) | (((1) & 0x1) << 20) | (((ARMREG_FP) & 0xf) << 16) | (((dreg) & 0xf) << 12) | ((0x5) << 9) | (((((sizeof(double)) == sizeof(float)) ? 0x0: 0x1)) << 8) | ((__absval & 0xff) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); if (1 && (sizeof(double)) == sizeof(float)) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xeb7) << 16) | ((dreg) << 12) | ((0x5) << 9) | ((0) << 8) | ((0xc) << 4) | ((dreg) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } else { do { int __imm = ((intptr_t)(__disp)); if (arm32_imm_rotate(((intptr_t)(__imm))) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MOV)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R12) << 12) | ((((arm32_encode_imm(((intptr_t)(__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else if (arm32_imm_rotate(~__imm) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MVN)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R12) << 12) | ((((arm32_encode_imm(((intptr_t)(~__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else { do { unsigned __val = __imm & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x30) << 20) | ((ARMREG_R12) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); do { unsigned __val = __imm >> 16 & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x34) << 20) | ((ARMREG_R12) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } } while (0); do { int __val = (ARMREG_R12) / 4; int __absval = (__val < 0 ? -__val : __val); do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((ARMCOND_AL) << 28) | ((0xd) << 24) | (((__val >= 0) & 0x1) << 23) | ((0) << 22) | (((1) & 0x1) << 20) | (((ARMREG_FP) & 0xf) << 16) | (((dreg) & 0xf) << 12) | ((0x5) << 9) | (((((sizeof(double)) == sizeof(float)) ? 0x0: 0x1)) << 8) | ((__absval & 0xff) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); if (1 && (sizeof(double)) == sizeof(float)) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xeb7) << 16) | ((dreg) << 12) | ((0x5) << 9) | ((0) << 8) | ((0xc) << 4) | ((dreg) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } } while (0);
  } else {
   if (dreg != sreg) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xeb0) << 16) | ((dreg) << 12) | ((0xb4) << 4) | ((sreg) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
  }
 } else {
  do { int __imm = ((intptr_t)(&(arg->value.fp))); if (arm32_imm_rotate(((intptr_t)(__imm))) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MOV)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R12) << 12) | ((((arm32_encode_imm(((intptr_t)(__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else if (arm32_imm_rotate(~__imm) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MVN)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R12) << 12) | ((((arm32_encode_imm(((intptr_t)(~__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else { do { unsigned __val = __imm & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x30) << 20) | ((ARMREG_R12) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); do { unsigned __val = __imm >> 16 & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x34) << 20) | ((ARMREG_R12) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } } while (0);
  do { int __val = (0) / 4; int __absval = (__val < 0 ? -__val : __val); do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((ARMCOND_AL) << 28) | ((0xd) << 24) | (((__val >= 0) & 0x1) << 23) | ((0) << 22) | (((1) & 0x1) << 20) | (((ARMREG_R12) & 0xf) << 16) | (((dreg) & 0xf) << 12) | ((0x5) << 9) | (((((sizeof(double)) == sizeof(float)) ? 0x0: 0x1)) << 8) | ((__absval & 0xff) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); if (1 && (sizeof(double)) == sizeof(float)) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xeb7) << 16) | ((dreg) << 12) | ((0x5) << 9) | ((0) << 8) | ((0xc) << 4) | ((dreg) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0);
 }

 if (!passed_in_reg) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xd2d) << 16) | ((dreg) << 12) | ((0xb) << 8) | ((2) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
}

static void emit_pass_fp_arg_float(struct jit *jit, struct jit_scheduled_argument *sched)
{
 int index = sched->index;
 struct jit_out_arg *arg = sched->oarg;
 int passed_in_reg = sched->passed_in_reg;

 if (arg->isreg) {
  int sreg;
  long reg = arg->value.generic;
  if (is_spilled(reg, jit->prepared_args.op, &sreg)) {
   do { int __disp = GET_REG_POS(jit, reg); if ((__disp >= -4095) && (__disp <= 4095)) { do { int __val = (__disp) / 4; int __absval = (__val < 0 ? -__val : __val); do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((ARMCOND_AL) << 28) | ((0xd) << 24) | (((__val >= 0) & 0x1) << 23) | ((0) << 22) | (((1) & 0x1) << 20) | (((ARMREG_FP) & 0xf) << 16) | (((ARMREG_D15) & 0xf) << 12) | ((0x5) << 9) | (((((sizeof(double)) == sizeof(float)) ? 0x0: 0x1)) << 8) | ((__absval & 0xff) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); if (1 && (sizeof(double)) == sizeof(float)) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xeb7) << 16) | ((ARMREG_D15) << 12) | ((0x5) << 9) | ((0) << 8) | ((0xc) << 4) | ((ARMREG_D15) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } else { do { int __imm = ((intptr_t)(__disp)); if (arm32_imm_rotate(((intptr_t)(__imm))) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MOV)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R12) << 12) | ((((arm32_encode_imm(((intptr_t)(__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else if (arm32_imm_rotate(~__imm) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MVN)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R12) << 12) | ((((arm32_encode_imm(((intptr_t)(~__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else { do { unsigned __val = __imm & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x30) << 20) | ((ARMREG_R12) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); do { unsigned __val = __imm >> 16 & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x34) << 20) | ((ARMREG_R12) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } } while (0); do { int __val = (ARMREG_R12) / 4; int __absval = (__val < 0 ? -__val : __val); do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((ARMCOND_AL) << 28) | ((0xd) << 24) | (((__val >= 0) & 0x1) << 23) | ((0) << 22) | (((1) & 0x1) << 20) | (((ARMREG_FP) & 0xf) << 16) | (((ARMREG_D15) & 0xf) << 12) | ((0x5) << 9) | (((((sizeof(double)) == sizeof(float)) ? 0x0: 0x1)) << 8) | ((__absval & 0xff) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); if (1 && (sizeof(double)) == sizeof(float)) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xeb7) << 16) | ((ARMREG_D15) << 12) | ((0x5) << 9) | ((0) << 8) | ((0xc) << 4) | ((ARMREG_D15) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } } while (0);
   sreg = ARMREG_D15;
  }
  if (passed_in_reg) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xeb7) << 16) | ((((index) >> 1) & 0xf) << 12) | ((((index) & 0x1)) << 22) | ((0xbc) << 4) | ((sreg) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
  else {
   do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xeb7) << 16) | ((((31) >> 1) & 0xf) << 12) | ((((31) & 0x1)) << 22) | ((0xbc) << 4) | ((sreg) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
   do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xe1) << 20) | (((31 & 0x1f) >> 1) << 16) | ((ARMREG_R12) << 12) | ((0xa) << 8) | (((31 & 0x1)) << 7) | ((0x10) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
   do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0x52d) << 16) | ((ARMREG_R12) << 12) | ((0x4) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
  }
 }

 if (!arg->isreg) {
  float fimm = (float) arg->value.fp;
  int imm;
  memcpy(&imm, &fimm, sizeof(float));
  do { int __imm = ((intptr_t)(imm)); if (arm32_imm_rotate(((intptr_t)(__imm))) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MOV)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R12) << 12) | ((((arm32_encode_imm(((intptr_t)(__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else if (arm32_imm_rotate(~__imm) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MVN)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R12) << 12) | ((((arm32_encode_imm(((intptr_t)(~__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else { do { unsigned __val = __imm & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x30) << 20) | ((ARMREG_R12) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); do { unsigned __val = __imm >> 16 & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x34) << 20) | ((ARMREG_R12) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } } while (0);
  if (passed_in_reg) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xe0) << 20) | (((index & 0x1f) >> 1) << 16) | ((ARMREG_R12) << 12) | ((0xa) << 8) | (((index & 0x1)) << 7) | ((0x10) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
  else do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0x52d) << 16) | ((ARMREG_R12) << 12) | ((0x4) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
 }
}

static void emit_pass_fp_arg(struct jit *jit, struct jit_scheduled_argument *sched)
{
 if (sched->oarg->size == sizeof(double)) emit_pass_fp_arg_double(jit, sched);
 else emit_pass_fp_arg_float(jit, sched);
}

static int emit_arguments(struct jit *jit)
{
 int stack_size = 0;
 int arg_cnt = jit->prepared_args.count;
 struct jit_argument_schedule *schedule = argument_schedule_create_output(jit, &jit->prepared_args);

 for (int i = arg_cnt - 1; i >= 0; i--) {
  if (!schedule->arguments[i].passed_in_reg) {
   struct jit_scheduled_argument *arg = &(schedule->arguments[i]);
   if (!arg->isfp) {
    emit_pass_gp_arg(jit, arg);
    stack_size += (sizeof(void *));
   } else {
    emit_pass_fp_arg(jit, arg);
    stack_size += arg->oarg->size;
   }
  }
 }

 for (int i = 0; i < arg_cnt; i++) {
  if (schedule->arguments[i].passed_in_reg) {
   struct jit_scheduled_argument *arg = &(schedule->arguments[i]);
   if (!arg->isfp) emit_pass_gp_arg(jit, arg);
   else emit_pass_fp_arg(jit, arg);
  }
 }
 free(schedule);
 return stack_size;
}

static inline void emit_funcall(struct jit *jit, struct jit_op *op, int imm)
{
 int stack_adjustment = 0, mask = 0;
 for (int i = 0; i < jit->reg_al->gp_reg_cnt; i++) {
  jit_hw_reg *r = &jit->reg_al->gp_regs[i];
  if (!r->callee_saved && jit_reg_in_use(op, r->id, 0)) {
   mask |= (1 << r->id);
   stack_adjustment += (sizeof(void *));
  }
 }
 do { if (mask == 0) {} else if (((((mask) & (((mask) - 1))) == 0) && ((mask) != (1 << 31)))) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0x52d) << 16) | ((ffs(mask) - 1) << 12) | ((0x4) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); else do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0x92d) << 16) | ((mask) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0);

 for (int i = 0; i < jit->reg_al->fp_reg_cnt; i++) {
  jit_hw_reg *r = &jit->reg_al->fp_regs[i];
  if (!r->callee_saved) {
   if (jit_reg_in_use(op, r->id, 1)) {
    do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xd2d) << 16) | ((r->id) << 12) | ((0xb) << 8) | ((2) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
   }
  }
 }

 struct jit_func_info *info = jit_current_func_info(jit);
 if (info->has_prolog) stack_adjustment += (sizeof(void *));
 stack_adjustment += _bit_pop(info->gp_callee_saved_regs) * (sizeof(void *));
 stack_adjustment %= 8;

 if (stack_adjustment)
  do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_SUB)) << 21) | ((0) << 20) | ((ARMREG_SP) << 16) | ((ARMREG_SP) << 12) | ((((arm32_encode_imm(((intptr_t)((stack_adjustment))))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);;

 int stack_correction = emit_arguments(jit);

 if (!imm) {
  jit_hw_reg *hreg = rmap_get(op->regmap, op->arg[0]);
                if (hreg) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0x12fff3) << 4) | ((hreg->id) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
                else {
   do { int __disp = GET_REG_POS(jit, op->arg[0]); if ((arm32_imm_rotate(__disp) >= 0) || (arm32_imm_rotate(-__disp) >= 0)) { do { unsigned int op = ((ARMCOND_AL) << 28) | ((0x1) << 26) | ((0) << 25) | ((0x1) << 24) | ((0) << 22) | ((0x0) << 21) | ((1) << 20) | ((ARMREG_FP) << 16) | ((ARMREG_R12) << 12); if (0) { op |= ((0x1) << 23); op |= ((__disp) << 0); } else { int _imm = ((intptr_t)(__disp)); if (arm32_imm_rotate(_imm) >= 0) { op |= ((0x1) << 23); op |= arm32_encode_imm(__disp); } else if (arm32_imm_rotate(-_imm) >= 0) { op |= ((0x0) << 23); op |= arm32_encode_imm(-_imm); } else { abort(); } } do { *((unsigned int *)(jit->ip)) = op; (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } else { do { int __imm = ((intptr_t)(__disp)); if (arm32_imm_rotate(((intptr_t)(__imm))) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MOV)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R12) << 12) | ((((arm32_encode_imm(((intptr_t)(__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else if (arm32_imm_rotate(~__imm) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MVN)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R12) << 12) | ((((arm32_encode_imm(((intptr_t)(~__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else { do { unsigned __val = __imm & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x30) << 20) | ((ARMREG_R12) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); do { unsigned __val = __imm >> 16 & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x34) << 20) | ((ARMREG_R12) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } } while (0); do { unsigned int op = ((ARMCOND_AL) << 28) | ((0x1) << 26) | ((1) << 25) | ((0x1) << 24) | ((0) << 22) | ((0x0) << 21) | ((1) << 20) | ((ARMREG_FP) << 16) | ((ARMREG_R12) << 12); if (1) { op |= ((0x1) << 23); op |= ((ARMREG_R12) << 0); } else { int _imm = ((intptr_t)(ARMREG_R12)); if (arm32_imm_rotate(_imm) >= 0) { op |= ((0x1) << 23); op |= arm32_encode_imm(ARMREG_R12); } else if (arm32_imm_rotate(-_imm) >= 0) { op |= ((0x0) << 23); op |= arm32_encode_imm(-_imm); } else { abort(); } } do { *((unsigned int *)(jit->ip)) = op; (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } } while (0);
   do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0x12fff3) << 4) | ((ARMREG_R12) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
  }
 } else {
  if (op->arg[0] == (long)(NULL)) {
   do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xb) << 24) | (((0) & 0xffffff) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
  } else if (jit_is_label(jit, (void *)op->arg[0])) {
   do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xb) << 24) | ((((((long)jit->buf - (long)jit->ip) + (long)((jit_label *)(op->arg[0]))->pos - 8) / 4) & 0xffffff) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
  } else {
   do { int __imm = ((intptr_t)((long) op->arg[0])); if (arm32_imm_rotate(((intptr_t)(__imm))) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MOV)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R12) << 12) | ((((arm32_encode_imm(((intptr_t)(__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else if (arm32_imm_rotate(~__imm) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MVN)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R12) << 12) | ((((arm32_encode_imm(((intptr_t)(~__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else { do { unsigned __val = __imm & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x30) << 20) | ((ARMREG_R12) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); do { unsigned __val = __imm >> 16 & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x34) << 20) | ((ARMREG_R12) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } } while (0);
   do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0x12fff3) << 4) | ((ARMREG_R12) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
  }
 }

 for (int i = jit->reg_al->fp_reg_cnt - 1; i >= 0; i--) {
  jit_hw_reg *r = &jit->reg_al->fp_regs[i];
  if (!r->callee_saved) {
   if (jit_reg_in_use(op, r->id, 1)) {
    do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xcbd) << 16) | ((r->id) << 12) | ((0xb) << 8) | ((2) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
   }
  }
 }

 if (stack_correction)
  do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_ADD)) << 21) | ((0) << 20) | ((ARMREG_SP) << 16) | ((ARMREG_SP) << 12) | ((((arm32_encode_imm(((intptr_t)((stack_correction))))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);;

 if (stack_adjustment)
  do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_ADD)) << 21) | ((0) << 20) | ((ARMREG_SP) << 16) | ((ARMREG_SP) << 12) | ((((arm32_encode_imm(((intptr_t)((stack_adjustment))))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);;

 mask = 0;
 for (int i = jit->reg_al->gp_reg_cnt - 1; i >= 0; i--) {
  jit_hw_reg *r = &jit->reg_al->gp_regs[i];
  if (!r->callee_saved && jit_reg_in_use(op, r->id, 0))
   mask |= (1 << r->id);
 }
 do { if (mask == 0) {} else if (((((mask) & (((mask) - 1))) == 0) && ((mask) != (1 << 31)))) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0x49d) << 16) | ((ffs(mask) - 1) << 12) | ((0x4) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); else do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0x8bd) << 16) | ((mask) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0);
}

static void emit_get_arg_int(struct jit * jit, struct jit_inp_arg * arg, int dest_reg, int associated)
{
 int read_from_stack = 0;
 int stack_pos;

 if (!arg->passed_by_reg) {
  read_from_stack = 1;
  stack_pos = arg->location.stack_pos;
 }

 if (arg->passed_by_reg && !associated) {

  read_from_stack = 1;
  stack_pos = arg->spill_pos;
 }

 if (read_from_stack) do { int __disp = stack_pos; if ((arm32_imm_rotate(__disp) >= 0) || (arm32_imm_rotate(-__disp) >= 0)) { do { unsigned int op = ((ARMCOND_AL) << 28) | ((0x1) << 26) | ((0) << 25) | ((0x1) << 24) | ((0) << 22) | ((0x0) << 21) | ((1) << 20) | ((ARMREG_FP) << 16) | ((dest_reg) << 12); if (0) { op |= ((0x1) << 23); op |= ((__disp) << 0); } else { int _imm = ((intptr_t)(__disp)); if (arm32_imm_rotate(_imm) >= 0) { op |= ((0x1) << 23); op |= arm32_encode_imm(__disp); } else if (arm32_imm_rotate(-_imm) >= 0) { op |= ((0x0) << 23); op |= arm32_encode_imm(-_imm); } else { abort(); } } do { *((unsigned int *)(jit->ip)) = op; (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } else { do { int __imm = ((intptr_t)(__disp)); if (arm32_imm_rotate(((intptr_t)(__imm))) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MOV)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R12) << 12) | ((((arm32_encode_imm(((intptr_t)(__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else if (arm32_imm_rotate(~__imm) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MVN)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R12) << 12) | ((((arm32_encode_imm(((intptr_t)(~__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else { do { unsigned __val = __imm & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x30) << 20) | ((ARMREG_R12) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); do { unsigned __val = __imm >> 16 & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x34) << 20) | ((ARMREG_R12) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } } while (0); do { unsigned int op = ((ARMCOND_AL) << 28) | ((0x1) << 26) | ((1) << 25) | ((0x1) << 24) | ((0) << 22) | ((0x0) << 21) | ((1) << 20) | ((ARMREG_FP) << 16) | ((dest_reg) << 12); if (1) { op |= ((0x1) << 23); op |= ((ARMREG_R12) << 0); } else { int _imm = ((intptr_t)(ARMREG_R12)); if (arm32_imm_rotate(_imm) >= 0) { op |= ((0x1) << 23); op |= arm32_encode_imm(ARMREG_R12); } else if (arm32_imm_rotate(-_imm) >= 0) { op |= ((0x0) << 23); op |= arm32_encode_imm(-_imm); } else { abort(); } } do { *((unsigned int *)(jit->ip)) = op; (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } } while (0);
 else do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0)) << 25) | (((ARMOP_MOV)) << 21) | ((0) << 20) | ((0) << 16) | ((dest_reg) << 12) | ((((arg->location.reg) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
}

static void emit_get_arg_float(struct jit *jit, struct jit_inp_arg *arg, int dest_reg)
{
 do { int __disp = arg->spill_pos; if ((__disp >= -4095) && (__disp <= 4095)) { do { int __val = (__disp) / 4; int __absval = (__val < 0 ? -__val : __val); do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((ARMCOND_AL) << 28) | ((0xd) << 24) | (((__val >= 0) & 0x1) << 23) | ((0) << 22) | (((1) & 0x1) << 20) | (((ARMREG_FP) & 0xf) << 16) | (((dest_reg) & 0xf) << 12) | ((0x5) << 9) | (((((sizeof(float)) == sizeof(float)) ? 0x0: 0x1)) << 8) | ((__absval & 0xff) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); if (1 && (sizeof(float)) == sizeof(float)) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xeb7) << 16) | ((dest_reg) << 12) | ((0x5) << 9) | ((0) << 8) | ((0xc) << 4) | ((dest_reg) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } else { do { int __imm = ((intptr_t)(__disp)); if (arm32_imm_rotate(((intptr_t)(__imm))) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MOV)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R12) << 12) | ((((arm32_encode_imm(((intptr_t)(__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else if (arm32_imm_rotate(~__imm) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MVN)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R12) << 12) | ((((arm32_encode_imm(((intptr_t)(~__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else { do { unsigned __val = __imm & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x30) << 20) | ((ARMREG_R12) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); do { unsigned __val = __imm >> 16 & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x34) << 20) | ((ARMREG_R12) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } } while (0); do { int __val = (ARMREG_R12) / 4; int __absval = (__val < 0 ? -__val : __val); do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((ARMCOND_AL) << 28) | ((0xd) << 24) | (((__val >= 0) & 0x1) << 23) | ((0) << 22) | (((1) & 0x1) << 20) | (((ARMREG_FP) & 0xf) << 16) | (((dest_reg) & 0xf) << 12) | ((0x5) << 9) | (((((sizeof(float)) == sizeof(float)) ? 0x0: 0x1)) << 8) | ((__absval & 0xff) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); if (1 && (sizeof(float)) == sizeof(float)) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xeb7) << 16) | ((dest_reg) << 12) | ((0x5) << 9) | ((0) << 8) | ((0xc) << 4) | ((dest_reg) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } } while (0);
}

static void emit_get_arg_double(struct jit *jit, jit_op *op, struct jit_inp_arg *arg, int dest_reg, int associated)
{
 if (associated) {
  do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xeb0) << 16) | ((dest_reg) << 12) | ((0xb4) << 4) | ((arg->location.reg) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
 } else {
  do { int __disp = arg->spill_pos; if ((__disp >= -4095) && (__disp <= 4095)) { do { int __val = (__disp) / 4; int __absval = (__val < 0 ? -__val : __val); do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((ARMCOND_AL) << 28) | ((0xd) << 24) | (((__val >= 0) & 0x1) << 23) | ((0) << 22) | (((1) & 0x1) << 20) | (((ARMREG_FP) & 0xf) << 16) | (((dest_reg) & 0xf) << 12) | ((0x5) << 9) | (((((sizeof(double)) == sizeof(float)) ? 0x0: 0x1)) << 8) | ((__absval & 0xff) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); if (1 && (sizeof(double)) == sizeof(float)) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xeb7) << 16) | ((dest_reg) << 12) | ((0x5) << 9) | ((0) << 8) | ((0xc) << 4) | ((dest_reg) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } else { do { int __imm = ((intptr_t)(__disp)); if (arm32_imm_rotate(((intptr_t)(__imm))) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MOV)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R12) << 12) | ((((arm32_encode_imm(((intptr_t)(__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else if (arm32_imm_rotate(~__imm) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MVN)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R12) << 12) | ((((arm32_encode_imm(((intptr_t)(~__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else { do { unsigned __val = __imm & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x30) << 20) | ((ARMREG_R12) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); do { unsigned __val = __imm >> 16 & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x34) << 20) | ((ARMREG_R12) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } } while (0); do { int __val = (ARMREG_R12) / 4; int __absval = (__val < 0 ? -__val : __val); do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((ARMCOND_AL) << 28) | ((0xd) << 24) | (((__val >= 0) & 0x1) << 23) | ((0) << 22) | (((1) & 0x1) << 20) | (((ARMREG_FP) & 0xf) << 16) | (((dest_reg) & 0xf) << 12) | ((0x5) << 9) | (((((sizeof(double)) == sizeof(float)) ? 0x0: 0x1)) << 8) | ((__absval & 0xff) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); if (1 && (sizeof(double)) == sizeof(float)) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xeb7) << 16) | ((dest_reg) << 12) | ((0x5) << 9) | ((0) << 8) | ((0xc) << 4) | ((dest_reg) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } } while (0);
 }
}

static void emit_get_arg(struct jit * jit, jit_op * op)
{
 int dreg = op->r_arg[0];
 int arg_id = op->r_arg[1];

 struct jit_inp_arg * arg = &(jit_current_func_info(jit)->args[arg_id]);
 int reg_id = (((arg->type == JIT_FLOAT_NUM ? (1) : (0)) & 0x01) | ((((3)) & 0x03) << 1) | ((arg_id) & 0xfffffff) << 4);

 int associated = (rmap_get(op->regmap, reg_id) != NULL);

 if (arg->type != JIT_FLOAT_NUM) emit_get_arg_int(jit, arg, dreg, associated);
 else {
  if (arg->size == sizeof(float)) emit_get_arg_float(jit, arg, dreg);
  if (arg->size == sizeof(double)) emit_get_arg_double(jit, op, arg, dreg, associated);
 }
}
void jit_patch_external_calls(struct jit * jit)
{






}

void jit_patch_local_addrs(struct jit *jit)
{
 for (jit_op * op = jit_op_first(jit->ops); op != NULL; op = op->next) {

  if ((((jit_opcode) (op->code & 0xfff8)) == JIT_REF_CODE) || (((jit_opcode) (op->code & 0xfff8)) == JIT_REF_DATA)) {
   unsigned char *buf = jit->buf + (long) op->patch_addr;
   jit_value addr = jit_is_label(jit, (void *)op->arg[1]) ? ((jit_label *)op->arg[1])->pos : op->arg[1];
   do { int __imm = ((intptr_t)(jit->buf + addr)); do { unsigned __val = __imm & 0xffff; do { *((unsigned int *)(buf)) = ((ARMCOND_AL) << 28) | ((0x30) << 20) | ((op->r_arg[0]) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (buf) = (unsigned char *)((unsigned int*)(buf) + 1); } while (0); } while (0); do { unsigned __val = __imm >> 16 & 0xffff; do { *((unsigned int *)(buf)) = ((ARMCOND_AL) << 28) | ((0x34) << 20) | ((op->r_arg[0]) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (buf) = (unsigned char *)((unsigned int*)(buf) + 1); } while (0); } while (0); } while (0);
  }

  if ((((jit_opcode) (op->code & 0xfff8)) == JIT_DATA_REF_CODE) || (((jit_opcode) (op->code & 0xfff8)) == JIT_DATA_REF_DATA)) {
   unsigned char *buf = jit->buf + (long) op->patch_addr;
   jit_value addr = jit_is_label(jit, (void *)op->arg[0]) ? ((jit_label *)op->arg[0])->pos : op->arg[0];
   *((jit_value *)buf) = (jit_value) (jit->buf + addr);
  }
 }
}

void emit_mul(struct jit * jit, jit_op * op)
{
 long a1 = op->r_arg[0];
 long a2 = op->r_arg[1];
 long a3 = op->r_arg[2];
 if ((op->code & 0x02)) {
  switch (a3) {
   case 0: do { int __imm = ((intptr_t)(0)); if (arm32_imm_rotate(((intptr_t)(__imm))) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MOV)) << 21) | ((0) << 20) | ((0) << 16) | ((a1) << 12) | ((((arm32_encode_imm(((intptr_t)(__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else if (arm32_imm_rotate(~__imm) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MVN)) << 21) | ((0) << 20) | ((0) << 16) | ((a1) << 12) | ((((arm32_encode_imm(((intptr_t)(~__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else { do { unsigned __val = __imm & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x30) << 20) | ((a1) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); do { unsigned __val = __imm >> 16 & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x34) << 20) | ((a1) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } } while (0); return;
   case 1: if (a1 != a2) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0)) << 25) | (((ARMOP_MOV)) << 21) | ((0) << 20) | ((0) << 16) | ((a1) << 12) | ((((a2) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); return;
   default: do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xd) << 21) | ((0) << 20) | ((a1) << 12) | ((ARMSHIFT_LSL) << 5) | ((0) << 4) | (((ffs(a3) - 1) & 0x1f) << 7) | ((a2) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); return;
  }
 } else {
  do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((a1) << 16) | ((a2) << 8) | ((0x9) << 4) | ((a3) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
 }
}

static void emit_trace_op(struct jit *jit, jit_op *op)
{
        do { if (0x4fff == 0) {} else if (((((0x4fff) & (((0x4fff) - 1))) == 0) && ((0x4fff) != (1 << 31)))) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0x52d) << 16) | ((ffs(0x4fff) - 1) << 12) | ((0x4) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); else do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0x92d) << 16) | ((0x4fff) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0);

        int trace = 0;
        jit_opcode prev_code = ((jit_opcode) (op->prev->code & 0xfff8));
        jit_opcode next_code = ((jit_opcode) (op->next->code & 0xfff8));
        if ((prev_code == JIT_PROLOG) || (prev_code == JIT_LABEL) || (prev_code == JIT_PATCH)) trace |= (1);
        if ((next_code != JIT_PROLOG) && (next_code != JIT_LABEL) && (next_code != JIT_PATCH)) trace |= (2);

        do { int __imm = ((intptr_t)(jit)); if (arm32_imm_rotate(((intptr_t)(__imm))) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MOV)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R0) << 12) | ((((arm32_encode_imm(((intptr_t)(__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else if (arm32_imm_rotate(~__imm) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MVN)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R0) << 12) | ((((arm32_encode_imm(((intptr_t)(~__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else { do { unsigned __val = __imm & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x30) << 20) | ((ARMREG_R0) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); do { unsigned __val = __imm >> 16 & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x34) << 20) | ((ARMREG_R0) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } } while (0);
        do { int __imm = ((intptr_t)(op)); if (arm32_imm_rotate(((intptr_t)(__imm))) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MOV)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R1) << 12) | ((((arm32_encode_imm(((intptr_t)(__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else if (arm32_imm_rotate(~__imm) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MVN)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R1) << 12) | ((((arm32_encode_imm(((intptr_t)(~__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else { do { unsigned __val = __imm & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x30) << 20) | ((ARMREG_R1) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); do { unsigned __val = __imm >> 16 & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x34) << 20) | ((ARMREG_R1) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } } while (0);
        do { int __imm = ((intptr_t)(op->r_arg[0])); if (arm32_imm_rotate(((intptr_t)(__imm))) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MOV)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R2) << 12) | ((((arm32_encode_imm(((intptr_t)(__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else if (arm32_imm_rotate(~__imm) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MVN)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R2) << 12) | ((((arm32_encode_imm(((intptr_t)(~__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else { do { unsigned __val = __imm & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x30) << 20) | ((ARMREG_R2) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); do { unsigned __val = __imm >> 16 & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x34) << 20) | ((ARMREG_R2) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } } while (0);
        do { int __imm = ((intptr_t)(trace)); if (arm32_imm_rotate(((intptr_t)(__imm))) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MOV)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R3) << 12) | ((((arm32_encode_imm(((intptr_t)(__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else if (arm32_imm_rotate(~__imm) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MVN)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R3) << 12) | ((((arm32_encode_imm(((intptr_t)(~__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else { do { unsigned __val = __imm & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x30) << 20) | ((ARMREG_R3) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); do { unsigned __val = __imm >> 16 & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x34) << 20) | ((ARMREG_R3) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } } while (0);
        do { int __imm = ((intptr_t)(jit_proc_value((void (*)(void)) (jit_trace_callback)))); if (arm32_imm_rotate(((intptr_t)(__imm))) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MOV)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R4) << 12) | ((((arm32_encode_imm(((intptr_t)(__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else if (arm32_imm_rotate(~__imm) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MVN)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R4) << 12) | ((((arm32_encode_imm(((intptr_t)(~__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else { do { unsigned __val = __imm & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x30) << 20) | ((ARMREG_R4) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); do { unsigned __val = __imm >> 16 & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x34) << 20) | ((ARMREG_R4) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } } while (0);
        do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0x12fff3) << 4) | ((ARMREG_R4) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);

        do { if (0x4fff == 0) {} else if (((((0x4fff) & (((0x4fff) - 1))) == 0) && ((0x4fff) != (1 << 31)))) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0x49d) << 16) | ((ffs(0x4fff) - 1) << 12) | ((0x4) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); else do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0x8bd) << 16) | ((0x4fff) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0);
}


static void emit_round(struct jit *jit, jit_op *op, long a1, long a2)
{
 int in_use = jit_reg_in_use(op, a2, 1);
 if (in_use) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xd2d) << 16) | ((a2) << 12) | ((0xb) << 8) | ((2) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
 if (((jit_opcode) (op->code & 0xfff8)) == JIT_TRUNC) {
  do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xebd) << 16) | ((a2) << 12) | ((0xb) << 8) | (((!0) & 0x1) << 7) | ((0x4) << 4) | ((a2) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
 } else {
  do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0x77) << 21) | ((1) << 20) | ((0x1) << 16) | ((ARMREG_R12) << 12) | ((0xa10) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
  do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_BIC)) << 21) | ((0) << 20) | ((ARMREG_R12) << 16) | ((ARMREG_R12) << 12) | ((((arm32_encode_imm(((intptr_t)(0x3 << 22)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
  if (((jit_opcode) (op->code & 0xfff8)) == JIT_CEIL) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_ORR)) << 21) | ((0) << 20) | ((ARMREG_R12) << 16) | ((ARMREG_R12) << 12) | ((((arm32_encode_imm(((intptr_t)(0x1 << 22)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
  if (((jit_opcode) (op->code & 0xfff8)) == JIT_FLOOR) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_ORR)) << 21) | ((0) << 20) | ((ARMREG_R12) << 16) | ((ARMREG_R12) << 12) | ((((arm32_encode_imm(((intptr_t)(0x2 << 22)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
  do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0x77) << 21) | ((0) << 20) | ((0x1) << 16) | ((ARMREG_R12) << 12) | ((0xa10) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
  do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xebd) << 16) | ((a2) << 12) | ((0xb) << 8) | (((!1) & 0x1) << 7) | ((0x4) << 4) | ((a2) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
 }
 do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xe1) << 20) | ((a2) << 16) | ((a1) << 12) | ((0xa1) << 4)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
 if (in_use) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xcbd) << 16) | ((a2) << 12) | ((0xb) << 8) | ((2) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
}

static void emit_round_nearest(struct jit *jit, jit_op *op, long a1, long a2)
{

 static double flt05 = { 0.5};

 int scrap = (a2 != ARMREG_D0 ? ARMREG_D0 : ARMREG_D1);
 int scrap_in_use = jit_reg_in_use(op, scrap, 1);

 if (scrap_in_use) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xd2d) << 16) | ((scrap) << 12) | ((0xb) << 8) | ((2) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
 do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xd2d) << 16) | ((a2) << 12) | ((0xb) << 8) | ((2) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);


 do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0x77) << 21) | ((1) << 20) | ((0x1) << 16) | ((ARMREG_R12) << 12) | ((0xa10) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
 do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_BIC)) << 21) | ((0) << 20) | ((ARMREG_R12) << 16) | ((ARMREG_R12) << 12) | ((((arm32_encode_imm(((intptr_t)(0x3 << 22)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
 do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_ORR)) << 21) | ((0) << 20) | ((ARMREG_R12) << 16) | ((ARMREG_R12) << 12) | ((((arm32_encode_imm(((intptr_t)(0x2 << 22)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
 do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0x77) << 21) | ((0) << 20) | ((0x1) << 16) | ((ARMREG_R12) << 12) | ((0xa10) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);

 do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xeb0) << 16) | ((a2) << 12) | ((0xbc) << 4) | ((a2) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
 do { int __imm = ((intptr_t)(&flt05)); if (arm32_imm_rotate(((intptr_t)(__imm))) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MOV)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R12) << 12) | ((((arm32_encode_imm(((intptr_t)(__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else if (arm32_imm_rotate(~__imm) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MVN)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R12) << 12) | ((((arm32_encode_imm(((intptr_t)(~__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else { do { unsigned __val = __imm & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x30) << 20) | ((ARMREG_R12) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); do { unsigned __val = __imm >> 16 & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x34) << 20) | ((ARMREG_R12) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } } while (0);
 do { int __val = (0) / 4; int __absval = (__val < 0 ? -__val : __val); do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((ARMCOND_AL) << 28) | ((0xd) << 24) | (((__val >= 0) & 0x1) << 23) | ((0) << 22) | (((1) & 0x1) << 20) | (((ARMREG_R12) & 0xf) << 16) | (((scrap) & 0xf) << 12) | ((0x5) << 9) | (((((sizeof(double)) == sizeof(float)) ? 0x0: 0x1)) << 8) | ((__absval & 0xff) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); if (1 && (sizeof(double)) == sizeof(float)) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xeb7) << 16) | ((scrap) << 12) | ((0x5) << 9) | ((0) << 8) | ((0xc) << 4) | ((scrap) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0);
 do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xe) << 24) | ((0x3) << 20) | ((a2) << 16) | ((a2) << 12) | ((0xb) << 8) | ((0x0) << 4) | ((scrap) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);

 do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xebd) << 16) | ((a2) << 12) | ((0xb) << 8) | (((!1) & 0x1) << 7) | ((0x4) << 4) | ((a2) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
 do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xe1) << 20) | ((a2) << 16) | ((a1) << 12) | ((0xa1) << 4)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);

 do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xcbd) << 16) | ((a2) << 12) | ((0xb) << 8) | ((2) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
 do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xeb) << 20) | (((1) ? 0x5 : 0x4) << 16) | ((a2) << 12) | ((0xbc) << 4) | ((0) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
 do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0x77) << 21) | ((1) << 20) | ((0x1) << 16) | ((0xf) << 12) | ((0xa10) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);

 do { *((unsigned int *)(jit->ip)) = ((ARMCOND_LT) << 28) | (((1)) << 25) | (((ARMOP_RSB)) << 21) | ((0) << 20) | ((a1) << 16) | ((a1) << 12) | ((((arm32_encode_imm(((intptr_t)(0)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);

 if (scrap_in_use) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xcbd) << 16) | ((scrap) << 12) | ((0xb) << 8) | ((2) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
}

struct transfer_info {
 int sourcereg;
 int destreg;
 int scrapreg;
 int scrap_in_use;
 int counterreg;
 int counter_in_use;
 int block_size;
 unsigned char *loop_addr;
};

static void emit_transfer_init(struct jit * jit, jit_op * op, jit_value destreg, jit_value srcreg, jit_value cnt, int block_size)
{
 struct transfer_info *tinf = malloc(sizeof(struct transfer_info));
 tinf->sourcereg = srcreg;
 tinf->destreg = destreg;
 tinf->block_size = block_size;





 jit_hw_reg *scrap = jit_get_unused_reg_with_index(jit->reg_al, op, 0, 0);
 if (scrap) tinf->scrapreg = scrap->id;
 else {
  for (int i = 0; i < jit->reg_al->gp_reg_cnt; i++) {
   jit_hw_reg *r = &jit->reg_al->gp_regs[i];
   if ((r->id != srcreg) && (r->id != destreg) && (!(op->code & 0x02) && (r->id != cnt))) {
    tinf->scrapreg = r->id;
    break;
   }
  }
 }
 tinf->scrap_in_use = jit_reg_in_use(op, tinf->scrapreg, 0);

 if ((op->code & 0x02)) {
  jit_hw_reg * counter = jit_get_unused_reg_with_index(jit->reg_al, op, 0, 1);
  if (counter) tinf->counterreg = counter->id;
  else {
   for (int i = 0; i < jit->reg_al->gp_reg_cnt; i++) {
    jit_hw_reg *r = &jit->reg_al->gp_regs[i];
    if ((r->id != srcreg) && (r->id != destreg) && (r->id != tinf->scrapreg)) {
     tinf->counterreg = r->id;
     break;
    }
   }
  }
  tinf->counter_in_use = jit_reg_in_use(op, tinf->counterreg, 0);
 } else {
  if (jit_set_get(op->live_out, op->arg[2])) {
   jit_hw_reg *counter = jit_get_unused_reg_with_index(jit->reg_al, op, 0, 1);
   tinf->counterreg = (counter ? counter->id : cnt);
   tinf->counter_in_use = jit_reg_in_use(op, tinf->counterreg, 0);
  } else {
   tinf->counterreg = cnt;
   tinf->counter_in_use = 0;
  }
 }


 if (tinf->counter_in_use) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0x52d) << 16) | ((tinf->counterreg) << 12) | ((0x4) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
 if (tinf->scrap_in_use) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0x52d) << 16) | ((tinf->scrapreg) << 12) | ((0x4) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);

 if ((op->code & 0x02)) do { int __imm = ((intptr_t)(cnt * block_size)); if (arm32_imm_rotate(((intptr_t)(__imm))) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MOV)) << 21) | ((0) << 20) | ((0) << 16) | ((tinf->counterreg) << 12) | ((((arm32_encode_imm(((intptr_t)(__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else if (arm32_imm_rotate(~__imm) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MVN)) << 21) | ((0) << 20) | ((0) << 16) | ((tinf->counterreg) << 12) | ((((arm32_encode_imm(((intptr_t)(~__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else { do { unsigned __val = __imm & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x30) << 20) | ((tinf->counterreg) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); do { unsigned __val = __imm >> 16 & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x34) << 20) | ((tinf->counterreg) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } } while (0);
 else if ((tinf->counterreg != cnt) || block_size > 1) {
  switch (block_size) {
   case 1: do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0)) << 25) | (((ARMOP_MOV)) << 21) | ((0) << 20) | ((0) << 16) | ((tinf->counterreg) << 12) | ((((cnt) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); break;
   case 2: do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xd) << 21) | ((0) << 20) | ((tinf->counterreg) << 12) | ((ARMSHIFT_LSL) << 5) | ((0) << 4) | (((1) & 0x1f) << 7) | ((tinf->counterreg) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); break;
   case 4: do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xd) << 21) | ((0) << 20) | ((tinf->counterreg) << 12) | ((ARMSHIFT_LSL) << 5) | ((0) << 4) | (((2) & 0x1f) << 7) | ((tinf->counterreg) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); break;
   default: abort();
  }
 }

 tinf->loop_addr = jit->ip;
 op->addendum = tinf;

 do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_SUB)) << 21) | ((1) << 20) | ((tinf->counterreg) << 16) | ((tinf->counterreg) << 12) | ((((arm32_encode_imm(block_size)) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
 switch (block_size) {
  case 1: do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x1) << 24) | ((0x1) << 23) | ((0) << 22) | ((0) << 21) | ((1) << 20) | ((srcreg) << 16) | ((tinf->scrapreg) << 12) | ((0x1) << 7) | ((1) << 6) | ((0) << 5) | ((0x1) << 4) | ((tinf->counterreg) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); break;
  case 2: do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x1) << 24) | ((0x1) << 23) | ((0) << 22) | ((0) << 21) | ((1) << 20) | ((srcreg) << 16) | ((tinf->scrapreg) << 12) | ((0x1) << 7) | ((1) << 6) | ((1) << 5) | ((0x1) << 4) | ((tinf->counterreg) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); break;
  case 4: do { unsigned int op = ((ARMCOND_AL) << 28) | ((0x1) << 26) | ((1) << 25) | ((0x1) << 24) | ((0) << 22) | ((0x0) << 21) | ((1) << 20) | ((srcreg) << 16) | ((tinf->scrapreg) << 12); if (1) { op |= ((0x1) << 23); op |= ((tinf->counterreg) << 0); } else { int _imm = ((intptr_t)(tinf->counterreg)); if (arm32_imm_rotate(_imm) >= 0) { op |= ((0x1) << 23); op |= arm32_encode_imm(tinf->counterreg); } else if (arm32_imm_rotate(-_imm) >= 0) { op |= ((0x0) << 23); op |= arm32_encode_imm(-_imm); } else { abort(); } } do { *((unsigned int *)(jit->ip)) = op; (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); break;
  default: abort();
 }
}

static void emit_transfer_loop(struct jit *jit, jit_op *op)
{
 struct transfer_info *tinf = (struct transfer_info *)op->addendum;
 jit_value loop = (jit_value) tinf->loop_addr;

 switch (tinf->block_size) {
  case 1: do { unsigned int op = ((ARMCOND_AL) << 28) | ((0x1) << 26) | ((1) << 25) | ((0x1) << 24) | ((1) << 22) | ((0x0) << 21) | ((0) << 20) | ((tinf->destreg) << 16) | ((tinf->scrapreg) << 12); if (1) { op |= ((0x1) << 23); op |= ((tinf->counterreg) << 0); } else { int _imm = ((intptr_t)(tinf->counterreg)); if (arm32_imm_rotate(_imm) >= 0) { op |= ((0x1) << 23); op |= arm32_encode_imm(tinf->counterreg); } else if (arm32_imm_rotate(-_imm) >= 0) { op |= ((0x0) << 23); op |= arm32_encode_imm(-_imm); } else { abort(); } } do { *((unsigned int *)(jit->ip)) = op; (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); break;
  case 2: do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x1) << 24) | ((0x1) << 23) | ((0) << 22) | ((0) << 21) | ((0) << 20) | ((tinf->destreg) << 16) | ((tinf->scrapreg) << 12) | ((0x1) << 7) | ((0) << 6) | ((1) << 5) | ((0x1) << 4) | ((tinf->counterreg) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); break;
  case 4: do { unsigned int op = ((ARMCOND_AL) << 28) | ((0x1) << 26) | ((1) << 25) | ((0x1) << 24) | ((0) << 22) | ((0x0) << 21) | ((0) << 20) | ((tinf->destreg) << 16) | ((tinf->scrapreg) << 12); if (1) { op |= ((0x1) << 23); op |= ((tinf->counterreg) << 0); } else { int _imm = ((intptr_t)(tinf->counterreg)); if (arm32_imm_rotate(_imm) >= 0) { op |= ((0x1) << 23); op |= arm32_encode_imm(tinf->counterreg); } else if (arm32_imm_rotate(-_imm) >= 0) { op |= ((0x0) << 23); op |= arm32_encode_imm(-_imm); } else { abort(); } } do { *((unsigned int *)(jit->ip)) = op; (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); break;
  default: abort();
 }

 do { *((unsigned int *)(jit->ip)) = ((ARMCOND_NE) << 28) | ((0x5) << 25) | ((0) << 24) | ((((loop - (jit_value) jit->ip) / 4 - 2) & 0xffffff) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
 if (tinf->scrap_in_use) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0x49d) << 16) | ((tinf->scrapreg) << 12) | ((0x4) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
 if (tinf->counter_in_use) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0x49d) << 16) | ((tinf->counterreg) << 12) | ((0x4) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
}

static void emit_transfer_op(struct jit *jit, jit_op *op, int alu_op)
{
 jit_op *init_op = op->prev;
 while (((jit_opcode) (init_op->code & 0xfff8)) != JIT_TRANSFER)
  init_op = init_op->prev;

 struct transfer_info *tinf = (struct transfer_info *)init_op->addendum;
 int valreg = ARMREG_R12;

 if (op->arg[1] == (((((0)) & 0x01) | ((((2)) & 0x03) << 1) | ((1) & 0xfffffff) << 4))) {
  switch (tinf->block_size) {
   case 1: do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x1) << 24) | ((0x1) << 23) | ((0) << 22) | ((0) << 21) | ((1) << 20) | ((tinf->destreg) << 16) | ((ARMREG_R12) << 12) | ((0x1) << 7) | ((1) << 6) | ((0) << 5) | ((0x1) << 4) | ((tinf->counterreg) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); break;
   case 2: do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x1) << 24) | ((0x1) << 23) | ((0) << 22) | ((0) << 21) | ((1) << 20) | ((tinf->destreg) << 16) | ((ARMREG_R12) << 12) | ((0x1) << 7) | ((1) << 6) | ((1) << 5) | ((0x1) << 4) | ((tinf->counterreg) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); break;
   case 4: do { unsigned int op = ((ARMCOND_AL) << 28) | ((0x1) << 26) | ((1) << 25) | ((0x1) << 24) | ((0) << 22) | ((0x0) << 21) | ((1) << 20) | ((tinf->destreg) << 16) | ((ARMREG_R12) << 12); if (1) { op |= ((0x1) << 23); op |= ((tinf->counterreg) << 0); } else { int _imm = ((intptr_t)(tinf->counterreg)); if (arm32_imm_rotate(_imm) >= 0) { op |= ((0x1) << 23); op |= arm32_encode_imm(tinf->counterreg); } else if (arm32_imm_rotate(-_imm) >= 0) { op |= ((0x0) << 23); op |= arm32_encode_imm(-_imm); } else { abort(); } } do { *((unsigned int *)(jit->ip)) = op; (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); break;
   default: abort();
  }
 } else if (op->r_arg[1] != -1) {
  if (op->r_arg[1] == tinf->counterreg) {
   do { unsigned int op = ((ARMCOND_AL) << 28) | ((0x1) << 26) | ((0) << 25) | ((0x1) << 24) | ((0) << 22) | ((0x0) << 21) | ((1) << 20) | ((ARMREG_SP) << 16) | ((ARMREG_R12) << 12); if (0) { op |= ((0x1) << 23); op |= (((tinf->scrap_in_use ? 4 : 0)) << 0); } else { int _imm = ((intptr_t)((tinf->scrap_in_use ? 4 : 0))); if (arm32_imm_rotate(_imm) >= 0) { op |= ((0x1) << 23); op |= arm32_encode_imm((tinf->scrap_in_use ? 4 : 0)); } else if (arm32_imm_rotate(-_imm) >= 0) { op |= ((0x0) << 23); op |= arm32_encode_imm(-_imm); } else { abort(); } } do { *((unsigned int *)(jit->ip)) = op; (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0);
  } else if (op->r_arg[1] == tinf->scrapreg) {
   do { unsigned int op = ((ARMCOND_AL) << 28) | ((0x1) << 26) | ((0) << 25) | ((0x1) << 24) | ((0) << 22) | ((0x0) << 21) | ((1) << 20) | ((ARMREG_SP) << 16) | ((ARMREG_R12) << 12); if (0) { op |= ((0x1) << 23); op |= ((0) << 0); } else { int _imm = ((intptr_t)(0)); if (arm32_imm_rotate(_imm) >= 0) { op |= ((0x1) << 23); op |= arm32_encode_imm(0); } else if (arm32_imm_rotate(-_imm) >= 0) { op |= ((0x0) << 23); op |= arm32_encode_imm(-_imm); } else { abort(); } } do { *((unsigned int *)(jit->ip)) = op; (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0);
  } else valreg = op->r_arg[1];
 } else {
  do { int __disp = GET_REG_POS(jit, op->arg[1]); if ((arm32_imm_rotate(__disp) >= 0) || (arm32_imm_rotate(-__disp) >= 0)) { do { unsigned int op = ((ARMCOND_AL) << 28) | ((0x1) << 26) | ((0) << 25) | ((0x1) << 24) | ((0) << 22) | ((0x0) << 21) | ((1) << 20) | ((ARMREG_FP) << 16) | ((ARMREG_R12) << 12); if (0) { op |= ((0x1) << 23); op |= ((__disp) << 0); } else { int _imm = ((intptr_t)(__disp)); if (arm32_imm_rotate(_imm) >= 0) { op |= ((0x1) << 23); op |= arm32_encode_imm(__disp); } else if (arm32_imm_rotate(-_imm) >= 0) { op |= ((0x0) << 23); op |= arm32_encode_imm(-_imm); } else { abort(); } } do { *((unsigned int *)(jit->ip)) = op; (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } else { do { int __imm = ((intptr_t)(__disp)); if (arm32_imm_rotate(((intptr_t)(__imm))) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MOV)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R12) << 12) | ((((arm32_encode_imm(((intptr_t)(__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else if (arm32_imm_rotate(~__imm) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MVN)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R12) << 12) | ((((arm32_encode_imm(((intptr_t)(~__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else { do { unsigned __val = __imm & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x30) << 20) | ((ARMREG_R12) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); do { unsigned __val = __imm >> 16 & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x34) << 20) | ((ARMREG_R12) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } } while (0); do { unsigned int op = ((ARMCOND_AL) << 28) | ((0x1) << 26) | ((1) << 25) | ((0x1) << 24) | ((0) << 22) | ((0x0) << 21) | ((1) << 20) | ((ARMREG_FP) << 16) | ((ARMREG_R12) << 12); if (1) { op |= ((0x1) << 23); op |= ((ARMREG_R12) << 0); } else { int _imm = ((intptr_t)(ARMREG_R12)); if (arm32_imm_rotate(_imm) >= 0) { op |= ((0x1) << 23); op |= arm32_encode_imm(ARMREG_R12); } else if (arm32_imm_rotate(-_imm) >= 0) { op |= ((0x0) << 23); op |= arm32_encode_imm(-_imm); } else { abort(); } } do { *((unsigned int *)(jit->ip)) = op; (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } } while (0);
 }

 do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0)) << 25) | (((alu_op)) << 21) | ((0) << 20) | ((tinf->scrapreg) << 16) | ((tinf->scrapreg) << 12) | ((((valreg) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);

 if (op->arg[0]) emit_transfer_loop(jit, (jit_op *)op->arg[0]);
}

static void emit_memcpy(struct jit *jit, jit_op *op, jit_value a1, jit_value a2, jit_value a3)
{
 emit_transfer_init(jit, op, a1, a2, a3, 1);
 emit_transfer_loop(jit, op);
}

static void emit_memset(struct jit *jit, jit_op *op, jit_value tgt_reg, jit_value count_reg, jit_value val, int block_size)
{
 int counter_reg = ARMREG_R12;
 int value_reg = val;
 int value_reg_in_use = 0;

 if ((op->code & 0x02)) {
  value_reg = ARMREG_R9;
  value_reg_in_use = jit_reg_in_use(op, value_reg, 0);
  if (value_reg_in_use) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0x52d) << 16) | ((value_reg) << 12) | ((0x4) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
  do { int __imm = ((intptr_t)(val)); if (arm32_imm_rotate(((intptr_t)(__imm))) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MOV)) << 21) | ((0) << 20) | ((0) << 16) | ((value_reg) << 12) | ((((arm32_encode_imm(((intptr_t)(__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else if (arm32_imm_rotate(~__imm) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MVN)) << 21) | ((0) << 20) | ((0) << 16) | ((value_reg) << 12) | ((((arm32_encode_imm(((intptr_t)(~__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else { do { unsigned __val = __imm & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x30) << 20) | ((value_reg) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); do { unsigned __val = __imm >> 16 & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x34) << 20) | ((value_reg) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } } while (0);
 }
 switch (block_size) {
  case 1: do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0)) << 25) | (((ARMOP_MOV)) << 21) | ((0) << 20) | ((0) << 16) | ((counter_reg) << 12) | ((((count_reg) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); break;
  case 2: do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xd) << 21) | ((0) << 20) | ((counter_reg) << 12) | ((ARMSHIFT_LSL) << 5) | ((0) << 4) | (((1) & 0x1f) << 7) | ((count_reg) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); break;
  case 4: do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xd) << 21) | ((0) << 20) | ((counter_reg) << 12) | ((ARMSHIFT_LSL) << 5) | ((0) << 4) | (((2) & 0x1f) << 7) | ((count_reg) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); break;
  default: abort();
 }

 do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_SUB)) << 21) | ((1) << 20) | ((counter_reg) << 16) | ((counter_reg) << 12) | ((((arm32_encode_imm(block_size)) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
 switch (block_size) {
  case 1: do { unsigned int op = ((ARMCOND_CS) << 28) | ((0x1) << 26) | ((1) << 25) | ((0x1) << 24) | ((1) << 22) | ((0x0) << 21) | ((0) << 20) | ((tgt_reg) << 16) | ((value_reg) << 12); if (1) { op |= ((0x1) << 23); op |= ((counter_reg) << 0); } else { int _imm = ((intptr_t)(counter_reg)); if (arm32_imm_rotate(_imm) >= 0) { op |= ((0x1) << 23); op |= arm32_encode_imm(counter_reg); } else if (arm32_imm_rotate(-_imm) >= 0) { op |= ((0x0) << 23); op |= arm32_encode_imm(-_imm); } else { abort(); } } do { *((unsigned int *)(jit->ip)) = op; (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); break;
  case 2: do { *((unsigned int *)(jit->ip)) = ((ARMCOND_CS) << 28) | ((0x1) << 24) | ((0x1) << 23) | ((0) << 22) | ((0) << 21) | ((0) << 20) | ((tgt_reg) << 16) | ((value_reg) << 12) | ((0x1) << 7) | ((0) << 6) | ((1) << 5) | ((0x1) << 4) | ((counter_reg) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); break;
  case 4: do { unsigned int op = ((ARMCOND_CS) << 28) | ((0x1) << 26) | ((1) << 25) | ((0x1) << 24) | ((0) << 22) | ((0x0) << 21) | ((0) << 20) | ((tgt_reg) << 16) | ((value_reg) << 12); if (1) { op |= ((0x1) << 23); op |= ((counter_reg) << 0); } else { int _imm = ((intptr_t)(counter_reg)); if (arm32_imm_rotate(_imm) >= 0) { op |= ((0x1) << 23); op |= arm32_encode_imm(counter_reg); } else if (arm32_imm_rotate(-_imm) >= 0) { op |= ((0x0) << 23); op |= arm32_encode_imm(-_imm); } else { abort(); } } do { *((unsigned int *)(jit->ip)) = op; (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); break;
  default: abort();
 }
 do { *((unsigned int *)(jit->ip)) = ((ARMCOND_CS) << 28) | ((0x5) << 25) | ((0) << 24) | (((-2 - 2) & 0xffffff) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);

 if (value_reg_in_use) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0x49d) << 16) | ((value_reg) << 12) | ((0x4) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
}

static inline void emit_ureg(struct jit *jit, long vreg, long hreg_id)
{
 if ((((vreg) >> 1) & 0x03) == (3)) {
  if (((vreg) & 0x01) == (0)) {
   do { int __disp = GET_REG_POS(jit, vreg); if ((arm32_imm_rotate(__disp) >= 0) || (arm32_imm_rotate(-__disp) >= 0)) { do { unsigned int op = ((ARMCOND_AL) << 28) | ((0x1) << 26) | ((0) << 25) | ((0x1) << 24) | ((0) << 22) | ((0x0) << 21) | ((0) << 20) | ((ARMREG_FP) << 16) | ((hreg_id) << 12); if (0) { op |= ((0x1) << 23); op |= ((__disp) << 0); } else { int _imm = ((intptr_t)(__disp)); if (arm32_imm_rotate(_imm) >= 0) { op |= ((0x1) << 23); op |= arm32_encode_imm(__disp); } else if (arm32_imm_rotate(-_imm) >= 0) { op |= ((0x0) << 23); op |= arm32_encode_imm(-_imm); } else { abort(); } } do { *((unsigned int *)(jit->ip)) = op; (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } else { do { int __imm = ((intptr_t)(__disp)); if (arm32_imm_rotate(((intptr_t)(__imm))) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MOV)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R12) << 12) | ((((arm32_encode_imm(((intptr_t)(__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else if (arm32_imm_rotate(~__imm) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MVN)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R12) << 12) | ((((arm32_encode_imm(((intptr_t)(~__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else { do { unsigned __val = __imm & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x30) << 20) | ((ARMREG_R12) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); do { unsigned __val = __imm >> 16 & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x34) << 20) | ((ARMREG_R12) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } } while (0); do { unsigned int op = ((ARMCOND_AL) << 28) | ((0x1) << 26) | ((1) << 25) | ((0x1) << 24) | ((0) << 22) | ((0x0) << 21) | ((0) << 20) | ((ARMREG_FP) << 16) | ((hreg_id) << 12); if (1) { op |= ((0x1) << 23); op |= ((ARMREG_R12) << 0); } else { int _imm = ((intptr_t)(ARMREG_R12)); if (arm32_imm_rotate(_imm) >= 0) { op |= ((0x1) << 23); op |= arm32_encode_imm(ARMREG_R12); } else if (arm32_imm_rotate(-_imm) >= 0) { op |= ((0x0) << 23); op |= arm32_encode_imm(-_imm); } else { abort(); } } do { *((unsigned int *)(jit->ip)) = op; (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } } while (0);
  } else {
   int arg_id = (((vreg) >> 4) & 0xfffffff);
   struct jit_inp_arg *a = &(jit_current_func_info(jit)->args[arg_id]);
   if (a->passed_by_reg) do { int __disp = GET_REG_POS(jit, vreg); if ((__disp >= -4095) && (__disp <= 4095)) { do { int __val = (__disp) / 4; int __absval = (__val < 0 ? -__val : __val); do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((ARMCOND_AL) << 28) | ((0xd) << 24) | (((__val >= 0) & 0x1) << 23) | ((0) << 22) | (((0) & 0x1) << 20) | (((ARMREG_FP) & 0xf) << 16) | (((hreg_id) & 0xf) << 12) | ((0x5) << 9) | (((((sizeof(double)) == sizeof(float)) ? 0x0: 0x1)) << 8) | ((__absval & 0xff) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); if (0 && (sizeof(double)) == sizeof(float)) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xeb7) << 16) | ((hreg_id) << 12) | ((0x5) << 9) | ((0) << 8) | ((0xc) << 4) | ((hreg_id) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } else { do { int __imm = ((intptr_t)(__disp)); if (arm32_imm_rotate(((intptr_t)(__imm))) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MOV)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R12) << 12) | ((((arm32_encode_imm(((intptr_t)(__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else if (arm32_imm_rotate(~__imm) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MVN)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R12) << 12) | ((((arm32_encode_imm(((intptr_t)(~__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else { do { unsigned __val = __imm & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x30) << 20) | ((ARMREG_R12) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); do { unsigned __val = __imm >> 16 & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x34) << 20) | ((ARMREG_R12) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } } while (0); do { int __val = (ARMREG_R12) / 4; int __absval = (__val < 0 ? -__val : __val); do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((ARMCOND_AL) << 28) | ((0xd) << 24) | (((__val >= 0) & 0x1) << 23) | ((0) << 22) | (((0) & 0x1) << 20) | (((ARMREG_FP) & 0xf) << 16) | (((hreg_id) & 0xf) << 12) | ((0x5) << 9) | (((((sizeof(double)) == sizeof(float)) ? 0x0: 0x1)) << 8) | ((__absval & 0xff) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); if (0 && (sizeof(double)) == sizeof(float)) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xeb7) << 16) | ((hreg_id) << 12) | ((0x5) << 9) | ((0) << 8) | ((0xc) << 4) | ((hreg_id) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } } while (0);
  }
 }
 if ((((vreg) >> 1) & 0x03)== (0)) {
  if (((vreg) & 0x01)!= (1)) {
   do { int __disp = GET_REG_POS(jit, vreg); if ((arm32_imm_rotate(__disp) >= 0) || (arm32_imm_rotate(-__disp) >= 0)) { do { unsigned int op = ((ARMCOND_AL) << 28) | ((0x1) << 26) | ((0) << 25) | ((0x1) << 24) | ((0) << 22) | ((0x0) << 21) | ((0) << 20) | ((ARMREG_FP) << 16) | ((hreg_id) << 12); if (0) { op |= ((0x1) << 23); op |= ((__disp) << 0); } else { int _imm = ((intptr_t)(__disp)); if (arm32_imm_rotate(_imm) >= 0) { op |= ((0x1) << 23); op |= arm32_encode_imm(__disp); } else if (arm32_imm_rotate(-_imm) >= 0) { op |= ((0x0) << 23); op |= arm32_encode_imm(-_imm); } else { abort(); } } do { *((unsigned int *)(jit->ip)) = op; (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } else { do { int __imm = ((intptr_t)(__disp)); if (arm32_imm_rotate(((intptr_t)(__imm))) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MOV)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R12) << 12) | ((((arm32_encode_imm(((intptr_t)(__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else if (arm32_imm_rotate(~__imm) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MVN)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R12) << 12) | ((((arm32_encode_imm(((intptr_t)(~__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else { do { unsigned __val = __imm & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x30) << 20) | ((ARMREG_R12) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); do { unsigned __val = __imm >> 16 & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x34) << 20) | ((ARMREG_R12) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } } while (0); do { unsigned int op = ((ARMCOND_AL) << 28) | ((0x1) << 26) | ((1) << 25) | ((0x1) << 24) | ((0) << 22) | ((0x0) << 21) | ((0) << 20) | ((ARMREG_FP) << 16) | ((hreg_id) << 12); if (1) { op |= ((0x1) << 23); op |= ((ARMREG_R12) << 0); } else { int _imm = ((intptr_t)(ARMREG_R12)); if (arm32_imm_rotate(_imm) >= 0) { op |= ((0x1) << 23); op |= arm32_encode_imm(ARMREG_R12); } else if (arm32_imm_rotate(-_imm) >= 0) { op |= ((0x0) << 23); op |= arm32_encode_imm(-_imm); } else { abort(); } } do { *((unsigned int *)(jit->ip)) = op; (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } } while (0);
  } else {
   do { int __disp = GET_REG_POS(jit, vreg); if ((__disp >= -4095) && (__disp <= 4095)) { do { int __val = (__disp) / 4; int __absval = (__val < 0 ? -__val : __val); do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((ARMCOND_AL) << 28) | ((0xd) << 24) | (((__val >= 0) & 0x1) << 23) | ((0) << 22) | (((0) & 0x1) << 20) | (((ARMREG_FP) & 0xf) << 16) | (((hreg_id) & 0xf) << 12) | ((0x5) << 9) | (((((sizeof(double)) == sizeof(float)) ? 0x0: 0x1)) << 8) | ((__absval & 0xff) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); if (0 && (sizeof(double)) == sizeof(float)) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xeb7) << 16) | ((hreg_id) << 12) | ((0x5) << 9) | ((0) << 8) | ((0xc) << 4) | ((hreg_id) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } else { do { int __imm = ((intptr_t)(__disp)); if (arm32_imm_rotate(((intptr_t)(__imm))) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MOV)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R12) << 12) | ((((arm32_encode_imm(((intptr_t)(__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else if (arm32_imm_rotate(~__imm) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MVN)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R12) << 12) | ((((arm32_encode_imm(((intptr_t)(~__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else { do { unsigned __val = __imm & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x30) << 20) | ((ARMREG_R12) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); do { unsigned __val = __imm >> 16 & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x34) << 20) | ((ARMREG_R12) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } } while (0); do { int __val = (ARMREG_R12) / 4; int __absval = (__val < 0 ? -__val : __val); do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((ARMCOND_AL) << 28) | ((0xd) << 24) | (((__val >= 0) & 0x1) << 23) | ((0) << 22) | (((0) & 0x1) << 20) | (((ARMREG_FP) & 0xf) << 16) | (((hreg_id) & 0xf) << 12) | ((0x5) << 9) | (((((sizeof(double)) == sizeof(float)) ? 0x0: 0x1)) << 8) | ((__absval & 0xff) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); if (0 && (sizeof(double)) == sizeof(float)) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xeb7) << 16) | ((hreg_id) << 12) | ((0x5) << 9) | ((0) << 8) | ((0xc) << 4) | ((hreg_id) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } } while (0);
  }
 }
}







void jit_gen_op(struct jit * jit, struct jit_op * op)
{
 long a1 = op->r_arg[0];
 long a2 = op->r_arg[1];
 long a3 = op->r_arg[2];
 int found = 1;
 switch (((jit_opcode) (op->code & 0xfff8))) {
  case JIT_ADD: do { if ((op->code & 0x02)) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_ADD)) << 21) | ((0) << 20) | ((a2) << 16) | ((a1) << 12) | ((((arm32_encode_imm(a3)) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0)) << 25) | (((ARMOP_ADD)) << 21) | ((0) << 20) | ((a2) << 16) | ((a1) << 12) | ((((a3) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } } while (0); break;
  case JIT_ADDC: do { if ((op->code & 0x02)) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_ADD)) << 21) | ((1) << 20) | ((a2) << 16) | ((a1) << 12) | ((((arm32_encode_imm(a3)) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0)) << 25) | (((ARMOP_ADD)) << 21) | ((1) << 20) | ((a2) << 16) | ((a1) << 12) | ((((a3) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } } while (0); break;

  case JIT_ADDX: do { if ((op->code & 0x02)) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_ADC)) << 21) | ((0) << 20) | ((a2) << 16) | ((a1) << 12) | ((((arm32_encode_imm(a3)) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0)) << 25) | (((ARMOP_ADC)) << 21) | ((0) << 20) | ((a2) << 16) | ((a1) << 12) | ((((a3) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } } while (0); break;
  case JIT_SUB: do { if ((op->code & 0x02)) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_SUB)) << 21) | ((0) << 20) | ((a2) << 16) | ((a1) << 12) | ((((arm32_encode_imm(a3)) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0)) << 25) | (((ARMOP_SUB)) << 21) | ((0) << 20) | ((a2) << 16) | ((a1) << 12) | ((((a3) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } } while (0); break;
  case JIT_SUBC:
   do { if ((op->code & 0x02)) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_SUB)) << 21) | ((1) << 20) | ((a2) << 16) | ((a1) << 12) | ((((arm32_encode_imm(a3)) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0)) << 25) | (((ARMOP_SUB)) << 21) | ((1) << 20) | ((a2) << 16) | ((a1) << 12) | ((((a3) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } } while (0);
   if ((op->code & 0x02)) abort();



   do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0)) << 25) | (((ARMOP_CMP)) << 21) | ((1) << 20) | ((a3) << 16) | ((0) << 12) | ((((a2) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
   break;

  case JIT_SUBX:
   do { if ((op->code & 0x02)) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_SUB)) << 21) | ((0) << 20) | ((a2) << 16) | ((a1) << 12) | ((((arm32_encode_imm(a3)) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0)) << 25) | (((ARMOP_SUB)) << 21) | ((0) << 20) | ((a2) << 16) | ((a1) << 12) | ((((a3) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } } while (0);
   do { *((unsigned int *)(jit->ip)) = ((ARMCOND_CS) << 28) | (((1)) << 25) | (((ARMOP_SUB)) << 21) | ((0) << 20) | ((a1) << 16) | ((a1) << 12) | ((((1) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
   break;
  case JIT_RSB: do { if ((op->code & 0x02)) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_RSB)) << 21) | ((0) << 20) | ((a2) << 16) | ((a1) << 12) | ((((arm32_encode_imm(a3)) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0)) << 25) | (((ARMOP_RSB)) << 21) | ((0) << 20) | ((a2) << 16) | ((a1) << 12) | ((((a3) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } } while (0); break;
  case JIT_NEG: do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_RSB)) << 21) | ((0) << 20) | ((a2) << 16) | ((a1) << 12) | ((((arm32_encode_imm(((intptr_t)(0)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); break;
  case JIT_NOT: do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0)) << 25) | (((ARMOP_MVN)) << 21) | ((0) << 20) | ((0) << 16) | ((a1) << 12) | ((((a2) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); break;

  case JIT_OR: do { if ((op->code & 0x02)) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_ORR)) << 21) | ((0) << 20) | ((a2) << 16) | ((a1) << 12) | ((((arm32_encode_imm(a3)) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0)) << 25) | (((ARMOP_ORR)) << 21) | ((0) << 20) | ((a2) << 16) | ((a1) << 12) | ((((a3) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } } while (0); break;
  case JIT_AND: do { if ((op->code & 0x02)) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_AND)) << 21) | ((0) << 20) | ((a2) << 16) | ((a1) << 12) | ((((arm32_encode_imm(a3)) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0)) << 25) | (((ARMOP_AND)) << 21) | ((0) << 20) | ((a2) << 16) | ((a1) << 12) | ((((a3) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } } while (0); break;
  case JIT_XOR: do { if ((op->code & 0x02)) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_EOR)) << 21) | ((0) << 20) | ((a2) << 16) | ((a1) << 12) | ((((arm32_encode_imm(a3)) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0)) << 25) | (((ARMOP_EOR)) << 21) | ((0) << 20) | ((a2) << 16) | ((a1) << 12) | ((((a3) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } } while (0); break;
  case JIT_LSH: if ((op->code & 0x02)) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xd) << 21) | ((0) << 20) | ((a1) << 12) | ((ARMSHIFT_LSL) << 5) | ((0) << 4) | (((a3) & 0x1f) << 7) | ((a2) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
   else do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xd) << 21) | ((0) << 20) | ((a1) << 12) | ((ARMSHIFT_LSL) << 5) | ((1) << 4) | ((a3) << 8) | ((a2) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
   break;
  case JIT_RSH:
   if ((!(op->code & 0x04))) {
    if ((op->code & 0x02)) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xd) << 21) | ((0) << 20) | ((a1) << 12) | ((ARMSHIFT_ASR) << 5) | ((0) << 4) | (((a3) & 0x1f) << 7) | ((a2) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
    else do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xd) << 21) | ((0) << 20) | ((a1) << 12) | ((ARMSHIFT_ASR) << 5) | ((1) << 4) | ((a3) << 8) | ((a2) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
   } else {
    if ((op->code & 0x02)) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xd) << 21) | ((0) << 20) | ((a1) << 12) | ((ARMSHIFT_LSR) << 5) | ((0) << 4) | (((a3) & 0x1f) << 7) | ((a2) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
    else do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xd) << 21) | ((0) << 20) | ((a1) << 12) | ((ARMSHIFT_LSR) << 5) | ((1) << 4) | ((a3) << 8) | ((a2) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
   }
   break;

  case JIT_MUL: emit_mul(jit, op); break;

  case JIT_HMUL:
   if ((op->code & 0x02)) abort();
   do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0x75) << 20) | ((a1) << 16) | ((0xf) << 12) | ((a2) << 8) | ((0x1) << 4) | ((a3) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
   break;
  case JIT_DIV:
   if ((!(op->code & 0x04))) {
    if ((op->code & 0x02)) {
     do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xd) << 21) | ((0) << 20) | ((a1) << 12) | ((ARMSHIFT_ASR) << 5) | ((0) << 4) | (((ffs(a3) - 1) & 0x1f) << 7) | ((a2) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
     goto op_complete;
    } else do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0x71) << 20) | ((a1) << 16) | ((0xf) << 12) | ((a3) << 8) | ((0x1) << 4) | ((a2) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);;
   } else {
    if ((op->code & 0x02)) {
     do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xd) << 21) | ((0) << 20) | ((a1) << 12) | ((ARMSHIFT_LSR) << 5) | ((0) << 4) | (((ffs(a3) - 1) & 0x1f) << 7) | ((a2) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
     goto op_complete;
    } else do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0x73) << 20) | ((a1) << 16) | ((0xf) << 12) | ((a3) << 8) | ((0x1) << 4) | ((a2) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);;
   }
   break;
  case JIT_MOD:
   if ((!(op->code & 0x04))) {
    if ((op->code & 0x02)) {
     do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_AND)) << 21) | ((0) << 20) | ((a2) << 16) | ((a1) << 12) | ((((arm32_encode_imm(((intptr_t)((1 << (ffs(a3) - 1)) - 1)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
     goto op_complete;
    }
    do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0x71) << 20) | ((ARMREG_R12) << 16) | ((0xf) << 12) | ((a3) << 8) | ((0x1) << 4) | ((a2) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);;
    do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((ARMREG_R12) << 16) | ((a3) << 8) | ((0x9) << 4) | ((ARMREG_R12) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
    do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0)) << 25) | (((ARMOP_SUB)) << 21) | ((0) << 20) | ((a2) << 16) | ((a1) << 12) | ((((ARMREG_R12) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);;
   } else {
    do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0x73) << 20) | ((ARMREG_R12) << 16) | ((0xf) << 12) | ((a3) << 8) | ((0x1) << 4) | ((a2) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);;
    do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((ARMREG_R12) << 16) | ((a3) << 8) | ((0x9) << 4) | ((ARMREG_R12) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
    do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0)) << 25) | (((ARMOP_SUB)) << 21) | ((0) << 20) | ((a2) << 16) | ((a1) << 12) | ((((ARMREG_R12) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);;
   }
   break;

  case JIT_LT: emit_cond_op(jit, op, (!(op->code & 0x04)) ? ARMCOND_LT : ARMCOND_CC, (op->code & 0x02)); break;
  case JIT_LE: emit_cond_op(jit, op, (!(op->code & 0x04)) ? ARMCOND_LE : ARMCOND_LS, (op->code & 0x02)); break;
  case JIT_GT: emit_cond_op(jit, op, (!(op->code & 0x04)) ? ARMCOND_GT : ARMCOND_HI, (op->code & 0x02)); break;
  case JIT_GE: emit_cond_op(jit, op, (!(op->code & 0x04)) ? ARMCOND_GE : ARMCOND_CS, (op->code & 0x02)); break;
  case JIT_EQ: emit_cond_op(jit, op, ARMCOND_EQ, (op->code & 0x02)); break;
  case JIT_NE: emit_cond_op(jit, op, ARMCOND_NE, (op->code & 0x02)); break;

  case JIT_BLT: emit_branch_op(jit, op, (!(op->code & 0x04)) ? ARMCOND_LT : ARMCOND_CC, (op->code & 0x02)); break;
  case JIT_BGT: emit_branch_op(jit, op, (!(op->code & 0x04)) ? ARMCOND_GT : ARMCOND_HI, (op->code & 0x02)); break;
  case JIT_BLE: emit_branch_op(jit, op, (!(op->code & 0x04)) ? ARMCOND_LE : ARMCOND_LS, (op->code & 0x02)); break;
  case JIT_BGE: emit_branch_op(jit, op, (!(op->code & 0x04)) ? ARMCOND_GE : ARMCOND_CS, (op->code & 0x02)); break;
  case JIT_BEQ: emit_branch_op(jit, op, ARMCOND_EQ, (op->code & 0x02)); break;
  case JIT_BNE: emit_branch_op(jit, op, ARMCOND_NE, (op->code & 0x02)); break;
  case JIT_BMS: emit_branch_mask_op(jit, op, ARMCOND_NE, (op->code & 0x02)); break;
  case JIT_BMC: emit_branch_mask_op(jit, op, ARMCOND_EQ, (op->code & 0x02)); break;

  case JIT_BOADD: emit_op_and_overflow_branch(jit, op, JIT_ADD, (op->code & 0x02), 0); break;
  case JIT_BOSUB: emit_op_and_overflow_branch(jit, op, JIT_SUB, (op->code & 0x02), 0); break;
  case JIT_BNOADD: emit_op_and_overflow_branch(jit, op, JIT_ADD, (op->code & 0x02), 1); break;
  case JIT_BNOSUB: emit_op_and_overflow_branch(jit, op, JIT_SUB, (op->code & 0x02), 1); break;

  case JIT_FBLT: emit_fpbranch_op(jit, op, ARMCOND_LT, a2, a3); break;
  case JIT_FBGT: emit_fpbranch_op(jit, op, ARMCOND_GT, a2, a3); break;
  case JIT_FBLE: emit_fpbranch_op(jit, op, ARMCOND_LE, a2, a3); break;
  case JIT_FBGE: emit_fpbranch_op(jit, op, ARMCOND_GE, a2, a3); break;
  case JIT_FBEQ: emit_fpbranch_op(jit, op, ARMCOND_EQ, a2, a3); break;
  case JIT_FBNE: emit_fpbranch_op(jit, op, ARMCOND_NE, a2, a3); break;

  case JIT_CALL: emit_funcall(jit, op, (op->code & 0x02)); break;

  case JIT_PATCH: do {
    struct jit_op *target = (struct jit_op *) a1;
    switch (((jit_opcode) (target->code & 0xfff8))) {
     case JIT_REF_CODE:
     case JIT_REF_DATA:
      target->arg[1] = ((jit_value)jit->ip - (jit_value)jit->buf);
      break;
     case JIT_DATA_REF_CODE:
     case JIT_DATA_REF_DATA:
      target->arg[0] = ((jit_value)jit->ip - (jit_value)jit->buf);
      break;
     default: {
      long pa = ((struct jit_op *)a1)->patch_addr;
      do { long __p = ((long)(jit->ip)) >> 2; long __t = ((long)(jit->buf + pa)) >> 2; long __location = (__p - __t - 2); *(int *)(jit->buf + pa) &= ~(0xffffff); *(int *)(jit->buf + pa) |= (0xffffff & __location); } while (0);
     }
    }
   } while (0);
   break;

  case JIT_JMP:
   op->patch_addr = ((jit_value)jit->ip - (jit_value)jit->buf);
   if (op->code & 0x01) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x12fff1) << 4) | ((a1) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
   else do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x5) << 25) | ((0) << 24) | ((((!jit_is_label(jit, (void *)(op->r_arg[0])) ? (op->r_arg[0]) : ((((long)jit->buf + (long)((jit_label *)(op->r_arg[0]))->pos - (long)jit->ip)) / 4)) - 2) & 0xffffff) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
   break;

  case JIT_RET:
   if (!(op->code & 0x02) && (a1 != ARMREG_R0)) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0)) << 25) | (((ARMOP_MOV)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R0) << 12) | ((((a1) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
   if ((op->code & 0x02)) do { int __imm = ((intptr_t)(a1)); if (arm32_imm_rotate(((intptr_t)(__imm))) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MOV)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R0) << 12) | ((((arm32_encode_imm(((intptr_t)(__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else if (arm32_imm_rotate(~__imm) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MVN)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R0) << 12) | ((((arm32_encode_imm(((intptr_t)(~__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else { do { unsigned __val = __imm & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x30) << 20) | ((ARMREG_R0) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); do { unsigned __val = __imm >> 16 & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x34) << 20) | ((ARMREG_R0) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } } while (0);
   emit_epilog(jit);
   break;
  case JIT_PUTARG: funcall_put_arg(jit, op); break;
  case JIT_FPUTARG: funcall_fput_arg(jit, op); break;
  case JIT_GETARG: emit_get_arg(jit, op); break;

  case JIT_MSG:
    do { if (0x4fff == 0) {} else if (((((0x4fff) & (((0x4fff) - 1))) == 0) && ((0x4fff) != (1 << 31)))) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0x52d) << 16) | ((ffs(0x4fff) - 1) << 12) | ((0x4) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); else do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0x92d) << 16) | ((0x4fff) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0);
    if (!(op->code & 0x02)) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0)) << 25) | (((ARMOP_MOV)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R1) << 12) | ((((op->r_arg[1]) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
    do { int __imm = ((intptr_t)(op->r_arg[0])); if (arm32_imm_rotate(((intptr_t)(__imm))) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MOV)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R0) << 12) | ((((arm32_encode_imm(((intptr_t)(__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else if (arm32_imm_rotate(~__imm) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MVN)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R0) << 12) | ((((arm32_encode_imm(((intptr_t)(~__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else { do { unsigned __val = __imm & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x30) << 20) | ((ARMREG_R0) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); do { unsigned __val = __imm >> 16 & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x34) << 20) | ((ARMREG_R0) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } } while (0);
    do { int __imm = ((intptr_t)(jit_proc_value((void (*)(void)) (printf)))); if (arm32_imm_rotate(((intptr_t)(__imm))) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MOV)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R2) << 12) | ((((arm32_encode_imm(((intptr_t)(__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else if (arm32_imm_rotate(~__imm) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MVN)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R2) << 12) | ((((arm32_encode_imm(((intptr_t)(~__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else { do { unsigned __val = __imm & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x30) << 20) | ((ARMREG_R2) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); do { unsigned __val = __imm >> 16 & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x34) << 20) | ((ARMREG_R2) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } } while (0);
    do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0x12fff3) << 4) | ((ARMREG_R2) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
    do { if (0x4fff == 0) {} else if (((((0x4fff) & (((0x4fff) - 1))) == 0) && ((0x4fff) != (1 << 31)))) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0x49d) << 16) | ((ffs(0x4fff) - 1) << 12) | ((0x4) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); else do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0x8bd) << 16) | ((0x4fff) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0);
    break;
  case JIT_TRACE: emit_trace_op(jit, op); break;

  case JIT_ALLOCA: break;
  case JIT_CODE_ALIGN: {
    int count = op->arg[0];
    assert(!(count % 4));
    while ((unsigned long)jit->ip % count) {
     if ((unsigned long)jit->ip % 4) {
      *jit->ip = 0;
      jit->ip++;
     }
            else do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (0x320f000); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
    }
   }
   break;


  case JIT_REF_CODE:
  case JIT_REF_DATA:
   op->patch_addr = ((jit_value)jit->ip - (jit_value)jit->buf);
   do { int __imm = ((intptr_t)(0xdeadbeef)); if (arm32_imm_rotate(((intptr_t)(__imm))) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MOV)) << 21) | ((0) << 20) | ((0) << 16) | ((a1) << 12) | ((((arm32_encode_imm(((intptr_t)(__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else if (arm32_imm_rotate(~__imm) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MVN)) << 21) | ((0) << 20) | ((0) << 16) | ((a1) << 12) | ((((arm32_encode_imm(((intptr_t)(~__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else { do { unsigned __val = __imm & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x30) << 20) | ((a1) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); do { unsigned __val = __imm >> 16 & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x34) << 20) | ((a1) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } } while (0);
   break;
  case JIT_MEMCPY: emit_memcpy(jit, op, a1, a2, a3); break;
  case JIT_MEMSET: emit_memset(jit, op, a1, a2, a3, op->arg_size); break;
  case JIT_TRANSFER: emit_transfer_init(jit, op, a1, a2, a3, op->arg_size); break;
  case JIT_TRANSFER_CPY: emit_transfer_loop(jit, (jit_op *)a1); break;
  case JIT_TRANSFER_XOR: emit_transfer_op(jit, op, ARMOP_EOR); break;
  case JIT_TRANSFER_AND: emit_transfer_op(jit, op, ARMOP_AND); break;
  case JIT_TRANSFER_OR: emit_transfer_op(jit, op, ARMOP_ORR); break;
  case JIT_TRANSFER_ADD: emit_transfer_op(jit, op, ARMOP_ADD); break;
  case JIT_TRANSFER_SUB: emit_transfer_op(jit, op, ARMOP_SUB); break;



  case JIT_DATA_BYTE: break;
  case JIT_FULL_SPILL: break;

  default: found = 0;
 }
op_complete:
 if (found) return;

 switch (op->code) {
  case (JIT_MOV | 0x01): if (a1 != a2) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0)) << 25) | (((ARMOP_MOV)) << 21) | ((0) << 20) | ((0) << 16) | ((a1) << 12) | ((((a2) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); break;
  case (JIT_MOV | 0x02): do { int __imm = ((intptr_t)(a2)); if (arm32_imm_rotate(((intptr_t)(__imm))) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MOV)) << 21) | ((0) << 20) | ((0) << 16) | ((a1) << 12) | ((((arm32_encode_imm(((intptr_t)(__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else if (arm32_imm_rotate(~__imm) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MVN)) << 21) | ((0) << 20) | ((0) << 16) | ((a1) << 12) | ((((arm32_encode_imm(((intptr_t)(~__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else { do { unsigned __val = __imm & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x30) << 20) | ((a1) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); do { unsigned __val = __imm >> 16 & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x34) << 20) | ((a1) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } } while (0); break;
  case JIT_PREPARE: funcall_prepare(jit, op, a1 + a2); break;
  case JIT_PROLOG: emit_prolog(jit, op); break;
  case JIT_RETVAL: break;
  case JIT_DECL_ARG: break;

  case JIT_LABEL: ((jit_label *)a1)->pos = ((jit_value)jit->ip - (jit_value)jit->buf); break;

  case (JIT_LD | 0x01 | 0x00):
    switch (op->arg_size) {
     case 1: do { int __val = 0; int __absval = (__val < 0 ? -__val : __val); do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((ARMCOND_AL) << 28) | ((0x1) << 24) | ((__val >= 0) << 23) | ((0x1) << 22) | ((0x0) << 21) | ((1) << 20) | ((a2) << 16) | ((a1) << 12) | (((__absval >> 4) & 0xf) << 8) | ((0x1) << 7) | ((1) << 6) | ((0) << 5) | ((0x1) << 4) | ((__absval & 0xf) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); break;
     case 2: do { int __val = 0; int __absval = (__val < 0 ? -__val : __val); do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((ARMCOND_AL) << 28) | ((0x1) << 24) | ((__val >= 0) << 23) | ((0x1) << 22) | ((0x0) << 21) | ((1) << 20) | ((a2) << 16) | ((a1) << 12) | (((__absval >> 4) & 0xf) << 8) | ((0x1) << 7) | ((1) << 6) | ((1) << 5) | ((0x1) << 4) | ((__absval & 0xf) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); break;
     case 4: do { unsigned int op = ((ARMCOND_AL) << 28) | ((0x1) << 26) | ((0) << 25) | ((0x1) << 24) | ((0) << 22) | ((0x0) << 21) | ((1) << 20) | ((a2) << 16) | ((a1) << 12); if (0) { op |= ((0x1) << 23); op |= ((0) << 0); } else { int _imm = ((intptr_t)(0)); if (arm32_imm_rotate(_imm) >= 0) { op |= ((0x1) << 23); op |= arm32_encode_imm(0); } else if (arm32_imm_rotate(-_imm) >= 0) { op |= ((0x0) << 23); op |= arm32_encode_imm(-_imm); } else { abort(); } } do { *((unsigned int *)(jit->ip)) = op; (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); break;
     default: abort();
    } break;

  case (JIT_LD | 0x01 | 0x04):
    switch (op->arg_size) {
     case 1: do { unsigned int op = ((ARMCOND_AL) << 28) | ((0x1) << 26) | ((0) << 25) | ((0x1) << 24) | ((1) << 22) | ((0x0) << 21) | ((1) << 20) | ((a2) << 16) | ((a1) << 12); if (0) { op |= ((0x1) << 23); op |= ((0) << 0); } else { int _imm = ((intptr_t)(0)); if (arm32_imm_rotate(_imm) >= 0) { op |= ((0x1) << 23); op |= arm32_encode_imm(0); } else if (arm32_imm_rotate(-_imm) >= 0) { op |= ((0x0) << 23); op |= arm32_encode_imm(-_imm); } else { abort(); } } do { *((unsigned int *)(jit->ip)) = op; (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); break;
     case 2: do { int __val = 0; int __absval = (__val < 0 ? -__val : __val); do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((ARMCOND_AL) << 28) | ((0x1) << 24) | ((__val >= 0) << 23) | ((0x1) << 22) | ((0x0) << 21) | ((1) << 20) | ((a2) << 16) | ((a1) << 12) | (((__absval >> 4) & 0xf) << 8) | ((0x1) << 7) | ((0) << 6) | ((1) << 5) | ((0x1) << 4) | ((__absval & 0xf) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); break;
     case 4: do { unsigned int op = ((ARMCOND_AL) << 28) | ((0x1) << 26) | ((0) << 25) | ((0x1) << 24) | ((0) << 22) | ((0x0) << 21) | ((1) << 20) | ((a2) << 16) | ((a1) << 12); if (0) { op |= ((0x1) << 23); op |= ((0) << 0); } else { int _imm = ((intptr_t)(0)); if (arm32_imm_rotate(_imm) >= 0) { op |= ((0x1) << 23); op |= arm32_encode_imm(0); } else if (arm32_imm_rotate(-_imm) >= 0) { op |= ((0x0) << 23); op |= arm32_encode_imm(-_imm); } else { abort(); } } do { *((unsigned int *)(jit->ip)) = op; (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); break;
     default: abort();
    } break;
  case (JIT_LD | 0x02 | 0x00): abort(); break;

  case (JIT_LD | 0x02 | 0x04): abort(); break;


  case (JIT_LDX | 0x02 | 0x00):
    switch (op->arg_size) {
     case 1: do { int __val = a3; int __absval = (__val < 0 ? -__val : __val); do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((ARMCOND_AL) << 28) | ((0x1) << 24) | ((__val >= 0) << 23) | ((0x1) << 22) | ((0x0) << 21) | ((1) << 20) | ((a2) << 16) | ((a1) << 12) | (((__absval >> 4) & 0xf) << 8) | ((0x1) << 7) | ((1) << 6) | ((0) << 5) | ((0x1) << 4) | ((__absval & 0xf) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); break;
     case 2: do { int __val = a3; int __absval = (__val < 0 ? -__val : __val); do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((ARMCOND_AL) << 28) | ((0x1) << 24) | ((__val >= 0) << 23) | ((0x1) << 22) | ((0x0) << 21) | ((1) << 20) | ((a2) << 16) | ((a1) << 12) | (((__absval >> 4) & 0xf) << 8) | ((0x1) << 7) | ((1) << 6) | ((1) << 5) | ((0x1) << 4) | ((__absval & 0xf) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); break;
     case 4: do { unsigned int op = ((ARMCOND_AL) << 28) | ((0x1) << 26) | ((0) << 25) | ((0x1) << 24) | ((0) << 22) | ((0x0) << 21) | ((1) << 20) | ((a2) << 16) | ((a1) << 12); if (0) { op |= ((0x1) << 23); op |= ((a3) << 0); } else { int _imm = ((intptr_t)(a3)); if (arm32_imm_rotate(_imm) >= 0) { op |= ((0x1) << 23); op |= arm32_encode_imm(a3); } else if (arm32_imm_rotate(-_imm) >= 0) { op |= ((0x0) << 23); op |= arm32_encode_imm(-_imm); } else { abort(); } } do { *((unsigned int *)(jit->ip)) = op; (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); break;
     default: abort();
    } break;

  case (JIT_LDX | 0x02 | 0x04):
    switch (op->arg_size) {
     case 1: do { unsigned int op = ((ARMCOND_AL) << 28) | ((0x1) << 26) | ((0) << 25) | ((0x1) << 24) | ((1) << 22) | ((0x0) << 21) | ((1) << 20) | ((a2) << 16) | ((a1) << 12); if (0) { op |= ((0x1) << 23); op |= ((a3) << 0); } else { int _imm = ((intptr_t)(a3)); if (arm32_imm_rotate(_imm) >= 0) { op |= ((0x1) << 23); op |= arm32_encode_imm(a3); } else if (arm32_imm_rotate(-_imm) >= 0) { op |= ((0x0) << 23); op |= arm32_encode_imm(-_imm); } else { abort(); } } do { *((unsigned int *)(jit->ip)) = op; (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); break;
     case 2: do { int __val = a3; int __absval = (__val < 0 ? -__val : __val); do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((ARMCOND_AL) << 28) | ((0x1) << 24) | ((__val >= 0) << 23) | ((0x1) << 22) | ((0x0) << 21) | ((1) << 20) | ((a2) << 16) | ((a1) << 12) | (((__absval >> 4) & 0xf) << 8) | ((0x1) << 7) | ((0) << 6) | ((1) << 5) | ((0x1) << 4) | ((__absval & 0xf) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); break;
     case 4: do { unsigned int op = ((ARMCOND_AL) << 28) | ((0x1) << 26) | ((0) << 25) | ((0x1) << 24) | ((0) << 22) | ((0x0) << 21) | ((1) << 20) | ((a2) << 16) | ((a1) << 12); if (0) { op |= ((0x1) << 23); op |= ((a3) << 0); } else { int _imm = ((intptr_t)(a3)); if (arm32_imm_rotate(_imm) >= 0) { op |= ((0x1) << 23); op |= arm32_encode_imm(a3); } else if (arm32_imm_rotate(-_imm) >= 0) { op |= ((0x0) << 23); op |= arm32_encode_imm(-_imm); } else { abort(); } } do { *((unsigned int *)(jit->ip)) = op; (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); break;
     default: abort();
    } break;

  case (JIT_LDX | 0x01 | 0x00):
    switch (op->arg_size) {
     case 1: do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x1) << 24) | ((0x1) << 23) | ((0) << 22) | ((0) << 21) | ((1) << 20) | ((a2) << 16) | ((a1) << 12) | ((0x1) << 7) | ((1) << 6) | ((0) << 5) | ((0x1) << 4) | ((a3) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); break;
     case 2: do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x1) << 24) | ((0x1) << 23) | ((0) << 22) | ((0) << 21) | ((1) << 20) | ((a2) << 16) | ((a1) << 12) | ((0x1) << 7) | ((1) << 6) | ((1) << 5) | ((0x1) << 4) | ((a3) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); break;
     case 4: do { unsigned int op = ((ARMCOND_AL) << 28) | ((0x1) << 26) | ((1) << 25) | ((0x1) << 24) | ((0) << 22) | ((0x0) << 21) | ((1) << 20) | ((a2) << 16) | ((a1) << 12); if (1) { op |= ((0x1) << 23); op |= ((a3) << 0); } else { int _imm = ((intptr_t)(a3)); if (arm32_imm_rotate(_imm) >= 0) { op |= ((0x1) << 23); op |= arm32_encode_imm(a3); } else if (arm32_imm_rotate(-_imm) >= 0) { op |= ((0x0) << 23); op |= arm32_encode_imm(-_imm); } else { abort(); } } do { *((unsigned int *)(jit->ip)) = op; (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); break;
     default: abort();
    } break;

  case (JIT_LDX | 0x01 | 0x04):
    switch (op->arg_size) {
     case 1: do { unsigned int op = ((ARMCOND_AL) << 28) | ((0x1) << 26) | ((1) << 25) | ((0x1) << 24) | ((1) << 22) | ((0x0) << 21) | ((1) << 20) | ((a2) << 16) | ((a1) << 12); if (1) { op |= ((0x1) << 23); op |= ((a3) << 0); } else { int _imm = ((intptr_t)(a3)); if (arm32_imm_rotate(_imm) >= 0) { op |= ((0x1) << 23); op |= arm32_encode_imm(a3); } else if (arm32_imm_rotate(-_imm) >= 0) { op |= ((0x0) << 23); op |= arm32_encode_imm(-_imm); } else { abort(); } } do { *((unsigned int *)(jit->ip)) = op; (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); break;
     case 2: do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x1) << 24) | ((0x1) << 23) | ((0) << 22) | ((0) << 21) | ((1) << 20) | ((a2) << 16) | ((a1) << 12) | ((0x1) << 7) | ((0) << 6) | ((1) << 5) | ((0x1) << 4) | ((a3) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); break;
     case 4: do { unsigned int op = ((ARMCOND_AL) << 28) | ((0x1) << 26) | ((1) << 25) | ((0x1) << 24) | ((0) << 22) | ((0x0) << 21) | ((1) << 20) | ((a2) << 16) | ((a1) << 12); if (1) { op |= ((0x1) << 23); op |= ((a3) << 0); } else { int _imm = ((intptr_t)(a3)); if (arm32_imm_rotate(_imm) >= 0) { op |= ((0x1) << 23); op |= arm32_encode_imm(a3); } else if (arm32_imm_rotate(-_imm) >= 0) { op |= ((0x0) << 23); op |= arm32_encode_imm(-_imm); } else { abort(); } } do { *((unsigned int *)(jit->ip)) = op; (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); break;
     default: abort();
    } break;
  case (JIT_ST | 0x01):
    switch (op->arg_size) {
     case 1: do { unsigned int op = ((ARMCOND_AL) << 28) | ((0x1) << 26) | ((0) << 25) | ((0x1) << 24) | ((1) << 22) | ((0x0) << 21) | ((0) << 20) | ((a1) << 16) | ((a2) << 12); if (0) { op |= ((0x1) << 23); op |= ((0) << 0); } else { int _imm = ((intptr_t)(0)); if (arm32_imm_rotate(_imm) >= 0) { op |= ((0x1) << 23); op |= arm32_encode_imm(0); } else if (arm32_imm_rotate(-_imm) >= 0) { op |= ((0x0) << 23); op |= arm32_encode_imm(-_imm); } else { abort(); } } do { *((unsigned int *)(jit->ip)) = op; (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); break;
     case 2: do { int __val = 0; int __absval = (__val < 0 ? -__val : __val); do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((ARMCOND_AL) << 28) | ((0x1) << 24) | ((__val >= 0) << 23) | ((0x1) << 22) | ((0x0) << 21) | ((0) << 20) | ((a1) << 16) | ((a2) << 12) | (((__absval >> 4) & 0xf) << 8) | ((0x1) << 7) | ((0) << 6) | ((1) << 5) | ((0x1) << 4) | ((__absval & 0xf) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); break;
     case 4: do { unsigned int op = ((ARMCOND_AL) << 28) | ((0x1) << 26) | ((0) << 25) | ((0x1) << 24) | ((0) << 22) | ((0x0) << 21) | ((0) << 20) | ((a1) << 16) | ((a2) << 12); if (0) { op |= ((0x1) << 23); op |= ((0) << 0); } else { int _imm = ((intptr_t)(0)); if (arm32_imm_rotate(_imm) >= 0) { op |= ((0x1) << 23); op |= arm32_encode_imm(0); } else if (arm32_imm_rotate(-_imm) >= 0) { op |= ((0x0) << 23); op |= arm32_encode_imm(-_imm); } else { abort(); } } do { *((unsigned int *)(jit->ip)) = op; (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); break;
     default: abort();
    } break;

  case (JIT_ST | 0x02): abort(); break;

  case (JIT_STX | 0x01):
   switch (op->arg_size) {
    case 1: do { unsigned int op = ((ARMCOND_AL) << 28) | ((0x1) << 26) | ((1) << 25) | ((0x1) << 24) | ((1) << 22) | ((0x0) << 21) | ((0) << 20) | ((a2) << 16) | ((a3) << 12); if (1) { op |= ((0x1) << 23); op |= ((a1) << 0); } else { int _imm = ((intptr_t)(a1)); if (arm32_imm_rotate(_imm) >= 0) { op |= ((0x1) << 23); op |= arm32_encode_imm(a1); } else if (arm32_imm_rotate(-_imm) >= 0) { op |= ((0x0) << 23); op |= arm32_encode_imm(-_imm); } else { abort(); } } do { *((unsigned int *)(jit->ip)) = op; (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); break;
    case 2: do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x1) << 24) | ((0x1) << 23) | ((0) << 22) | ((0) << 21) | ((0) << 20) | ((a2) << 16) | ((a3) << 12) | ((0x1) << 7) | ((0) << 6) | ((1) << 5) | ((0x1) << 4) | ((a1) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); break;
    case 4: do { unsigned int op = ((ARMCOND_AL) << 28) | ((0x1) << 26) | ((1) << 25) | ((0x1) << 24) | ((0) << 22) | ((0x0) << 21) | ((0) << 20) | ((a2) << 16) | ((a3) << 12); if (1) { op |= ((0x1) << 23); op |= ((a1) << 0); } else { int _imm = ((intptr_t)(a1)); if (arm32_imm_rotate(_imm) >= 0) { op |= ((0x1) << 23); op |= arm32_encode_imm(a1); } else if (arm32_imm_rotate(-_imm) >= 0) { op |= ((0x0) << 23); op |= arm32_encode_imm(-_imm); } else { abort(); } } do { *((unsigned int *)(jit->ip)) = op; (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); break;
    default: abort();
   } break;

  case (JIT_STX | 0x02):
   switch (op->arg_size) {
    case 1: do { unsigned int op = ((ARMCOND_AL) << 28) | ((0x1) << 26) | ((0) << 25) | ((0x1) << 24) | ((1) << 22) | ((0x0) << 21) | ((0) << 20) | ((a2) << 16) | ((a3) << 12); if (0) { op |= ((0x1) << 23); op |= ((a1) << 0); } else { int _imm = ((intptr_t)(a1)); if (arm32_imm_rotate(_imm) >= 0) { op |= ((0x1) << 23); op |= arm32_encode_imm(a1); } else if (arm32_imm_rotate(-_imm) >= 0) { op |= ((0x0) << 23); op |= arm32_encode_imm(-_imm); } else { abort(); } } do { *((unsigned int *)(jit->ip)) = op; (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); break;
    case 2: do { int __val = a1; int __absval = (__val < 0 ? -__val : __val); do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((ARMCOND_AL) << 28) | ((0x1) << 24) | ((__val >= 0) << 23) | ((0x1) << 22) | ((0x0) << 21) | ((0) << 20) | ((a2) << 16) | ((a3) << 12) | (((__absval >> 4) & 0xf) << 8) | ((0x1) << 7) | ((0) << 6) | ((1) << 5) | ((0x1) << 4) | ((__absval & 0xf) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); break;
    case 4: do { unsigned int op = ((ARMCOND_AL) << 28) | ((0x1) << 26) | ((0) << 25) | ((0x1) << 24) | ((0) << 22) | ((0x0) << 21) | ((0) << 20) | ((a2) << 16) | ((a3) << 12); if (0) { op |= ((0x1) << 23); op |= ((a1) << 0); } else { int _imm = ((intptr_t)(a1)); if (arm32_imm_rotate(_imm) >= 0) { op |= ((0x1) << 23); op |= arm32_encode_imm(a1); } else if (arm32_imm_rotate(-_imm) >= 0) { op |= ((0x0) << 23); op |= arm32_encode_imm(-_imm); } else { abort(); } } do { *((unsigned int *)(jit->ip)) = op; (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); break;
    default: abort();
   } break;




  case (JIT_FMOV | 0x01):
   do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xeb0) << 16) | ((a1) << 12) | ((0xb4) << 4) | ((a2) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
   break;

  case (JIT_FMOV | 0x02):
   do { int __imm = ((intptr_t)((long)&op->flt_imm)); if (arm32_imm_rotate(((intptr_t)(__imm))) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MOV)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R12) << 12) | ((((arm32_encode_imm(((intptr_t)(__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else if (arm32_imm_rotate(~__imm) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MVN)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R12) << 12) | ((((arm32_encode_imm(((intptr_t)(~__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else { do { unsigned __val = __imm & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x30) << 20) | ((ARMREG_R12) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); do { unsigned __val = __imm >> 16 & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x34) << 20) | ((ARMREG_R12) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } } while (0);
   do { int __val = (0) / 4; int __absval = (__val < 0 ? -__val : __val); do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((ARMCOND_AL) << 28) | ((0xd) << 24) | (((__val >= 0) & 0x1) << 23) | ((0) << 22) | (((1) & 0x1) << 20) | (((ARMREG_R12) & 0xf) << 16) | (((a1) & 0xf) << 12) | ((0x5) << 9) | (((((sizeof(double)) == sizeof(float)) ? 0x0: 0x1)) << 8) | ((__absval & 0xff) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); if (1 && (sizeof(double)) == sizeof(float)) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xeb7) << 16) | ((a1) << 12) | ((0x5) << 9) | ((0) << 8) | ((0xc) << 4) | ((a1) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0);
   break;

  case (JIT_FADD | 0x01): do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xe) << 24) | ((0x3) << 20) | ((a2) << 16) | ((a1) << 12) | ((0xb) << 8) | ((0x0) << 4) | ((a3) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); break;
  case (JIT_FSUB | 0x01): do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xe) << 24) | ((0x3) << 20) | ((a2) << 16) | ((a1) << 12) | ((0xb) << 8) | ((0x4) << 4) | ((a3) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); break;
  case (JIT_FRSB | 0x01): do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xe) << 24) | ((0x3) << 20) | ((a3) << 16) | ((a1) << 12) | ((0xb) << 8) | ((0x4) << 4) | ((a2) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); break;
  case (JIT_FMUL | 0x01): do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xe) << 24) | ((0x2) << 20) | ((a2) << 16) | ((a1) << 12) | ((0xb) << 8) | ((0x0) << 4) | ((a3) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); break;
  case (JIT_FDIV | 0x01): do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xe) << 24) | ((0x8) << 20) | ((a2) << 16) | ((a1) << 12) | ((0xb) << 8) | ((0x0) << 4) | ((a3) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); break;
  case (JIT_FNEG | 0x01): do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xeb1) << 16) | ((a1) << 12) | ((0xb4) << 4) | ((a2) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); break;

  case (JIT_EXT | 0x01):
   do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xe0) << 20) | ((a1) << 16) | ((a2) << 12) | ((0xb10) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
   do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xeb8) << 16) | ((a1) << 12) | ((0xb) << 8) | ((0xc) << 4) | ((a1) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
   break;

  case (JIT_TRUNC | 0x01):
  case (JIT_FLOOR | 0x01):
  case (JIT_CEIL | 0x01): emit_round(jit, op, a1, a2); break;
  case (JIT_ROUND | 0x01): emit_round_nearest(jit, op, a1, a2); break;
  case (JIT_FRET | 0x01):
   if (op->arg_size == sizeof(float)) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xeb7) << 16) | ((ARMREG_D0) << 12) | ((0x5) << 9) | ((1) << 8) | ((0xc) << 4) | ((a1) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
   else do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xeb0) << 16) | ((ARMREG_D0) << 12) | ((0xb4) << 4) | ((a1) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
   emit_epilog(jit);
   break;

  case (JIT_FRETVAL):

   if (op->arg_size == sizeof(float)) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xeb7) << 16) | ((ARMREG_D0) << 12) | ((0x5) << 9) | ((1) << 8) | ((0xc) << 4) | ((ARMREG_D0) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
   break;

  case (JIT_FLD | 0x01):
   do { int __val = (0) / 4; int __absval = (__val < 0 ? -__val : __val); do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((ARMCOND_AL) << 28) | ((0xd) << 24) | (((__val >= 0) & 0x1) << 23) | ((0) << 22) | (((1) & 0x1) << 20) | (((a2) & 0xf) << 16) | (((a1) & 0xf) << 12) | ((0x5) << 9) | (((((op->arg_size) == sizeof(float)) ? 0x0: 0x1)) << 8) | ((__absval & 0xff) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); if (1 && (op->arg_size) == sizeof(float)) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xeb7) << 16) | ((a1) << 12) | ((0x5) << 9) | ((0) << 8) | ((0xc) << 4) | ((a1) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0);
   break;

  case (JIT_FLD | 0x02):
   do { int __imm = ((intptr_t)(op->arg[1])); if (arm32_imm_rotate(((intptr_t)(__imm))) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MOV)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R12) << 12) | ((((arm32_encode_imm(((intptr_t)(__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else if (arm32_imm_rotate(~__imm) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MVN)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R12) << 12) | ((((arm32_encode_imm(((intptr_t)(~__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else { do { unsigned __val = __imm & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x30) << 20) | ((ARMREG_R12) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); do { unsigned __val = __imm >> 16 & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x34) << 20) | ((ARMREG_R12) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } } while (0);
   do { int __val = (0) / 4; int __absval = (__val < 0 ? -__val : __val); do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((ARMCOND_AL) << 28) | ((0xd) << 24) | (((__val >= 0) & 0x1) << 23) | ((0) << 22) | (((1) & 0x1) << 20) | (((ARMREG_R12) & 0xf) << 16) | (((a1) & 0xf) << 12) | ((0x5) << 9) | (((((op->arg_size) == sizeof(float)) ? 0x0: 0x1)) << 8) | ((__absval & 0xff) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); if (1 && (op->arg_size) == sizeof(float)) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xeb7) << 16) | ((a1) << 12) | ((0x5) << 9) | ((0) << 8) | ((0xc) << 4) | ((a1) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0);
   break;

  case (JIT_FLDX | 0x01):
   do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0)) << 25) | (((ARMOP_ADD)) << 21) | ((0) << 20) | ((a2) << 16) | ((ARMREG_R12) << 12) | ((((a3) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
   do { int __val = (0) / 4; int __absval = (__val < 0 ? -__val : __val); do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((ARMCOND_AL) << 28) | ((0xd) << 24) | (((__val >= 0) & 0x1) << 23) | ((0) << 22) | (((1) & 0x1) << 20) | (((ARMREG_R12) & 0xf) << 16) | (((a1) & 0xf) << 12) | ((0x5) << 9) | (((((op->arg_size) == sizeof(float)) ? 0x0: 0x1)) << 8) | ((__absval & 0xff) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); if (1 && (op->arg_size) == sizeof(float)) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xeb7) << 16) | ((a1) << 12) | ((0x5) << 9) | ((0) << 8) | ((0xc) << 4) | ((a1) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0);
   break;

  case (JIT_FLDX | 0x02):
   if ((a3 >= -255 * 4) && (a3 <= 255 * 4)) do { int __val = (a3) / 4; int __absval = (__val < 0 ? -__val : __val); do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((ARMCOND_AL) << 28) | ((0xd) << 24) | (((__val >= 0) & 0x1) << 23) | ((0) << 22) | (((1) & 0x1) << 20) | (((a2) & 0xf) << 16) | (((a1) & 0xf) << 12) | ((0x5) << 9) | (((((op->arg_size) == sizeof(float)) ? 0x0: 0x1)) << 8) | ((__absval & 0xff) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); if (1 && (op->arg_size) == sizeof(float)) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xeb7) << 16) | ((a1) << 12) | ((0x5) << 9) | ((0) << 8) | ((0xc) << 4) | ((a1) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0);
   else {
    do { int __imm = ((intptr_t)(a3)); if (arm32_imm_rotate(((intptr_t)(__imm))) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MOV)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R12) << 12) | ((((arm32_encode_imm(((intptr_t)(__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else if (arm32_imm_rotate(~__imm) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MVN)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R12) << 12) | ((((arm32_encode_imm(((intptr_t)(~__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else { do { unsigned __val = __imm & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x30) << 20) | ((ARMREG_R12) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); do { unsigned __val = __imm >> 16 & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x34) << 20) | ((ARMREG_R12) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } } while (0);
    do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0)) << 25) | (((ARMOP_ADD)) << 21) | ((0) << 20) | ((ARMREG_R12) << 16) | ((ARMREG_R12) << 12) | ((((a2) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
    do { int __val = (0) / 4; int __absval = (__val < 0 ? -__val : __val); do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((ARMCOND_AL) << 28) | ((0xd) << 24) | (((__val >= 0) & 0x1) << 23) | ((0) << 22) | (((1) & 0x1) << 20) | (((ARMREG_R12) & 0xf) << 16) | (((a1) & 0xf) << 12) | ((0x5) << 9) | (((((op->arg_size) == sizeof(float)) ? 0x0: 0x1)) << 8) | ((__absval & 0xff) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); if (1 && (op->arg_size) == sizeof(float)) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xeb7) << 16) | ((a1) << 12) | ((0x5) << 9) | ((0) << 8) | ((0xc) << 4) | ((a1) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0);
   }
   break;

  case (JIT_FST | 0x01):
   if (op->arg_size == sizeof(double)) do { int __val = (0) / 4; int __absval = (__val < 0 ? -__val : __val); do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((ARMCOND_AL) << 28) | ((0xd) << 24) | (((__val >= 0) & 0x1) << 23) | ((0) << 22) | (((0) & 0x1) << 20) | (((a1) & 0xf) << 16) | (((a2) & 0xf) << 12) | ((0x5) << 9) | (((((op->arg_size) == sizeof(float)) ? 0x0: 0x1)) << 8) | ((__absval & 0xff) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); if (0 && (op->arg_size) == sizeof(float)) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xeb7) << 16) | ((a2) << 12) | ((0x5) << 9) | ((0) << 8) | ((0xc) << 4) | ((a2) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0);
   else {
    int in_use = jit_reg_in_use(op, a2, 1);
    if (in_use) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xd2d) << 16) | ((a2) << 12) | ((0xb) << 8) | ((2) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
    do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xeb7) << 16) | ((a2) << 12) | ((0x5) << 9) | ((1) << 8) | ((0xc) << 4) | ((a2) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
    do { int __val = (0) / 4; int __absval = (__val < 0 ? -__val : __val); do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((ARMCOND_AL) << 28) | ((0xd) << 24) | (((__val >= 0) & 0x1) << 23) | ((0) << 22) | (((0) & 0x1) << 20) | (((a1) & 0xf) << 16) | (((a2) & 0xf) << 12) | ((0x5) << 9) | (((((op->arg_size) == sizeof(float)) ? 0x0: 0x1)) << 8) | ((__absval & 0xff) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); if (0 && (op->arg_size) == sizeof(float)) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xeb7) << 16) | ((a2) << 12) | ((0x5) << 9) | ((0) << 8) | ((0xc) << 4) | ((a2) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0);
    if (in_use) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xcbd) << 16) | ((a2) << 12) | ((0xb) << 8) | ((2) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
   }
   break;

  case (JIT_FST | 0x02):
   do { int __imm = ((intptr_t)(op->arg[0])); if (arm32_imm_rotate(((intptr_t)(__imm))) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MOV)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R12) << 12) | ((((arm32_encode_imm(((intptr_t)(__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else if (arm32_imm_rotate(~__imm) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MVN)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R12) << 12) | ((((arm32_encode_imm(((intptr_t)(~__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else { do { unsigned __val = __imm & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x30) << 20) | ((ARMREG_R12) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); do { unsigned __val = __imm >> 16 & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x34) << 20) | ((ARMREG_R12) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } } while (0);
   if (op->arg_size == sizeof(double)) do { int __val = (0) / 4; int __absval = (__val < 0 ? -__val : __val); do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((ARMCOND_AL) << 28) | ((0xd) << 24) | (((__val >= 0) & 0x1) << 23) | ((0) << 22) | (((0) & 0x1) << 20) | (((ARMREG_R12) & 0xf) << 16) | (((a2) & 0xf) << 12) | ((0x5) << 9) | (((((op->arg_size) == sizeof(float)) ? 0x0: 0x1)) << 8) | ((__absval & 0xff) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); if (0 && (op->arg_size) == sizeof(float)) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xeb7) << 16) | ((a2) << 12) | ((0x5) << 9) | ((0) << 8) | ((0xc) << 4) | ((a2) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0);
   else {
    int in_use = jit_reg_in_use(op, a2, 1);
    if (in_use) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xd2d) << 16) | ((a2) << 12) | ((0xb) << 8) | ((2) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
    do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xeb7) << 16) | ((a2) << 12) | ((0x5) << 9) | ((1) << 8) | ((0xc) << 4) | ((a2) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
    do { int __val = (0) / 4; int __absval = (__val < 0 ? -__val : __val); do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((ARMCOND_AL) << 28) | ((0xd) << 24) | (((__val >= 0) & 0x1) << 23) | ((0) << 22) | (((0) & 0x1) << 20) | (((ARMREG_R12) & 0xf) << 16) | (((a2) & 0xf) << 12) | ((0x5) << 9) | (((((op->arg_size) == sizeof(float)) ? 0x0: 0x1)) << 8) | ((__absval & 0xff) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); if (0 && (op->arg_size) == sizeof(float)) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xeb7) << 16) | ((a2) << 12) | ((0x5) << 9) | ((0) << 8) | ((0xc) << 4) | ((a2) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0);
    if (in_use) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xcbd) << 16) | ((a2) << 12) | ((0xb) << 8) | ((2) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
   }
   break;

  case (JIT_FSTX | 0x01):
   do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0)) << 25) | (((ARMOP_ADD)) << 21) | ((0) << 20) | ((a1) << 16) | ((ARMREG_R12) << 12) | ((((a2) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
   if (op->arg_size == sizeof(double)) do { int __val = (0) / 4; int __absval = (__val < 0 ? -__val : __val); do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((ARMCOND_AL) << 28) | ((0xd) << 24) | (((__val >= 0) & 0x1) << 23) | ((0) << 22) | (((0) & 0x1) << 20) | (((ARMREG_R12) & 0xf) << 16) | (((a3) & 0xf) << 12) | ((0x5) << 9) | (((((op->arg_size) == sizeof(float)) ? 0x0: 0x1)) << 8) | ((__absval & 0xff) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); if (0 && (op->arg_size) == sizeof(float)) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xeb7) << 16) | ((a3) << 12) | ((0x5) << 9) | ((0) << 8) | ((0xc) << 4) | ((a3) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0);
   else {
    int in_use = jit_reg_in_use(op, a3, 1);
    if (in_use) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xd2d) << 16) | ((a2) << 12) | ((0xb) << 8) | ((2) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
    do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xeb7) << 16) | ((a3) << 12) | ((0x5) << 9) | ((1) << 8) | ((0xc) << 4) | ((a3) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
    do { int __val = (0) / 4; int __absval = (__val < 0 ? -__val : __val); do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((ARMCOND_AL) << 28) | ((0xd) << 24) | (((__val >= 0) & 0x1) << 23) | ((0) << 22) | (((0) & 0x1) << 20) | (((ARMREG_R12) & 0xf) << 16) | (((a3) & 0xf) << 12) | ((0x5) << 9) | (((((op->arg_size) == sizeof(float)) ? 0x0: 0x1)) << 8) | ((__absval & 0xff) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); if (0 && (op->arg_size) == sizeof(float)) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xeb7) << 16) | ((a3) << 12) | ((0x5) << 9) | ((0) << 8) | ((0xc) << 4) | ((a3) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0);
    if (in_use) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xcbd) << 16) | ((a3) << 12) | ((0xb) << 8) | ((2) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
   }

   break;

  case (JIT_FSTX | 0x02):
   if (op->arg_size == sizeof(double)) {
    if ((a1 >= -255 * 4) && (a1 <= 255 * 4)) do { int __val = (a1) / 4; int __absval = (__val < 0 ? -__val : __val); do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((ARMCOND_AL) << 28) | ((0xd) << 24) | (((__val >= 0) & 0x1) << 23) | ((0) << 22) | (((0) & 0x1) << 20) | (((a2) & 0xf) << 16) | (((a3) & 0xf) << 12) | ((0x5) << 9) | (((((op->arg_size) == sizeof(float)) ? 0x0: 0x1)) << 8) | ((__absval & 0xff) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); if (0 && (op->arg_size) == sizeof(float)) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xeb7) << 16) | ((a3) << 12) | ((0x5) << 9) | ((0) << 8) | ((0xc) << 4) | ((a3) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0);
    else {
     do { int __imm = ((intptr_t)(a1)); if (arm32_imm_rotate(((intptr_t)(__imm))) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MOV)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R12) << 12) | ((((arm32_encode_imm(((intptr_t)(__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else if (arm32_imm_rotate(~__imm) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MVN)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R12) << 12) | ((((arm32_encode_imm(((intptr_t)(~__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else { do { unsigned __val = __imm & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x30) << 20) | ((ARMREG_R12) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); do { unsigned __val = __imm >> 16 & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x34) << 20) | ((ARMREG_R12) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } } while (0);
     do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0)) << 25) | (((ARMOP_ADD)) << 21) | ((0) << 20) | ((ARMREG_R12) << 16) | ((ARMREG_R12) << 12) | ((((a2) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
     do { int __val = (0) / 4; int __absval = (__val < 0 ? -__val : __val); do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((ARMCOND_AL) << 28) | ((0xd) << 24) | (((__val >= 0) & 0x1) << 23) | ((0) << 22) | (((0) & 0x1) << 20) | (((ARMREG_R12) & 0xf) << 16) | (((a3) & 0xf) << 12) | ((0x5) << 9) | (((((op->arg_size) == sizeof(float)) ? 0x0: 0x1)) << 8) | ((__absval & 0xff) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); if (0 && (op->arg_size) == sizeof(float)) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xeb7) << 16) | ((a3) << 12) | ((0x5) << 9) | ((0) << 8) | ((0xc) << 4) | ((a3) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0);
    }
   } else {
    int in_use = jit_reg_in_use(op, a3, 1);
    if (in_use) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xd2d) << 16) | ((a2) << 12) | ((0xb) << 8) | ((2) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
    do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xeb7) << 16) | ((a3) << 12) | ((0x5) << 9) | ((1) << 8) | ((0xc) << 4) | ((a3) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
    if ((a1 >= -255 * 4) && (a1 <= 255 * 4)) do { int __val = (a1) / 4; int __absval = (__val < 0 ? -__val : __val); do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((ARMCOND_AL) << 28) | ((0xd) << 24) | (((__val >= 0) & 0x1) << 23) | ((0) << 22) | (((0) & 0x1) << 20) | (((a2) & 0xf) << 16) | (((a3) & 0xf) << 12) | ((0x5) << 9) | (((((op->arg_size) == sizeof(float)) ? 0x0: 0x1)) << 8) | ((__absval & 0xff) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); if (0 && (op->arg_size) == sizeof(float)) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xeb7) << 16) | ((a3) << 12) | ((0x5) << 9) | ((0) << 8) | ((0xc) << 4) | ((a3) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0);
    else {
     do { int __imm = ((intptr_t)(a1)); if (arm32_imm_rotate(((intptr_t)(__imm))) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MOV)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R12) << 12) | ((((arm32_encode_imm(((intptr_t)(__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else if (arm32_imm_rotate(~__imm) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MVN)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R12) << 12) | ((((arm32_encode_imm(((intptr_t)(~__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else { do { unsigned __val = __imm & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x30) << 20) | ((ARMREG_R12) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); do { unsigned __val = __imm >> 16 & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x34) << 20) | ((ARMREG_R12) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } } while (0);
     do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0)) << 25) | (((ARMOP_ADD)) << 21) | ((0) << 20) | ((ARMREG_R12) << 16) | ((ARMREG_R12) << 12) | ((((a2) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
     do { int __val = (0) / 4; int __absval = (__val < 0 ? -__val : __val); do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((ARMCOND_AL) << 28) | ((0xd) << 24) | (((__val >= 0) & 0x1) << 23) | ((0) << 22) | (((0) & 0x1) << 20) | (((ARMREG_R12) & 0xf) << 16) | (((a3) & 0xf) << 12) | ((0x5) << 9) | (((((op->arg_size) == sizeof(float)) ? 0x0: 0x1)) << 8) | ((__absval & 0xff) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); if (0 && (op->arg_size) == sizeof(float)) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xeb7) << 16) | ((a3) << 12) | ((0x5) << 9) | ((0) << 8) | ((0xc) << 4) | ((a3) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0);
    }

    if (in_use) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xcbd) << 16) | ((a3) << 12) | ((0xb) << 8) | ((2) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0);
   }
   break;

  case (JIT_UREG): emit_ureg(jit, a1, a2); break;
  case (JIT_SYNCREG): emit_ureg(jit, a1, a2); break;
  case (JIT_LREG):
   if ((((a2) >> 1) & 0x03) == (3)) assert(0);
   if (((a2) & 0x01) == (0))
    do { int __disp = GET_REG_POS(jit, a2); if ((arm32_imm_rotate(__disp) >= 0) || (arm32_imm_rotate(-__disp) >= 0)) { do { unsigned int op = ((ARMCOND_AL) << 28) | ((0x1) << 26) | ((0) << 25) | ((0x1) << 24) | ((0) << 22) | ((0x0) << 21) | ((1) << 20) | ((ARMREG_FP) << 16) | ((a1) << 12); if (0) { op |= ((0x1) << 23); op |= ((__disp) << 0); } else { int _imm = ((intptr_t)(__disp)); if (arm32_imm_rotate(_imm) >= 0) { op |= ((0x1) << 23); op |= arm32_encode_imm(__disp); } else if (arm32_imm_rotate(-_imm) >= 0) { op |= ((0x0) << 23); op |= arm32_encode_imm(-_imm); } else { abort(); } } do { *((unsigned int *)(jit->ip)) = op; (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } else { do { int __imm = ((intptr_t)(__disp)); if (arm32_imm_rotate(((intptr_t)(__imm))) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MOV)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R12) << 12) | ((((arm32_encode_imm(((intptr_t)(__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else if (arm32_imm_rotate(~__imm) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MVN)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R12) << 12) | ((((arm32_encode_imm(((intptr_t)(~__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else { do { unsigned __val = __imm & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x30) << 20) | ((ARMREG_R12) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); do { unsigned __val = __imm >> 16 & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x34) << 20) | ((ARMREG_R12) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } } while (0); do { unsigned int op = ((ARMCOND_AL) << 28) | ((0x1) << 26) | ((1) << 25) | ((0x1) << 24) | ((0) << 22) | ((0x0) << 21) | ((1) << 20) | ((ARMREG_FP) << 16) | ((a1) << 12); if (1) { op |= ((0x1) << 23); op |= ((ARMREG_R12) << 0); } else { int _imm = ((intptr_t)(ARMREG_R12)); if (arm32_imm_rotate(_imm) >= 0) { op |= ((0x1) << 23); op |= arm32_encode_imm(ARMREG_R12); } else if (arm32_imm_rotate(-_imm) >= 0) { op |= ((0x0) << 23); op |= arm32_encode_imm(-_imm); } else { abort(); } } do { *((unsigned int *)(jit->ip)) = op; (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } } while (0);
   else do { int __disp = GET_REG_POS(jit, a2); if ((__disp >= -4095) && (__disp <= 4095)) { do { int __val = (__disp) / 4; int __absval = (__val < 0 ? -__val : __val); do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((ARMCOND_AL) << 28) | ((0xd) << 24) | (((__val >= 0) & 0x1) << 23) | ((0) << 22) | (((1) & 0x1) << 20) | (((ARMREG_FP) & 0xf) << 16) | (((a1) & 0xf) << 12) | ((0x5) << 9) | (((((sizeof(double)) == sizeof(float)) ? 0x0: 0x1)) << 8) | ((__absval & 0xff) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); if (1 && (sizeof(double)) == sizeof(float)) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xeb7) << 16) | ((a1) << 12) | ((0x5) << 9) | ((0) << 8) | ((0xc) << 4) | ((a1) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } else { do { int __imm = ((intptr_t)(__disp)); if (arm32_imm_rotate(((intptr_t)(__imm))) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MOV)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R12) << 12) | ((((arm32_encode_imm(((intptr_t)(__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else if (arm32_imm_rotate(~__imm) != -1) { do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((1)) << 25) | (((ARMOP_MVN)) << 21) | ((0) << 20) | ((0) << 16) | ((ARMREG_R12) << 12) | ((((arm32_encode_imm(((intptr_t)(~__imm)))) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } else { do { unsigned __val = __imm & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x30) << 20) | ((ARMREG_R12) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); do { unsigned __val = __imm >> 16 & 0xffff; do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | ((0x34) << 20) | ((ARMREG_R12) << 12) | (((__val & 0xf000)) << 4) | (((__val & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } } while (0); do { int __val = (ARMREG_R12) / 4; int __absval = (__val < 0 ? -__val : __val); do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((ARMCOND_AL) << 28) | ((0xd) << 24) | (((__val >= 0) & 0x1) << 23) | ((0) << 22) | (((1) & 0x1) << 20) | (((ARMREG_FP) & 0xf) << 16) | (((a1) & 0xf) << 12) | ((0x5) << 9) | (((((sizeof(double)) == sizeof(float)) ? 0x0: 0x1)) << 8) | ((__absval & 0xff) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); if (1 && (sizeof(double)) == sizeof(float)) do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0xeb7) << 16) | ((a1) << 12) | ((0x5) << 9) | ((0) << 8) | ((0xc) << 4) | ((a1) << 0)); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); } while (0); } } while (0);
   break;
  case JIT_RENAMEREG: do { *((unsigned int *)(jit->ip)) = ((ARMCOND_AL) << 28) | (((0)) << 25) | (((ARMOP_MOV)) << 21) | ((0) << 20) | ((0) << 16) | ((a1) << 12) | ((((a2) & 0xfff)) << 0); (jit->ip) = (unsigned char *)((unsigned int*)(jit->ip) + 1); } while (0); break;

  case JIT_CODESTART: break;
  case JIT_NOP: break;
  default: printf("arm32: unknown operation (opcode: 0x%x)\n", ((jit_opcode) (op->code & 0xfff8)) >> 3);
 }
}

struct jit_reg_allocator * jit_reg_allocator_create()
{
 struct jit_reg_allocator * a = malloc(sizeof(struct jit_reg_allocator));
 a->gp_reg_cnt = 11;

 a->gp_reg_cnt = 7;

 a->gp_regs = malloc(sizeof(jit_hw_reg) * (a->gp_reg_cnt));

 a->gp_regs[0] = (jit_hw_reg) { ARMREG_R0, "R0", 0, 0, 0 };
 a->gp_regs[1] = (jit_hw_reg) { ARMREG_R1, "R1", 0, 0, 1 };
 a->gp_regs[2] = (jit_hw_reg) { ARMREG_R2, "R2", 0, 0, 2 };
 a->gp_regs[3] = (jit_hw_reg) { ARMREG_R3, "R3", 0, 0, 3 };
 a->gp_regs[4] = (jit_hw_reg) { ARMREG_R4, "R4", 1, 0, 4 };
 a->gp_regs[5] = (jit_hw_reg) { ARMREG_R5, "R5", 1, 0, 5 };
 a->gp_regs[6] = (jit_hw_reg) { ARMREG_R6, "R6", 1, 0, 6 };







 a->fp_reg_cnt = 16;
 a->fp_regs = malloc(sizeof(jit_hw_reg) * a->fp_reg_cnt);

 a->fp_regs[0] = (jit_hw_reg) { ARMREG_D0, "D0", 0, 1, 1 };
 a->fp_regs[1] = (jit_hw_reg) { ARMREG_D1, "D1", 0, 1, 2 };
 a->fp_regs[2] = (jit_hw_reg) { ARMREG_D2, "D2", 0, 1, 3 };
 a->fp_regs[3] = (jit_hw_reg) { ARMREG_D3, "D3", 0, 1, 4 };
 a->fp_regs[4] = (jit_hw_reg) { ARMREG_D4, "D4", 0, 1, 5 };
 a->fp_regs[5] = (jit_hw_reg) { ARMREG_D5, "D5", 0, 1, 6 };
 a->fp_regs[6] = (jit_hw_reg) { ARMREG_D6, "D6", 0, 1, 7 };
 a->fp_regs[7] = (jit_hw_reg) { ARMREG_D7, "D7", 0, 1, 8 };
 a->fp_regs[8] = (jit_hw_reg) { ARMREG_D8, "D8", 1, 1, 9 };
 a->fp_regs[9] = (jit_hw_reg) { ARMREG_D9, "D9", 1, 1, 10 };
 a->fp_regs[10] = (jit_hw_reg) { ARMREG_D10, "D10", 1, 1, 11 };
 a->fp_regs[11] = (jit_hw_reg) { ARMREG_D11, "D11", 1, 1, 12 };
 a->fp_regs[12] = (jit_hw_reg) { ARMREG_D12, "D12", 1, 1, 13 };
 a->fp_regs[13] = (jit_hw_reg) { ARMREG_D13, "D13", 1, 1, 14 };
 a->fp_regs[14] = (jit_hw_reg) { ARMREG_D14, "D14", 1, 1, 15 };
 a->fp_regs[15] = (jit_hw_reg) { ARMREG_D15, "D15", 0, 1, 16 };


 a->fp_reg = ARMREG_FP;
 a->ret_reg = &(a->gp_regs[0]);
 a->fpret_reg = &(a->fp_regs[0]);

 a->gp_arg_reg_cnt = 4;
 a->gp_arg_regs = malloc(sizeof(jit_hw_reg *) * a->gp_arg_reg_cnt);
 for (int i = 0; i < 4; i++)
  a->gp_arg_regs[i] = &(a->gp_regs[i]);

 a->fp_arg_reg_cnt = 8;
 a->fp_arg_regs = malloc(sizeof(jit_hw_reg *) * a->fp_arg_reg_cnt);
 for (int i = 0; i < 8; i++)
  a->fp_arg_regs[i] = &(a->fp_regs[i]);

 return a;
}


static jit_hw_reg * rmap_is_associated(jit_rmap * rmap, int reg_id, int fp, jit_value * virt_reg);
struct output_buf
{
 char *buf;
 size_t size;
 size_t capacity;
};

static struct output_buf *ob_new()
{
 struct output_buf *ob = malloc(sizeof(struct output_buf));
 ob->buf = malloc((8192));
 ob->capacity = (8192);
 ob->size = 0;
 ob->buf[0] = '\0';
 return ob;
}

static void ob_free(struct output_buf *ob)
{
 free(ob->buf);
 free(ob);
}

static void ob_assert_space(struct output_buf *ob, int len)
{
 if (ob->size + len + 2 > ob->capacity) {
  ob->capacity += len + (8192);
  ob->buf = realloc(ob->buf, ob->capacity);
 }
}

static void ob_printf(struct output_buf *ob, const char *fmt, ...)
{
 char str[(8192)];

 va_list ap;
 va_start(ap, fmt);
 int len = vsnprintf(str, (8192), fmt, ap);
 va_end(ap);

 len = strlen(str);
 ob_assert_space(ob, len);
 strcat(ob->buf, str);
 ob->size += len;
}

static void ob_append(struct output_buf *ob, char *str)
{
 int len = strlen(str);
 ob_assert_space(ob, len);
 strcat(ob->buf, str);
 ob->size += len;
}

static void ob_pad(struct output_buf *ob, int size)
{
 while (strlen(ob->buf) < (size))
  ob_append(ob, " ");
}



static void compiler_based_debugger(struct jit * jit)
{
 char obj_file_name[] = "myjitXXXXXX";
 int obj_file_fd = mkstemp(obj_file_name);
 char * cmd1_fmt = "cc -x assembler -c -o %s -";
 char * cmd2_fmt = "otool -tvVj %s";


 char cmd1[strlen(cmd1_fmt) + strlen(obj_file_name) + 1];
 char cmd2[strlen(cmd2_fmt) + strlen(obj_file_name) + 1];

 sprintf(cmd1, cmd1_fmt, obj_file_name);

 FILE * f = popen(cmd1, "w");

 int size = jit->ip - jit->buf;
 fprintf (f, ".text\n.align 4\n.globl main\n\nmain:\n");
 for (int i = 0; i < size; i++)
  fprintf(f, ".byte 0x%x\n", (unsigned int) jit->buf[i]);

 pclose(f);


 sprintf(cmd2, cmd2_fmt, obj_file_name);
 system(cmd2);

 close(obj_file_fd);
 unlink(obj_file_name);
}

typedef struct jit_disasm {
 char *indent_template;
 char *reg_template;
 char *freg_template;
 char *arg_template;
 char *farg_template;
 char *reg_fp_template;
 char *reg_out_template;
 char *reg_imm_template;
 char *reg_fimm_template;
 char *reg_unknown_template;
 char *label_template;
 char *label_forward_template;
 char *generic_addr_template;
 char *generic_value_template;
} jit_disasm;

struct jit_disasm jit_disasm_general = {
 .indent_template = "    ",
 .reg_template = "r%i",
 .freg_template = "fr%i",
 .arg_template = "arg%i",
 .farg_template = "farg%i",
 .reg_out_template = "out",
 .reg_fp_template = "fp",
 .reg_imm_template = "imm",
 .reg_fimm_template = "fimm",
 .reg_unknown_template = "(unknown reg.)",
 .label_template = "L%i",
 .label_forward_template = "L%i",
 .generic_addr_template = "<addr: 0x%lx>",
 .generic_value_template = "0x%lx",
};

struct jit_disasm jit_disasm_compilable = {
 .indent_template = "    ",
 .reg_template = "R(%i)",
 .freg_template = "FR(%i)",
 .arg_template = "arg(%i)",
 .farg_template = "farg(%i)",
 .reg_fp_template = "R_FP",
 .reg_out_template = "R_OUT",
 .reg_imm_template = "R_IMM",
 .reg_fimm_template = "FR_IMM",
 .reg_unknown_template = "(unknown reg.)",
 .label_template = "label_%03i",
 .label_forward_template = "/* label_%03i */ JIT_FORWARD",
 .generic_addr_template = "<addr: 0x%lx>",
 .generic_value_template = "%li",
};



char * jit_get_op_name(struct jit_op * op)
{
 switch (((jit_opcode) (op->code & 0xfff8))) {
  case JIT_MOV: return "mov";
  case JIT_LD: return "ld";
  case JIT_LDX: return "ldx";
  case JIT_ST: return "st";
  case JIT_STX: return "stx";
  case JIT_MEMCPY:return "memcpy";
  case JIT_MEMSET:return "memset";

  case JIT_JMP: return "jmp";
  case JIT_PATCH: return ".patch";
  case JIT_PREPARE: return "prepare";
  case JIT_PUTARG: return "putarg";
  case JIT_CALL: return "call";
  case JIT_RET: return "ret";
  case JIT_PROLOG: return "prolog";
  case JIT_GETARG: return "getarg";
  case JIT_RETVAL: return "retval";
  case JIT_ALLOCA: return "alloca";
  case JIT_DECL_ARG: return "declare_arg";

  case JIT_ADD: return "add";
  case JIT_ADDC: return "addc";
  case JIT_ADDX: return "addx";
  case JIT_SUB: return "sub";
  case JIT_SUBC: return "subc";
  case JIT_SUBX: return "subx";
  case JIT_RSB: return "rsb";
  case JIT_NEG: return "neg";
  case JIT_MUL: return "mul";
  case JIT_HMUL: return "hmul";
  case JIT_DIV: return "div";
  case JIT_MOD: return "mod";

  case JIT_OR: return "or";
  case JIT_XOR: return "xor";
  case JIT_AND: return "and";
  case JIT_LSH: return "lsh";
  case JIT_RSH: return "rsh";
  case JIT_NOT: return "not";

  case JIT_LT: return "lt";
  case JIT_LE: return "le";
  case JIT_GT: return "gt";
  case JIT_GE: return "ge";
  case JIT_EQ: return "eq";
  case JIT_NE: return "ne";

  case JIT_BLT: return "blt";
  case JIT_BLE: return "ble";
  case JIT_BGT: return "bgt";
  case JIT_BGE: return "bge";
  case JIT_BEQ: return "beq";
  case JIT_BNE: return "bne";
  case JIT_BMS: return "bms";
  case JIT_BMC: return "bmc";
  case JIT_BOADD: return "boadd";
  case JIT_BOSUB: return "bosub";
  case JIT_BNOADD:return "bnoadd";
  case JIT_BNOSUB:return "bnosub";

  case JIT_UREG: return ".ureg";
  case JIT_LREG: return ".lreg";
  case JIT_CODESTART: return ".code";
  case JIT_LABEL: return ".label";
  case JIT_SYNCREG: return ".syncreg";
  case JIT_RENAMEREG: return ".renamereg";
  case JIT_MSG: return "msg";
  case JIT_COMMENT: return ".comment";
  case JIT_NOP: return "nop";
  case JIT_CODE_ALIGN: return ".align";
  case JIT_DATA_BYTE: return ".byte";
  case JIT_DATA_BYTES: return ".bytes";
  case JIT_DATA_REF_CODE: return ".ref_code";
  case JIT_DATA_REF_DATA: return ".ref_data";
  case JIT_REF_CODE: return "ref_code";
  case JIT_REF_DATA: return "ref_data";
  case JIT_FULL_SPILL: return ".full_spill";
  case JIT_TRACE: return ".trace";
  case JIT_FORCE_SPILL: return "force_spill";
  case JIT_FORCE_ASSOC: return "force_assoc";
  case JIT_MARK: return "mark";
  case JIT_TOUCH: return "touch";

  case JIT_TRANSFER: return "transfer";
  case JIT_TRANSFER_CPY: return "transfer_cpy";
  case JIT_TRANSFER_AND: return "transfer_and";
  case JIT_TRANSFER_OR: return "transfer_or";
  case JIT_TRANSFER_XOR: return "transfer_xor";
  case JIT_TRANSFER_ADD: return "transfer_add";
  case JIT_TRANSFER_SUB: return "transfer_sub";

  case JIT_FMOV: return "fmov";
  case JIT_FADD: return "fadd";
  case JIT_FSUB: return "fsub";
  case JIT_FRSB: return "frsb";
  case JIT_FMUL: return "fmul";
  case JIT_FDIV: return "fdiv";
  case JIT_FNEG: return "fneg";
  case JIT_FRETVAL: return "fretval";
  case JIT_FPUTARG: return "fputarg";

  case JIT_EXT: return "ext";
  case JIT_ROUND: return "round";
  case JIT_TRUNC: return "trunc";
  case JIT_FLOOR: return "floor";
  case JIT_CEIL: return "ceil";

  case JIT_FBLT: return "fblt";
  case JIT_FBLE: return "fble";
  case JIT_FBGT: return "fbgt";
  case JIT_FBGE: return "fbge";
  case JIT_FBEQ: return "fbeq";
  case JIT_FBNE: return "fbne";

  case JIT_FLD: return "fld";
  case JIT_FLDX: return "fldx";
  case JIT_FST: return "fst";
  case JIT_FSTX: return "fstx";

  case JIT_FRET: return "fret";
  default: return "(unknown)";
 }
}

void jit_get_reg_name(struct jit_disasm *disasm, char *r, int reg)
{
 if (reg == (((((0)) & 0x01) | ((((2)) & 0x03) << 1) | ((0) & 0xfffffff) << 4))) strcpy(r, disasm->reg_fp_template);
 else if (reg == (((((0)) & 0x01) | ((((2)) & 0x03) << 1) | ((1) & 0xfffffff) << 4))) strcpy(r, disasm->reg_out_template);
 else if (reg == (((((0)) & 0x01) | ((((1)) & 0x03) << 1) | ((0) & 0xfffffff) << 4))) strcpy(r, disasm->reg_imm_template);
 else if (reg == (((((1)) & 0x01) | ((((1)) & 0x03) << 1) | ((0) & 0xfffffff) << 4))) strcpy(r, disasm->reg_fimm_template);
 else {
  if ((((reg) >> 1) & 0x03) == (0)) {
   if (((reg) & 0x01) == (0)) sprintf(r, disasm->reg_template, (((reg) >> 4) & 0xfffffff));
   else sprintf(r, disasm->freg_template, (((reg) >> 4) & 0xfffffff));
  }
  else if ((((reg) >> 1) & 0x03) == (3)) {
   if (((reg) & 0x01) == (0)) sprintf(r, disasm->arg_template, (((reg) >> 4) & 0xfffffff));
   else sprintf(r, disasm->farg_template, (((reg) >> 4) & 0xfffffff));
  } else sprintf(r, "%s", disasm->reg_unknown_template);
 }
}

static void print_rmap_callback(jit_tree_key key, jit_tree_value value, void *disasm)
{
 char buf[256];
 jit_get_reg_name((struct jit_disasm *)disasm, buf, key);
 printf("%s=%s ", buf, ((jit_hw_reg *)value)->name);
}

static void print_reg_liveness_callback(jit_tree_key key, jit_tree_value value, void *disasm)
{
 char buf[256];
 jit_get_reg_name(disasm, buf, key);
 printf("%s ", buf);
}





static inline int jit_op_is_cflow(jit_op * op)
{
 if (((((jit_opcode) (op->code & 0xfff8)) == JIT_CALL) || (((jit_opcode) (op->code & 0xfff8)) == JIT_JMP)) && ((op->code & 0x02))) return 1;
 if (is_cond_branch_op(op)) return 1;

 return 0;
}

static jit_tree * prepare_labels(struct jit * jit)
{
 long x = 1;
 jit_tree * n = NULL;
 for (jit_op * op = jit_op_first(jit->ops); op != NULL; op = op->next) {
  if (((jit_opcode) (op->code & 0xfff8)) == JIT_PATCH) {
   n = jit_tree_insert(n, (long) op, (void *)x, NULL);
   n = jit_tree_insert(n, op->arg[0], (void *) -x, NULL);
   x++;
  }
  if (((jit_opcode) (op->code & 0xfff8)) == JIT_LABEL) {
   n = jit_tree_insert(n, op->arg[0], (void *)x, NULL);
   x++;
  }
 }
 return n;
}

static inline void print_addr(struct jit_disasm *disasm, struct output_buf *buf, jit_tree *labels, jit_op *op, int arg_pos)
{
 void *arg = (void *)op->arg[arg_pos];

 jit_tree *label_item = jit_tree_search(labels, (long) op);
 if (label_item) ob_printf(buf, disasm->label_forward_template, - (long) label_item->value);
 else {
  label_item = jit_tree_search(labels, (long) arg);
  if (label_item) ob_printf(buf, disasm->label_template, (long) label_item->value);
  else ob_printf(buf, disasm->generic_addr_template, arg);
 }
}

static inline void print_arg(struct jit_disasm *disasm, struct output_buf *buf, struct jit_op *op, int arg)
{
 long a = op->arg[arg - 1];
 if ((((op)->spec >> ((arg) - 1) * 2) & 0x03) == 0x02) ob_printf(buf, disasm->generic_value_template, a);
 if (((((op)->spec >> ((arg) - 1) * 2) & 0x03) == 0x01) || ((((op)->spec >> ((arg) - 1) * 2) & 0x03) == 0x03)) {
  char value[256];
  jit_get_reg_name(disasm, value, a);
  ob_append(buf, value);
 }
}

static inline void print_str(struct output_buf *buf, char *str)
{
 ob_append(buf, " \"");
 for (int i = 0; i < strlen(str); i++) {
  if (str[i] >= 32) {

   ob_printf(buf, "%c", str[i]);


  } else {
   char xbuf[16];
   switch (str[i]) {
    case 9: strcpy(xbuf, "\\t"); break;
    case 10: strcpy(xbuf, "\\n"); break;
    case 13: strcpy(xbuf, "\\r"); break;
    default: sprintf(xbuf, "\\x%02x", str[i]);
   }
   ob_append(buf, xbuf);
  }
 }
 ob_append(buf, "\"");
}

static void print_args(struct jit_disasm *disasm, struct output_buf *linebuf, jit_op *op, jit_tree *labels)
{
 for (int i = 1; i <= 3; i++) {
  if ((((op)->spec >> ((i) - 1) * 2) & 0x03) == 0x00) continue;
  ob_append(linebuf, i == 1 ? " " : ", ");
  if ((i == 1) && jit_op_is_cflow(op)) print_addr(disasm, linebuf, labels, op, 0);
  else print_arg(disasm, linebuf, op, i);
 }
}

void print_full_op_name(struct output_buf *linebuf, jit_op *op)
{
 char *op_name = jit_get_op_name(op);
 ob_append(linebuf, op_name);
 if ((((jit_opcode) (op->code & 0xfff8)) == JIT_CALL) && ((op->code & 0x0007) & 0x02)) return;
 if ((op->code & 0x0007) & 0x02) ob_append(linebuf, "i");
 if ((op->code & 0x0007) & 0x01) ob_append(linebuf, "r");
 if ((op->code & 0x0007) & 0x04) ob_append(linebuf, "_u");
}

static int print_load_op(struct jit_disasm *disasm, struct output_buf *linebuf, jit_op *op)
{
 char rbuf[256];
 switch (((jit_opcode) (op->code & 0xfff8))) {
  case JIT_LREG:
   ob_append(linebuf, disasm->indent_template);
   ob_append(linebuf, jit_get_op_name(op));
   ob_pad(linebuf, 13);
   jit_get_reg_name(disasm, rbuf, op->arg[1]);
   ob_append(linebuf, rbuf);
   return 1;
  case JIT_UREG:
  case JIT_SYNCREG:
   ob_append(linebuf, disasm->indent_template);
   ob_append(linebuf, jit_get_op_name(op));
   ob_pad(linebuf, 13);
   jit_get_reg_name(disasm, rbuf, op->arg[0]);
   ob_append(linebuf, rbuf);
   return 1;
  case JIT_RENAMEREG: {
    jit_value reg;
    rmap_is_associated(op->prev->regmap, op->arg[1], 0, &reg);
    ob_append(linebuf, disasm->indent_template);
    ob_append(linebuf, jit_get_op_name(op));
    ob_append(linebuf, " ");
    ob_pad(linebuf, 13);
    jit_get_reg_name(disasm, rbuf, reg);
    ob_append(linebuf, rbuf);
    return 1;
   }
  case JIT_FULL_SPILL:
   ob_append(linebuf, disasm->indent_template);
   ob_append(linebuf, jit_get_op_name(op));
   return 1;
  default:
   return 0;

 }
}

void print_comment(struct output_buf *linebuf, jit_op *op)
{
 char *str = (char *)op->arg[0];
 ob_append(linebuf, "// ");
 for (int i = 0; i < strlen(str); i++) {
  if ((str[i] == '\r') || (str[i] == '\n')) ob_append(linebuf, "\n// ");
  else ob_printf(linebuf, "%c", str[i]);
 }
}


int print_op(FILE *f, struct jit_disasm * disasm, struct jit_op *op, jit_tree *labels, int verbosity)
{


 struct output_buf *linebuf = ob_new();

 if ((((jit_opcode) (op->code & 0xfff8)) == JIT_LABEL) || (((jit_opcode) (op->code & 0xfff8)) == JIT_PATCH)) {
  jit_tree * lab = jit_tree_search(labels, (long)op->arg[0]);
  if (lab) {
   ob_printf(linebuf, disasm->label_template, (((long)lab->value) < 0 ? - ((long)lab->value) : (long)lab->value));
   ob_printf(linebuf, ":");
  }
  goto print;
 }

 if (((jit_opcode) (op->code & 0xfff8)) == JIT_COMMENT) {
  print_comment(linebuf, op);
  goto print;
 }

 if (((jit_opcode) (op->code & 0xfff8)) == JIT_TRACE) {
  ob_append(linebuf, disasm->indent_template);
  ob_append(linebuf, ".trace");
  goto print;
 }


 char * op_name = jit_get_op_name(op);
 if ((op_name[0] == '.') && (verbosity & (0x100))) {
  if (print_load_op(disasm, linebuf, op)) goto print;
 }

 ob_append(linebuf, disasm->indent_template);
 if (op_name[0] == '.') {
  switch (((jit_opcode) (op->code & 0xfff8))) {
   case JIT_DATA_BYTE:
   case JIT_CODE_ALIGN:
    ob_printf(linebuf, "%s ", op_name);
    ob_pad(linebuf, 13);
    ob_printf(linebuf, disasm->generic_value_template, op->arg[0]);
    goto print;
   case JIT_DATA_BYTES:
    ob_printf(linebuf, "%s ", op_name);
    ob_pad(linebuf, 13);
    for (int i = 0; i < op->arg[0]; i++) {
     ob_printf(linebuf, disasm->generic_value_template, ((unsigned char *)op->addendum)[i]);
     ob_printf(linebuf, " ");
    }
    goto print;

   case JIT_DATA_REF_CODE:
   case JIT_DATA_REF_DATA:
    ob_printf(linebuf, "%s ", op_name);
    ob_pad(linebuf, 13);
    print_addr(disasm, linebuf, labels, op, 0);
    goto print;
   default:
    goto print;

  }
 }
 print_full_op_name(linebuf, op);

 ob_pad(linebuf, 12);

 if (op->arg_size == 1) ob_append(linebuf, " (byte)");
 if (op->arg_size == 2) ob_append(linebuf, " (word)");
 if (op->arg_size == 4) ob_append(linebuf, " (dword)");
 if (op->arg_size == 8) ob_append(linebuf, " (qword)");

 switch (((jit_opcode) (op->code & 0xfff8))) {
  case JIT_PREPARE: break;
  case JIT_MSG:
   print_str(linebuf, (char *)op->arg[0]);
   if (!(op->code & 0x02)) {
    ob_append(linebuf, ", ");
    print_arg(disasm, linebuf, op, 2);
   }
   break;
  case JIT_REF_CODE:
  case JIT_REF_DATA:
   ob_append(linebuf, " ");
   print_arg(disasm, linebuf, op, 1);
   ob_append(linebuf, ", ");
   print_addr(disasm, linebuf, labels, op, 1);
   break;
  case JIT_DECL_ARG:
   switch (op->arg[0]) {
    case JIT_SIGNED_NUM: ob_append(linebuf, " integer"); break;
    case JIT_UNSIGNED_NUM: ob_append(linebuf, " uns. integer"); break;
    case JIT_FLOAT_NUM: ob_append(linebuf, " float"); break;
    case JIT_PTR: ob_append(linebuf, " ptr"); break;
    default: assert(0);
   };
   ob_append(linebuf, ", ");
   print_arg(disasm, linebuf, op, 2);
   break;
  default:
   print_args(disasm, linebuf, op, labels);
 }
print:
 fprintf(f, "%s", linebuf->buf);
 int len = strlen(linebuf->buf);
 ob_free(linebuf);
 return len;
}




int print_op_compilable(struct jit_disasm *disasm, struct jit_op * op, jit_tree * labels)
{
 struct output_buf *linebuf = ob_new();

 jit_tree * lab = jit_tree_search(labels, (long)op);
 if (lab && ((long) lab->value > 0)) {
  ob_printf(linebuf, "// ");
  ob_printf(linebuf, disasm->label_template, (long)lab->value);
  ob_printf(linebuf, ":\n");
 }

 if (((jit_opcode) (op->code & 0xfff8)) == JIT_COMMENT) {
  print_comment(linebuf, op);
  goto direct_print;
 }


 ob_append(linebuf, disasm->indent_template);

 if ((jit_op_is_cflow(op) && ((void *)op->arg[0] == (NULL)))
 || (((jit_opcode) (op->code & 0xfff8)) == JIT_REF_CODE) || (((jit_opcode) (op->code & 0xfff8)) == JIT_REF_DATA)
 || (((jit_opcode) (op->code & 0xfff8)) == JIT_DATA_REF_CODE) || (((jit_opcode) (op->code & 0xfff8)) == JIT_DATA_REF_DATA))
  ob_printf(linebuf, "jit_op * op_%li = ", (((unsigned long) (op)) >> 4));

 switch (((jit_opcode) (op->code & 0xfff8))) {
  case JIT_LABEL: {
   ob_printf(linebuf, "jit_label * ");

   jit_tree * lab = jit_tree_search(labels, (long)op->arg[0]);
   if (lab) ob_printf(linebuf, disasm->label_template, (long) lab->value);
   ob_printf(linebuf, " = jit_get_label(p");
   goto print;
  }
  case JIT_PATCH:
   ob_printf(linebuf, "jit_patch  (p, op_%li", (((unsigned long) (op->arg[0])) >> 4));
   goto print;

  case JIT_DATA_BYTE:
   ob_printf(linebuf, "jit_data_byte(p, ");
   ob_printf(linebuf, disasm->generic_value_template, op->arg[0]);
   goto print;
  case JIT_DATA_BYTES:
   for (int i = 0; i < op->arg[0]; i++) {
    ob_printf(linebuf, "jit_data_byte(p, ");
    ob_printf(linebuf, disasm->generic_value_template, ((unsigned char *)op->addendum) [i]);
    if (i < op->arg[0] - 1) ob_printf(linebuf, ");\n");
   }
   goto print;
  case JIT_REF_CODE:
  case JIT_REF_DATA:
   ob_printf(linebuf, "jit_%s(p, ", jit_get_op_name(op));
   print_arg(disasm, linebuf, op, 1);
   ob_append(linebuf, ", ");
   print_addr(disasm, linebuf, labels, op, 1);
   goto print;
  case JIT_DATA_REF_CODE:
  case JIT_DATA_REF_DATA:
   ob_printf(linebuf, "jit_data_%s(p, ", jit_get_op_name(op) + 1);
   print_addr(disasm, linebuf, labels, op, 0);
   goto print;
  case JIT_CODE_ALIGN:
   ob_printf(linebuf, "jit_code_align  (p, ");
   ob_printf(linebuf, disasm->generic_value_template, op->arg[0]);
   goto print;
  case JIT_PREPARE:
   ob_printf(linebuf, "jit_prepare(p");
   goto print;
  default:
   break;
 }

 if (jit_get_op_name(op)[0] == '.') goto direct_print;

 ob_append(linebuf, "jit_");
 print_full_op_name(linebuf, op);

 ob_pad(linebuf, 15);

 ob_append(linebuf, "(p,");

 switch (((jit_opcode) (op->code & 0xfff8))) {
  case JIT_MSG:
   print_str(linebuf, (char *)op->arg[0]);
   if (!(op->code & 0x02)) {
    ob_append(linebuf, ", ");
    print_arg(disasm, linebuf, op, 2);
   }
   break;
  case JIT_DECL_ARG:
   switch (op->arg[0]) {
    case JIT_SIGNED_NUM: ob_append(linebuf, "JIT_SIGNED_NUM"); break;
    case JIT_UNSIGNED_NUM: ob_append(linebuf, "JIT_UNSIGNED_NUM"); break;
    case JIT_FLOAT_NUM: ob_append(linebuf, "JIT_FLOAT_NUM"); break;
    case JIT_PTR: ob_append(linebuf, "JIT_PTR"); break;
    default: assert(0);
   };
   ob_append(linebuf, ", ");
   print_arg(disasm, linebuf, op, 2);
   break;
  default:
   print_args(disasm, linebuf, op, labels);
 }

 if (op->arg_size) ob_printf(linebuf, ", %i", op->arg_size);

print:
 ob_append(linebuf, ");");
direct_print:
 printf("%s", linebuf->buf);
 int len = linebuf->size;
 ob_free(linebuf);
 return len;
}

static void jit_dump_ops_compilable(struct jit *jit, jit_tree *labels)
{
 for (jit_op * op = jit_op_first(jit->ops); op != NULL; op = op->next) {
  print_op_compilable(&jit_disasm_compilable, op, labels);
  printf("\n");
 }
}

static void jit_dump_ops_general(struct jit *jit, jit_tree *labels, int verbosity)
{
 for (jit_op * op = jit_op_first(jit->ops); op != NULL; op = op->next) {
  int size = print_op(stdout, &jit_disasm_general, op, labels, verbosity);

  if (size == 0) return;

  for (; size < 35; size++)
   printf(" ");

  if ((verbosity & (0x400)) && (op->live_in) && (op->live_out)) {
   printf("In: ");
   jit_tree_walk(op->live_in->root, print_reg_liveness_callback, &jit_disasm_general);
   printf("\tOut: ");
   jit_tree_walk(op->live_out->root, print_reg_liveness_callback, &jit_disasm_general);
  }

  if ((verbosity & (0x200)) && (op->regmap)) {
   printf("\tAssoc: ");
   jit_tree_walk(op->regmap->map, print_rmap_callback, &jit_disasm_general);
  }

  printf("\n");
 }
}

static char *platform_id()
{





 return "arm32";



}

static inline void print_op_bytes(FILE *f, struct jit *jit, jit_op *op) {
 for (int i = 0; i < op->code_length; i++)
  fprintf(f, " %02x", jit->buf[op->code_offset + i]);
 fprintf(f, "\n.nl\n");
}

static FILE *open_disasm()
{
 int fds[2];
 pipe(fds);

 pid_t child = fork();
 if (child == 0) {
  close(fds[1]);
  dup2(fds[0], STDIN_FILENO);

  char *path;

  path = "./myjit-disasm";
  execlp(path, path, NULL);

  path = "myjit-disasm";
  execlp(path, path, NULL);

  path = getenv("MYJIT_DISASM");
  if (path) execlp(path, path, NULL);

  printf("myjit-disasm not found\n\n");
  printf("In order to list myjit operations along with the machine code, the MyJIT disassembler has to be present in the current directory or its path has to be specified in the MYJIT_DISASM environment variable.\nThe disassembler's source code can be found in the \"disasm/\" directory.\n\n");
  exit(1);
 }


 close(fds[0]);
 FILE * f = fdopen(fds[1], "w");
 return f;
}

static jit_op *print_combined_op(FILE *f, struct jit *jit, struct jit_op *op, jit_tree *labels)
{
 jit_opcode opcode = ((jit_opcode) (op->code & 0xfff8));
 if ((opcode == JIT_DATA_BYTE) || (opcode == JIT_DATA_BYTES)) {
  fprintf(f, ".text\n%s.byte\n", jit_disasm_general.indent_template);
  fprintf(f, ".data\n");
  while (op && ((((jit_opcode) (op->code & 0xfff8)) == JIT_DATA_BYTE) || (((jit_opcode) (op->code & 0xfff8)) == JIT_DATA_BYTES))) {
   if (((jit_opcode) (op->code & 0xfff8)) == JIT_DATA_BYTE) fprintf(f, "%02x ", (unsigned char) op->arg[0]);
   if (((jit_opcode) (op->code & 0xfff8)) == JIT_DATA_BYTES) {
    for (int i = 0; i < op->arg[0]; i++)
     fprintf(f, "%02x ", ((unsigned char *) op->addendum)[i]);
   }

   op = op->next;
  }
  fprintf(f, "\n");

  if (!op) return NULL;
  op = op->prev;
  return op;
 }

 if (opcode == JIT_COMMENT) {
  fprintf(f, ".comment\n");
  print_op(f, &jit_disasm_general, op, labels, (0x100));
  fprintf(f, "\n");
  return op;
 }

 fprintf(f, ".text\n");
 print_op(f, &jit_disasm_general, op, labels, (0x100));
 fprintf(f, "\n");

 switch (opcode) {
  case JIT_CODE_ALIGN:
   if (op->next) {
    fprintf(f, "\n.nl\n");
    fprintf(f, ".addr=%lx\n", (unsigned long) (jit->buf + op->next->code_offset));
   }
   break;
  case JIT_DATA_REF_CODE:
  case JIT_DATA_REF_DATA:
   fprintf(f, ".data\n");
   print_op_bytes(f, jit, op);
   break;
  default:
   if (!op->code_length) break;
   fprintf(f, ".%s\n", platform_id());
   print_op_bytes(f, jit, op);
 }
 return op;
}


static void jit_dump_ops_combined(struct jit *jit, jit_tree *labels)
{
 FILE *f = open_disasm();

 fprintf(f, ".addr=%lx\n", (unsigned long)jit->buf);
 for (jit_op * op = jit_op_first(jit->ops); op != NULL; op = op->next) {
  op = print_combined_op(f, jit, op, labels);
  if (!op) break;
 }

 fclose(f);
 wait(NULL);
}

void jit_dump_ops(struct jit * jit, int verbosity)
{
 if (!(verbosity & ((0x02) | (0x08) | (0x04))))
  verbosity |= (0x01);

 jit_tree * labels = prepare_labels(jit);
 if (verbosity & (0x01)) jit_dump_ops_general(jit, labels, verbosity);
 if (verbosity & (0x02)) compiler_based_debugger(jit);
 if (verbosity & (0x08)) jit_dump_ops_compilable(jit, labels);
 if (verbosity & (0x04)) jit_dump_ops_combined(jit, labels);
 jit_tree_free(labels);
}

void jit_trace_op(struct jit *jit, jit_op *op, int verbosity)
{
 jit_tree * labels = prepare_labels(jit);
 if (verbosity & (0x01)) {
  print_op(stdout, &jit_disasm_general, op, labels, verbosity);
  printf("\n");
 }
 if (verbosity & (0x04)) {
  FILE *f = open_disasm();
  fprintf(f, "..addr=%lx\n", (unsigned long) op->code_offset);
  print_combined_op(f, jit, op, labels);
  fclose(f);
  wait(NULL);
 }

 jit_tree_free(labels);
}




void jit_trace_callback(struct jit *jit, jit_op *op, int verbosity, int trace)
{
 if (trace & (1)) jit_trace_op(jit, op->prev, verbosity);
 if (trace & (2)) jit_trace_op(jit, op->next, verbosity);
}
static void jit_dead_code_analysis(struct jit *jit, int remove_dead_code);
static inline void jit_expand_patches_and_labels(struct jit *jit);
static inline void jit_flw_analysis(struct jit *jit);
static inline void jit_prepare_reg_counts(struct jit *jit);
static inline void jit_prepare_arguments(struct jit *jit);
void jit_get_reg_name(struct jit_disasm *disasm, char * r, int reg);

static struct jit_disasm jit_debugging_disasm = {
 .indent_template = "    ",
 .reg_template = "r%i",
 .freg_template = "fr%i",
 .arg_template = "arg%i",
 .farg_template = "farg%i",
 .reg_out_template = "out",
 .reg_fp_template = "fp",
 .reg_imm_template = "imm",
 .reg_fimm_template = "fimm",
 .reg_unknown_template = "(unknown reg.)",
 .label_template = "<label>",
 .label_forward_template = "<label>",
 .generic_addr_template = "<addr: 0x%lx>",
 .generic_value_template = "0x%lx",
};



static void report_warning(struct jit *jit, jit_op *op, char *desc)
{
 fprintf(stdout, "%s at function `%s' (%s:%i)\n", desc, op->debug_info->function, op->debug_info->filename, op->debug_info->lineno);
 print_op(stdout, &jit_debugging_disasm, op, NULL, 0);
 fprintf(stdout, "\n");
}

static void append_msg(char *buf, char *format, ...)
{
 va_list ap;
 if (strlen(buf)) strcat(buf, ", ");
 va_start(ap, format);
 vsprintf(buf + strlen(buf), format, ap);
 va_end(ap);
}

static void cleanup(struct jit *jit)
{
 for (jit_op *op = jit_op_first(jit->ops); op; op = op->next) {
  if (op->live_in) {
   jit_set_free(op->live_in);
   op->live_in = NULL;
  }
  if (op->live_out) {
   jit_set_free(op->live_out);
   op->live_out = NULL;
  }
  if (((jit_opcode) (op->code & 0xfff8)) == JIT_PROLOG) {
   if (op->arg[1]) {
    struct jit_func_info *info = (struct jit_func_info *)op->arg[1];
    free(info->args);
    info->args = NULL;
   }
  }
  if (((jit_opcode) (op->code & 0xfff8)) == JIT_PREPARE) {
   op->arg[0] = 0;
   op->arg[1] = 0;
  }
 }
}

static int check_dead_code(jit_op *op, char *msg_buf)
{
 if (!op->in_use) {
  append_msg(msg_buf, "unreachable operation");
  return JIT_WARN_DEAD_CODE;
 }
 return 0;
}

static int check_missing_patches(jit_op *op, char *msg_buf)
{
 if ((((((jit_opcode) (op->code & 0xfff8)) == JIT_CALL) || (((jit_opcode) (op->code & 0xfff8)) == JIT_JMP)) && (op->code & 0x02)) || is_cond_branch_op(op)) {
  if ((op->arg[0] == (jit_value) (NULL)) && (op->jmp_addr == NULL)) {
   append_msg(msg_buf, "missing patch");
   return JIT_WARN_MISSING_PATCH;
  }
 }

 return 0;
}

static int check_op_without_effect(jit_op *op, char *msg_buf)
{

 jit_opcode code = ((jit_opcode) (op->code & 0xfff8));
 if ((code == JIT_ADDC) || (code == JIT_ADDX) || (code == JIT_SUBC) || (code == JIT_SUBX)
 || (code == JIT_BOADD) || (code == JIT_BOSUB) || (code == JIT_BNOADD) || (code == JIT_BNOSUB)) return 0;

 for (int i = 0; i < 3; i++) {
  if (((((op)->spec >> ((i + 1) - 1) * 2) & 0x03) == 0x03) && (!jit_set_get(op->live_out, op->arg[i]))) {
   append_msg(msg_buf, "operation without effect");
   return JIT_WARN_OP_WITHOUT_EFFECT;
  }
 }
 return 0;
}

static void print_regs(jit_tree_key reg, jit_tree_value v, void *thunk)
{
 char buf[32];
 if (reg == (((((0)) & 0x01) | ((((2)) & 0x03) << 1) | ((0) & 0xfffffff) << 4))) return;
 jit_get_reg_name(&jit_debugging_disasm, buf, reg);
 strcat(thunk, " ");
 strcat(thunk, buf);
}

static int check_uninitialized_registers(jit_op *op, char *msg_buf)
{
 if (((jit_opcode) (op->code & 0xfff8)) != JIT_PROLOG) return 0;

 if (op->live_in->root != NULL) {
  char buf[4096];
  buf[0] = '\0';
  jit_tree_walk(op->live_in->root, print_regs, buf);
  if (strlen(buf)) {
   append_msg(msg_buf, "uninitialized register(s): %s", buf);
   return JIT_WARN_UNINITIALIZED_REG;
  }
 }
 return 0;
}

static int valid_size(int size) {
 switch (size) {
  case 1: case 2: case 4:



   return 1;
  default:
   return 0;
 }
}

static int valid_fsize(int size)
{
 return (size == 4) || (size == 8);
}

static int check_argument_sizes(jit_op *op, char *msg_buf)
{
 switch (((jit_opcode) (op->code & 0xfff8))) {
  case JIT_LD: case JIT_LDX: case JIT_ST: case JIT_STX:
   if (valid_size(op->arg_size)) return 0;
   break;

  case JIT_FLD: case JIT_FLDX: case JIT_FST: case JIT_FSTX:
  case JIT_FPUTARG: case JIT_FRET: case JIT_FRETVAL:
   if (valid_fsize(op->arg_size)) return 0;
   break;

  case JIT_DECL_ARG:
   if (((op->arg[0] == JIT_SIGNED_NUM) || (op->arg[0] == JIT_UNSIGNED_NUM)) && valid_size(op->arg[1])) return 0;
   if ((op->arg[0] == JIT_FLOAT_NUM) && valid_fsize(op->arg[1])) return 0;
   if ((op->arg[0] == JIT_PTR) && (op->arg[1] == sizeof(void *))) return 0;
   break;
  default:
   return 0;
 }

 append_msg(msg_buf, "invalid data size");
 return JIT_WARN_INVALID_DATA_SIZE;
}



static int check_register_types(struct jit *jit, jit_op *op, char *msg_buf)
{
 switch (((jit_opcode) (op->code & 0xfff8))) {
  case JIT_GETARG: {
   struct jit_func_info * info = jit_current_func_info(jit);
   if (info->args[op->arg[1]].type == JIT_FLOAT_NUM) {
    if (((((((op)->spec >> ((1) - 1) * 2) & 0x03) != 0x01) && ((((op)->spec >> ((1) - 1) * 2) & 0x03) != 0x03)) || (((op->arg[1 - 1]) & 0x01) == (1)))) return 0;
   } else {
    if (((((((op)->spec >> ((1) - 1) * 2) & 0x03) != 0x01) && ((((op)->spec >> ((1) - 1) * 2) & 0x03) != 0x03)) || (((op->arg[1 - 1]) & 0x01) == (0)))) return 0;
   }
   break;
  }
  case JIT_FST:
  case JIT_TRUNC:
  case JIT_CEIL:
  case JIT_ROUND:
  case JIT_FLOOR:
   if (((((((op)->spec >> ((1) - 1) * 2) & 0x03) != 0x01) && ((((op)->spec >> ((1) - 1) * 2) & 0x03) != 0x03)) || (((op->arg[1 - 1]) & 0x01) == (0))) && ((((((op)->spec >> ((2) - 1) * 2) & 0x03) != 0x01) && ((((op)->spec >> ((2) - 1) * 2) & 0x03) != 0x03)) || (((op->arg[2 - 1]) & 0x01) == (1)))) return 0;
   break;
  case JIT_EXT:
  case JIT_FLD:
   if (((((((op)->spec >> ((1) - 1) * 2) & 0x03) != 0x01) && ((((op)->spec >> ((1) - 1) * 2) & 0x03) != 0x03)) || (((op->arg[1 - 1]) & 0x01) == (1))) && ((((((op)->spec >> ((2) - 1) * 2) & 0x03) != 0x01) && ((((op)->spec >> ((2) - 1) * 2) & 0x03) != 0x03)) || (((op->arg[2 - 1]) & 0x01) == (0)))) return 0;
   break;
  case JIT_FLDX:
   if (((((((op)->spec >> ((1) - 1) * 2) & 0x03) != 0x01) && ((((op)->spec >> ((1) - 1) * 2) & 0x03) != 0x03)) || (((op->arg[1 - 1]) & 0x01) == (1))) && ((((((op)->spec >> ((2) - 1) * 2) & 0x03) != 0x01) && ((((op)->spec >> ((2) - 1) * 2) & 0x03) != 0x03)) || (((op->arg[2 - 1]) & 0x01) == (0))) && ((((((op)->spec >> ((3) - 1) * 2) & 0x03) != 0x01) && ((((op)->spec >> ((3) - 1) * 2) & 0x03) != 0x03)) || (((op->arg[3 - 1]) & 0x01) == (0)))) return 0;
   break;
  case JIT_FSTX:
   if (((((((op)->spec >> ((1) - 1) * 2) & 0x03) != 0x01) && ((((op)->spec >> ((1) - 1) * 2) & 0x03) != 0x03)) || (((op->arg[1 - 1]) & 0x01) == (0))) && ((((((op)->spec >> ((2) - 1) * 2) & 0x03) != 0x01) && ((((op)->spec >> ((2) - 1) * 2) & 0x03) != 0x03)) || (((op->arg[2 - 1]) & 0x01) == (0))) && ((((((op)->spec >> ((3) - 1) * 2) & 0x03) != 0x01) && ((((op)->spec >> ((3) - 1) * 2) & 0x03) != 0x03)) || (((op->arg[3 - 1]) & 0x01) == (1)))) return 0;
   break;
  case JIT_FORCE_SPILL:
  case JIT_FORCE_ASSOC:
   return 0;
  default:
   if (!op->fp && ((((((op)->spec >> ((1) - 1) * 2) & 0x03) != 0x01) && ((((op)->spec >> ((1) - 1) * 2) & 0x03) != 0x03)) || (((op->arg[1 - 1]) & 0x01) == (0))) && ((((((op)->spec >> ((2) - 1) * 2) & 0x03) != 0x01) && ((((op)->spec >> ((2) - 1) * 2) & 0x03) != 0x03)) || (((op->arg[2 - 1]) & 0x01) == (0))) && ((((((op)->spec >> ((3) - 1) * 2) & 0x03) != 0x01) && ((((op)->spec >> ((3) - 1) * 2) & 0x03) != 0x03)) || (((op->arg[3 - 1]) & 0x01) == (0)))) return 0;
   if (op->fp && ((((((op)->spec >> ((1) - 1) * 2) & 0x03) != 0x01) && ((((op)->spec >> ((1) - 1) * 2) & 0x03) != 0x03)) || (((op->arg[1 - 1]) & 0x01) == (1))) && ((((((op)->spec >> ((2) - 1) * 2) & 0x03) != 0x01) && ((((op)->spec >> ((2) - 1) * 2) & 0x03) != 0x03)) || (((op->arg[2 - 1]) & 0x01) == (1))) && ((((((op)->spec >> ((3) - 1) * 2) & 0x03) != 0x01) && ((((op)->spec >> ((3) - 1) * 2) & 0x03) != 0x03)) || (((op->arg[3 - 1]) & 0x01) == (1)))) return 0;
 }
 append_msg(msg_buf, "register type mismatch");
 return JIT_WARN_REGISTER_TYPE_MISMATCH;
}

static int jit_op_is_data_op(jit_op *op)
{
 while (op && ((((jit_opcode) (op->code & 0xfff8)) == JIT_LABEL) || (((jit_opcode) (op->code & 0xfff8)) == JIT_PATCH))) op = op->next;
 if (!op) return 0;

 jit_opcode code = ((jit_opcode) (op->code & 0xfff8));
 return ((code == JIT_DATA_BYTE) || (code == JIT_DATA_BYTES) || (code == JIT_DATA_REF_CODE) || (code == JIT_DATA_REF_DATA));
}

static int check_data_alignment(jit_op *op, char *msg_buf)
{
 if (jit_op_is_data_op(op) || (((jit_opcode) (op->code & 0xfff8)) == JIT_CODE_ALIGN)) return 0;
 if ((((jit_opcode) (op->code & 0xfff8)) == JIT_LABEL) || (((jit_opcode) (op->code & 0xfff8)) == JIT_PATCH)) return 0;
 jit_op * prev = op->prev;
 while (prev) {
  if ((((jit_opcode) (prev->code & 0xfff8)) == JIT_LABEL) || (((jit_opcode) (prev->code & 0xfff8)) == JIT_PATCH))
   prev = prev->prev;
  else break;
 }
 if (jit_op_is_data_op(prev)) {
  append_msg(msg_buf, "instruction follows unaligned data block");
  return JIT_WARN_UNALIGNED_CODE;
 }
 return 0;
}

static int check_data_references(jit_op *op, char *msg_buf)
{
 if (((((jit_opcode) (op->code & 0xfff8)) == JIT_REF_DATA) || (((jit_opcode) (op->code & 0xfff8)) == JIT_DATA_REF_DATA)) && !jit_op_is_data_op(op->jmp_addr)) {
  append_msg(msg_buf, "invalid data reference");
  return JIT_WARN_INVALID_DATA_REFERENCE;
 }
 return 0;
}

static int check_code_references(jit_op *op, char *msg_buf)
{
 if (((((jit_opcode) (op->code & 0xfff8)) == JIT_REF_CODE) || (((jit_opcode) (op->code & 0xfff8)) == JIT_DATA_REF_CODE)) && jit_op_is_data_op(op->jmp_addr)) {
  append_msg(msg_buf, "invalid code reference");
  return JIT_WARN_INVALID_CODE_REFERENCE;
 }
 return 0;
}


void jit_check_code(struct jit *jit, int warnings)
{
 char buf[8192];

 jit_expand_patches_and_labels(jit);
 jit_dead_code_analysis(jit, 0);
 jit_prepare_reg_counts(jit);
        jit_prepare_arguments(jit);
 jit_flw_analysis(jit);

 for (jit_op *op = jit_op_first(jit->ops); op; op = op->next) {
  if (((jit_opcode) (op->code & 0xfff8)) == JIT_PROLOG) jit->current_func = op;
  if (!op->debug_info) continue;
  buf[0] = '\0';

  if (warnings & JIT_WARN_DEAD_CODE) op->debug_info->warnings |= check_dead_code(op, buf);
  if (warnings & JIT_WARN_MISSING_PATCH) op->debug_info->warnings |= check_missing_patches(op, buf);
  if (warnings & JIT_WARN_OP_WITHOUT_EFFECT) op->debug_info->warnings |= check_op_without_effect(op, buf);
  if (warnings & JIT_WARN_UNINITIALIZED_REG) op->debug_info->warnings |= check_uninitialized_registers(op, buf);
  if (warnings & JIT_WARN_INVALID_DATA_SIZE) op->debug_info->warnings |= check_argument_sizes(op, buf);
  if (warnings & JIT_WARN_REGISTER_TYPE_MISMATCH) op->debug_info->warnings |= check_register_types(jit, op, buf);
  if (warnings & JIT_WARN_UNALIGNED_CODE) op->debug_info->warnings |= check_data_alignment(op, buf);
  if (warnings & JIT_WARN_INVALID_DATA_REFERENCE) op->debug_info->warnings |= check_data_references(op, buf);
  if (warnings & JIT_WARN_INVALID_CODE_REFERENCE) op->debug_info->warnings |= check_code_references(op, buf);

  if (op->debug_info->warnings) report_warning(jit, op, buf);
 }

 cleanup(jit);
}
static inline void jit_flw_initialize(struct jit * jit)
{
 struct jit_func_info *func_info;
 jit_op * op = jit_op_first(jit->ops);
 while (op) {
  op->live_in = jit_set_new();
  op->live_out = jit_set_new();

  for (int i = 0; i < 3; i++)
   if ((((op)->spec >> ((i + 1) - 1) * 2) & 0x03) == 0x01)
    jit_set_add(op->live_in, op->arg[i]);

  if (((jit_opcode) (op->code & 0xfff8)) == JIT_PROLOG) {
   func_info = (struct jit_func_info *)op->arg[1];
  }


  if (((jit_opcode) (op->code & 0xfff8)) == JIT_GETARG) {
   int arg_id = op->arg[1];
   if (func_info->args[arg_id].type != JIT_FLOAT_NUM) {
    jit_set_add(op->live_in, ((((0)) & 0x01) | ((((3)) & 0x03) << 1) | ((arg_id) & 0xfffffff) << 4));
   } else {
    jit_set_add(op->live_in, ((((1)) & 0x01) | ((((3)) & 0x03) << 1) | ((arg_id) & 0xfffffff) << 4));
    if (func_info->args[arg_id].overflow)
     jit_set_add(op->live_in, ((((1)) & 0x01) | ((((3)) & 0x03) << 1) | (1 << 3) | ((arg_id) & 0xfffffff) << 4));
   }
  }


  op = op->next;
 }
}

static inline void flw_analyze_prolog(struct jit * jit, jit_op * op, struct jit_func_info * func_info)
{

 for (int i = 0; i < func_info->general_arg_cnt + func_info->float_arg_cnt; i++) {
  if (func_info->args[i].type == JIT_FLOAT_NUM) {
   jit_set_remove(op->live_in, ((((1)) & 0x01) | ((((3)) & 0x03) << 1) | ((i) & 0xfffffff) << 4));
  } else {
   jit_set_remove(op->live_in, ((((0)) & 0x01) | ((((3)) & 0x03) << 1) | ((i) & 0xfffffff) << 4));
  }
 }
}

struct code_refs_cache {
 int size;
 jit_op **ops;
};

static inline void initialize_code_refs(struct code_refs_cache *code_refs, struct jit_func_info *func_info)
{
 jit_op *op = func_info->first_op->next;
 code_refs->size = 0;
 while (op && (((jit_opcode) (op->code & 0xfff8)) != JIT_PROLOG)) {
  if ((((jit_opcode) (op->code & 0xfff8)) == JIT_REF_CODE) || (((jit_opcode) (op->code & 0xfff8)) == JIT_DATA_REF_CODE))
   code_refs->size++;
  op = op->next;
 }
 code_refs->ops = malloc(sizeof(jit_op *) * code_refs->size);

 op = func_info->first_op->next;
 int i = 0;
 while (op && (((jit_opcode) (op->code & 0xfff8)) != JIT_PROLOG)) {
  if ((((jit_opcode) (op->code & 0xfff8)) == JIT_REF_CODE) || (((jit_opcode) (op->code & 0xfff8)) == JIT_DATA_REF_CODE))
   code_refs->ops[i++] = op;
  op = op->next;
 }
}
static inline int flw_analyze_op(struct jit * jit, jit_op * op, struct jit_func_info * func_info, int changed, struct code_refs_cache *code_refs)
{
 int live_out_size = jit_set_size(op->live_out);
 int live_in_size = jit_set_size(op->live_in);

 if (op->jmp_addr && (((jit_opcode) (op->code & 0xfff8)) != JIT_REF_CODE) && (((jit_opcode) (op->code & 0xfff8)) != JIT_DATA_REF_CODE))
  jit_set_addall(op->live_out, op->jmp_addr->live_in);

 if (op->code == (JIT_JMP | 0x01)) {

  if (code_refs->size < 0) initialize_code_refs(code_refs, func_info);
  for (int i = 0; i < code_refs->size; i++) {
   jit_set_addall(op->live_out, code_refs->ops[i]->jmp_addr->live_in);
  }

  goto skip;
 }

 if (op->code == (JIT_JMP | 0x02)) goto skip;

 if ((((jit_opcode) (op->code & 0xfff8)) == JIT_RET) || (((jit_opcode) (op->code & 0xfff8)) == JIT_FRET)) {
  op->live_out = jit_set_new();
  goto skip;
 }


 if (op->next) jit_set_addall(op->live_out, op->next->live_in);


skip:
 jit_set_addall(op->live_in, op->live_out);

 for (int i = 0; i < 3; i++)
  if ((((op)->spec >> ((i + 1) - 1) * 2) & 0x03) == 0x03) jit_set_remove(op->live_in, op->arg[i]);

 for (int i = 0; i < 3; i++)
  if ((((op)->spec >> ((i + 1) - 1) * 2) & 0x03) == 0x01) jit_set_add(op->live_in, op->arg[i]);

 if (((jit_opcode) (op->code & 0xfff8)) == JIT_PROLOG) flw_analyze_prolog(jit, op, func_info);

 if (changed) return changed;
 if (live_out_size != jit_set_size(op->live_out)) return 1;
 if (live_in_size != jit_set_size(op->live_in)) return 1;

 return 0;
}

static inline void analyze_function(struct jit *jit, jit_op *first_op, jit_op *last_op)
{
 int changed;
 struct code_refs_cache code_refs = { -1, NULL };

 struct jit_func_info * func_info = (struct jit_func_info *)first_op->arg[1];

 do {
  changed = 0;
  jit_op * op = last_op;
  while (1) {
   changed |= flw_analyze_op(jit, op, func_info, changed, &code_refs);
   if (op == first_op) break;
   op = op->prev;
  }
 } while (changed);
 if (code_refs.ops) free(code_refs.ops);

}

static inline void jit_flw_analysis(struct jit * jit)
{
 jit_flw_initialize(jit);
 jit_op *op = jit_op_first(jit->ops);

 while (op) {
  if (((jit_opcode) (op->code & 0xfff8)) == JIT_PROLOG) {
   jit_op *first = op;
   while (1) {
    if ((op->next == NULL) || (((jit_opcode) (op->next->code & 0xfff8)) == JIT_PROLOG)) {
     jit_op *second = op;
     analyze_function(jit, first, second);
     break;
    }
    op = op->next;
   }
  }
  op = op->next;
 }
}

static inline void mark_livecode(jit_op *op)
{
 while (op) {
  if (op->in_use) return;
  op->in_use = 1;
  if (op->jmp_addr) mark_livecode(op->jmp_addr);
  if (((jit_opcode) (op->code & 0xfff8)) == JIT_RET) return;
  if (((jit_opcode) (op->code & 0xfff8)) == JIT_FRET) return;
  if (((jit_opcode) (op->code & 0xfff8)) == JIT_JMP) return;
  op = op->next;
 }
}


static void jit_dead_code_analysis(struct jit *jit, int remove_dead_code)
{
 for (jit_op *op = jit_op_first(jit->ops); op; op = op->next)
  op->in_use = 0;


 for (jit_op *op = jit_op_first(jit->ops); op; op = op->next) {
  if (((jit_opcode) (op->code & 0xfff8)) == JIT_PROLOG) mark_livecode(op);
  if (((jit_opcode) (op->code & 0xfff8)) == JIT_DATA_REF_CODE) mark_livecode(op->jmp_addr);
 }



 for (jit_op *op = jit_op_first(jit->ops); op; op = op->next) {
  if (((jit_opcode) (op->code & 0xfff8)) == JIT_CODESTART) op->in_use = 1;
  if (((jit_opcode) (op->code & 0xfff8)) == JIT_DATA_BYTE) op->in_use = 1;
  if (((jit_opcode) (op->code & 0xfff8)) == JIT_DATA_REF_CODE) op->in_use = 1;
  if (((jit_opcode) (op->code & 0xfff8)) == JIT_DATA_REF_DATA) op->in_use = 1;
  if (((jit_opcode) (op->code & 0xfff8)) == JIT_CODE_ALIGN) op->in_use = 1;
  if (((jit_opcode) (op->code & 0xfff8)) == JIT_LABEL) op->in_use = 1;
  if (((jit_opcode) (op->code & 0xfff8)) == JIT_PATCH) op->in_use = 1;
  if (((jit_opcode) (op->code & 0xfff8)) == JIT_COMMENT) op->in_use = 1;
  if (((jit_opcode) (op->code & 0xfff8)) == JIT_MARK) op->in_use = 1;
 }

 if (!remove_dead_code) return;

 jit_op *op = jit_op_first(jit->ops);

 while (op) {
  if (!op->in_use) {
   if (((jit_opcode) (op->code & 0xfff8)) == JIT_FULL_SPILL) goto skip;
   jit_op *next = op->next;
   jit_op_delete(op);
   op = next;
   continue;
  }
skip:
  op = op->next;
 }

}
static inline void unload_reg(jit_op * op, jit_hw_reg * hreg, long virt_reg);
static inline void load_reg(struct jit_op * op, jit_hw_reg * hreg, long reg);



static inline jit_rmap * rmap_init()
{
 jit_rmap * res = malloc(sizeof(jit_rmap));
 res->map = NULL;
 return res;
}

jit_hw_reg * rmap_get(jit_rmap * rmap, jit_value reg)
{
 jit_tree * found = jit_tree_search(rmap->map, reg);
 if (found) return (jit_hw_reg *) found->value;

 return NULL;
}

static inline jit_hw_reg * rmap_is_associated_aux(jit_tree * n, int reg_id, int fp, jit_value * virt_reg)
{
 if (n == NULL) return NULL;
 jit_hw_reg * r = (jit_hw_reg *) n->value;

 if ((r->fp == fp) && (r->id == reg_id)) {
  if (virt_reg) *virt_reg = (jit_value) n->key;
  return r;
 }

 r = rmap_is_associated_aux(n->left, reg_id, fp, virt_reg);
 if (r) return r;
 else return rmap_is_associated_aux(n->right, reg_id, fp, virt_reg);
}






static jit_hw_reg * rmap_is_associated(jit_rmap * rmap, int reg_id, int fp, jit_value * virt_reg)
{
 return rmap_is_associated_aux(rmap->map, reg_id, fp, virt_reg);
}

static void rmap_assoc(jit_rmap * rmap, jit_value reg, jit_hw_reg * hreg)
{
 rmap->map = jit_tree_insert(rmap->map, reg, hreg, NULL);
}

static void rmap_unassoc(jit_rmap * rmap, jit_value reg)
{
 rmap->map = jit_tree_delete(rmap->map, reg, NULL);
}

static jit_rmap * rmap_clone(jit_rmap * rmap)
{
 jit_rmap * res = malloc(sizeof(jit_rmap));
 res->map = jit_tree_clone(rmap->map);
 return res;
}

static int rmap_subset(jit_op * op, jit_tree * current, jit_tree * target)
{
 if (current == NULL) return 1;


 jit_set * tgt_livein = op->jmp_addr->live_in;

 if (!jit_set_get(tgt_livein, current->key)) goto skip;

 jit_tree * found = jit_tree_search(target, current->key);
 if ((!found) || (current->value != found->value)) return 0;

skip:
 return rmap_subset(op, current->left, target) && rmap_subset(op, current->right, target);
}





static int rmap_equal(jit_op * op, jit_rmap * current, jit_rmap * target)
{
 return rmap_subset(op, current->map, target->map) && rmap_subset(op, target->map, current->map);
}
static void rmap_sync_aux(jit_tree * current, jit_tree * target, jit_op * op, int mode)
{
 if (current == NULL) return;


 if ((mode == (2)) && (!jit_set_get(op->live_out, current->key))) goto skip;


 if ((mode == (1)) && (!jit_set_get(op->jmp_addr->live_in, current->key))) goto skip;

 jit_tree * found = jit_tree_search(target, current->key);
 int i = current->key;

 if ((!found) || (current->value != found->value)) {
  jit_hw_reg * hreg = (jit_hw_reg *) current->value;
  switch (mode) {
   case (1): unload_reg(op, hreg, i); break;
   case (2): load_reg(op, hreg, i); break;
   default: assert(0);
  }
 }
skip:
 rmap_sync_aux(current->left, target, op, mode);
 rmap_sync_aux(current->right, target, op, mode);
}

static void rmap_sync(jit_op * op, jit_rmap * current, jit_rmap * target, int mode)
{
 rmap_sync_aux(current->map, target->map, op, mode);
}

static int candidate_score(jit_op * op, jit_value virtreg, jit_hw_reg * hreg, int * spill, jit_value * associated_virtreg)
{
 int score = 0;
 score -= hreg->priority;

 jit_value x;
 int hw_associated = (rmap_is_associated(op->regmap, hreg->id, hreg->fp, &x) != NULL);

 int alive = 0;
 if (hw_associated) {
  alive = (jit_set_get(op->live_in, x) || jit_set_get(op->live_out, x));
 }
 if (!alive) score += 10000;

 *spill = 0;
 if (hw_associated) {

  score -= 100000;
  *spill = 1;

  *associated_virtreg = x;

  jit_tree * hint_node = jit_tree_search(op->allocator_hints, x);
  int is_to_be_used = (hint_node != NULL);

  if (!is_to_be_used) score += 50000;
  else {
   struct jit_allocator_hint * hint = (struct jit_allocator_hint *)hint_node->value;
   int used_in_steps = -(hint->last_pos - op->normalized_pos);
   if (hw_associated && (used_in_steps == 0)) return INT_MIN;
   else score += (used_in_steps * 5);
  }
 }
 return score;
}
static jit_hw_reg * rmap_spill_candidate(struct jit_reg_allocator * al, jit_op * op, jit_value virtreg, int * spill, jit_value * reg_to_spill, int callee_saved)
{
 jit_reg r = (jit_reg) virtreg;
 jit_hw_reg * regs;
 int reg_count;
 jit_hw_reg * result = NULL;
 int best_score = INT_MIN;

 if (((r) & 0x01) == (0)) {
  regs = al->gp_regs;
  reg_count = al->gp_reg_cnt;
 } else {
  regs = al->fp_regs;
  reg_count = al->fp_reg_cnt;
 }

 int sp = 0;
 for (int i = 0; i < reg_count; i++) {
  if (callee_saved && !regs[i].callee_saved) continue;
  jit_value assoc = 0;
  int score = candidate_score(op, virtreg, &(regs[i]), &sp, &assoc);
  if (score > best_score) {
   if (sp) {
    *reg_to_spill = assoc;
    *spill = sp;
   } else {
    *reg_to_spill = -1;
    *spill = 0;
   }
   result = &(regs[i]);
   best_score = score;
  }
 }
 return result;
}

void rmap_free(jit_rmap * regmap)
{
 if (!regmap) return;
 jit_tree_free(regmap->map);
 free(regmap);
}
static void insert_reg_op(int opcode, jit_op * op, jit_value r1, jit_value r2)
{
 jit_op * o = jit_op_new(opcode, (((0x00) << 4) | ((0x02) << 2) | (0x02)), r1, r2, 0, 0);
 o->r_arg[0] = o->arg[0];
 o->r_arg[1] = o->arg[1];
 jit_op_prepend(op, o);
}
static void unload_reg(jit_op * op, jit_hw_reg * hreg, jit_value virt_reg)
{
 insert_reg_op(JIT_UREG, op, virt_reg, hreg->id);
}

static void sync_reg(jit_op * op, jit_hw_reg * hreg, jit_value virt_reg)
{
 insert_reg_op(JIT_SYNCREG, op, virt_reg, hreg->id);
}

static void load_reg(jit_op * op, jit_hw_reg * hreg, jit_value reg)
{
 insert_reg_op(JIT_LREG, op, hreg->id, reg);
}




static void rename_reg(jit_op * op, int r1, int r2)
{
 insert_reg_op(JIT_RENAMEREG, op, r1, r2);
}

static jit_hw_reg * make_free_reg(struct jit_reg_allocator * al, jit_op * op, jit_value for_reg)
{
 int spill = 0;
 jit_value spill_candidate = -1;
 jit_hw_reg * hreg = rmap_spill_candidate(al, op, for_reg, &spill, &spill_candidate, 0);

 if (spill) {
  if (jit_set_get(op->live_in, spill_candidate))
   unload_reg(op, hreg, spill_candidate);
  rmap_unassoc(op->regmap, spill_candidate);
 }
 return hreg;
}
static void assign_regs_for_args(struct jit_reg_allocator * al, jit_op * op)
{

 struct jit_func_info * info = (struct jit_func_info *) op->arg[1];

 int assoc_gp_regs = 0;
 for (int i = 0; i < info->general_arg_cnt + info->float_arg_cnt; i++) {
  struct jit_inp_arg *arg = &info->args[i];
  int isfp_arg = (arg->type == JIT_FLOAT_NUM);
  if (!isfp_arg && (assoc_gp_regs < al->gp_arg_reg_cnt)) {
   rmap_assoc(op->regmap, ((((0)) & 0x01) | ((((3)) & 0x03) << 1) | ((i) & 0xfffffff) << 4), al->gp_arg_regs[assoc_gp_regs]);
   assoc_gp_regs++;
  }

  if (isfp_arg && (arg->passed_by_reg) && (arg->size == sizeof(double))) {
   jit_hw_reg *hreg = NULL;
   for (int j = 0; j < al->fp_arg_reg_cnt; j++) {
    if (al->fp_arg_regs[j]->id == arg->location.reg) {
     hreg = al->fp_arg_regs[j];
     break;
    }
   }
   if (hreg) rmap_assoc(op->regmap, ((((1)) & 0x01) | ((((3)) & 0x03) << 1) | ((i) & 0xfffffff) << 4), hreg);
  }
 }
}


static void prepare_registers_for_call(struct jit_reg_allocator * al, jit_op * op)
{
 jit_value r, reg;
 jit_hw_reg * hreg = NULL;

 if (al->ret_reg) hreg = rmap_is_associated(op->regmap, al->ret_reg->id, 0, &r);
 if (hreg) {



  int alive = (jit_set_get(op->live_out, r) || (jit_set_get(op->live_in, r)));
  if (!alive) goto skip;
  int spill;
  jit_value spill_reg;
  jit_hw_reg * freereg = rmap_spill_candidate(al, op, r, &spill, &spill_reg, 1);
  if (freereg && !spill) {

   rename_reg(op, freereg->id, al->ret_reg->id);

   rmap_unassoc(op->regmap, r);
   rmap_assoc(op->regmap, r, freereg);
  } else {
   sync_reg(op, hreg, r);
  }
 }
skip:



 if (al->fpret_reg) {
  hreg = rmap_is_associated(op->regmap, al->fpret_reg->id, 1, &r);
  if (hreg) sync_reg(op, hreg, r);
 }



 int args = ((op->arg[0]) < (al->gp_arg_reg_cnt) ? (op->arg[0]) : (al->gp_arg_reg_cnt));
 for (int q = 0; q < args; q++) {
  jit_hw_reg * hreg = rmap_is_associated(op->regmap, al->gp_arg_regs[q]->id, 0, &reg);
  if (hreg) {
   if (jit_set_get(op->live_out, reg)) unload_reg(op, hreg, reg);
   rmap_unassoc(op->regmap, reg);
  }
 }
 args = ((op->arg[1]) < (al->fp_arg_reg_cnt) ? (op->arg[1]) : (al->fp_arg_reg_cnt));
 for (int q = 0; q < args; q++) {
  jit_hw_reg * hreg = rmap_is_associated(op->regmap, al->fp_arg_regs[q]->id, 1, &reg);
  if (hreg) {
   if ((hreg->id != al->fpret_reg->id) && jit_set_get(op->live_out, reg)) unload_reg(op, hreg, reg);
   rmap_unassoc(op->regmap, reg);
  }
 }
}







static int assign_ret_reg(jit_op * op, jit_hw_reg * ret_reg)
{
 rmap_assoc(op->regmap, op->arg[0], ret_reg);
 return 1;
}

static int assign_getarg(jit_op * op, struct jit_reg_allocator * al)
{

 int arg_id = op->arg[1];
 struct jit_inp_arg * arg = &(al->current_func_info->args[arg_id]);
 int reg_id = (((arg->type == JIT_FLOAT_NUM ? (1) : (0)) & 0x01) | ((((3)) & 0x03) << 1) | ((arg_id) & 0xfffffff) << 4);
 if (!jit_set_get(op->live_out, reg_id)) {







  if (arg->type != JIT_FLOAT_NUM)

  {
   jit_hw_reg * hreg = rmap_get(op->regmap, reg_id);
   if (hreg) {
    rmap_unassoc(op->regmap, reg_id);
    rmap_assoc(op->regmap, op->arg[0], hreg);
    op->r_arg[0] = hreg->id;
    op->r_arg[1] = op->arg[1];

    op->code = JIT_NOP;
    return 1;
   }
  }
 }
 return 0;
}

static void spill_ret_retreg(jit_op * op, jit_hw_reg * ret_reg)
{
 jit_value r;
 if (ret_reg) {
  jit_hw_reg * hreg = rmap_is_associated(op->regmap, ret_reg->id, ret_reg->fp, &r);
  if (hreg) rmap_unassoc(op->regmap, r);
 }
}




static int assign_jmp(jit_op * op, struct jit_reg_allocator * al)
{
 if (op->code == (JIT_JMP | 0x02)) return 0;
 jit_value reg;
 for (int i = 0; i < al->gp_reg_cnt; i++) {
  jit_hw_reg * hreg = rmap_is_associated(op->regmap, al->gp_regs[i].id, 0, &reg);
  if (hreg && jit_set_get(op->live_out, reg)) sync_reg(op, hreg, reg);
 }

 for (int i = 0; i < al->fp_reg_cnt; i++) {
  jit_hw_reg * hreg = rmap_is_associated(op->regmap, al->fp_regs[i].id, 1, &reg);
  if (hreg && jit_set_get(op->live_out, reg)) sync_reg(op, hreg, reg);
 }
 return 0;
}

static int assign_call(jit_op * op, struct jit_reg_allocator * al)
{
 spill_ret_retreg(op, al->ret_reg);
 spill_ret_retreg(op, al->fpret_reg);
 return 1;



}

static int spill_all_registers(jit_op *op, struct jit_reg_allocator * al)
{
 jit_value reg;
 for (int i = 0; i < al->gp_reg_cnt; i++) {
  jit_hw_reg * hreg = rmap_is_associated(op->regmap, al->gp_regs[i].id, 0, &reg);
  if (hreg && (jit_set_get(op->live_out, reg))) {
   if (op->in_use) unload_reg(op, hreg, reg);
   rmap_unassoc(op->regmap, reg);
  }
 }

 for (int i = 0; i < al->fp_reg_cnt; i++) {
  jit_hw_reg * hreg = rmap_is_associated(op->regmap, al->fp_regs[i].id, 1, &reg);
  if (hreg && (jit_set_get(op->live_out, reg))) {
   if (op->in_use) unload_reg(op, hreg, reg);
   rmap_unassoc(op->regmap, reg);
  }
 }

 return 1;
}

static int force_spill(jit_op *op)
{
 jit_value reg = op->arg[0];
 jit_hw_reg *hreg = rmap_get(op->regmap, reg);
 if (hreg) {
  unload_reg(op, hreg, reg);
  rmap_unassoc(op->regmap, reg);
 }
 return 1;
}

static int force_assoc(jit_op *op, struct jit_reg_allocator *al)
{
 jit_hw_reg *hreg = (op->arg[1] == 0 ? &al->gp_regs[op->arg[2]] : &al->fp_regs[op->arg[2]]);
 rmap_assoc(op->regmap, op->arg[0], hreg);

 load_reg(op, hreg, op->arg[0]);
 return 1;
}

static void associate_register_alias(struct jit_reg_allocator * al, jit_op * op, int i)
{
 if ((int)op->arg[i] == (int)(((((0)) & 0x01) | ((((2)) & 0x03) << 1) | ((1) & 0xfffffff) << 4))) op->r_arg[i] = al->ret_reg->id;
 else if ((int)op->arg[i] == (int)(((((0)) & 0x01) | ((((2)) & 0x03) << 1) | ((0) & 0xfffffff) << 4))) op->r_arg[i] = al->fp_reg;
 else assert(0);
}

static int is_transfer_op(jit_op *op)
{
 jit_opcode code = ((jit_opcode) (op->code & 0xfff8));
 return (code == JIT_TRANSFER_ADD)
  || (code == JIT_TRANSFER_SUB)
  || (code == JIT_TRANSFER_OR)
  || (code == JIT_TRANSFER_XOR)
  || (code == JIT_TRANSFER_AND);
}

static void associate_register(struct jit_reg_allocator * al, jit_op * op, int i)
{
 jit_hw_reg * reg = rmap_get(op->regmap, op->arg[i]);
 if (((jit_opcode) (op->code & 0xfff8)) == JIT_FRETVAL) printf(":JJJ:%i\n", reg->id);
 if (reg) op->r_arg[i] = reg->id;
 else {
  if (!is_transfer_op(op)

  && (((jit_opcode) (op->code & 0xfff8)) != JIT_CALL)

  ) {
   reg = make_free_reg(al, op, op->arg[i]);
   rmap_assoc(op->regmap, op->arg[i], reg);

   op->r_arg[i] = reg->id;
   if (jit_set_get(op->live_in, op->arg[i]))
    load_reg(op, rmap_get(op->regmap, op->arg[i]), op->arg[i]);
  } else op->r_arg[i] = -1;
 }
}

static void assign_regs(struct jit * jit, struct jit_op * op)
{
 int i;
 int skip = 0;
 struct jit_reg_allocator * al = jit->reg_al;



 if (((jit_opcode) (op->code & 0xfff8)) == JIT_PROLOG) {

  struct jit_func_info * info = (struct jit_func_info *) op->arg[1];
  al->current_func_info = info;



  assign_regs_for_args(al, op);
 } else {

  if (op->prev) {
   rmap_free(op->regmap);
   op->regmap = rmap_clone(op->prev->regmap);
  }
 }


 switch (((jit_opcode) (op->code & 0xfff8))) {
  case JIT_PREPARE: prepare_registers_for_call(al, op); break;

  case JIT_PUTARG: skip = 1; break;
  case JIT_FPUTARG: skip = 1; break;


  case JIT_RETVAL: skip = assign_ret_reg(op, al->ret_reg); break;


  case JIT_FRETVAL: skip = assign_ret_reg(op, al->fpret_reg); break;

  case JIT_GETARG: skip = assign_getarg(op, al); break;
  case JIT_CALL: skip = assign_call(op, al); break;
  case JIT_JMP: skip = assign_jmp(op, al); break;
  case JIT_FULL_SPILL: skip = spill_all_registers(op, al); break;
  case JIT_FORCE_SPILL: skip = force_spill(op); break;
  case JIT_FORCE_ASSOC: skip = force_assoc(op, al); break;

  default: break;
 }

 if (skip) return;


 for (i = 0; i < 3; i++) {
  if (((((op)->spec >> ((i + 1) - 1) * 2) & 0x03) == 0x01) || ((((op)->spec >> ((i + 1) - 1) * 2) & 0x03) == 0x03)) {
   jit_reg virt_reg = (jit_reg) op->arg[i];
   if ((((virt_reg) >> 1) & 0x03) == (2)) associate_register_alias(al, op, i);
   else associate_register(al, op, i);
  } else if ((((op)->spec >> ((i + 1) - 1) * 2) & 0x03) == 0x02) {

   op->r_arg[i] = op->arg[i];
  }
 }
}

static void mark_calleesaved_regs(jit_tree * hint, jit_op * op)
{
 if (hint == NULL) return;
 struct jit_allocator_hint * h = (struct jit_allocator_hint *) hint->value;
 jit_value reg = (jit_value) hint->key;
 if (jit_set_get(op->live_out, reg)) h->should_be_calleesaved++;

 mark_calleesaved_regs(hint->left, op);
 mark_calleesaved_regs(hint->right, op);
}




static void hints_refcount_inc(jit_tree * hints);
void jit_collect_statistics(struct jit * jit)
{
 int i, j;
 int ops_from_return = 0;
 jit_tree * last_hints = NULL;

 for (jit_op * op = jit_op_last(jit->ops); op != NULL; op = op->prev) {
  jit_tree * new_hints = jit_tree_clone(last_hints);
  op->normalized_pos = ops_from_return;



  jit_value regs[3];
  int found_regs = 0;
  for (i = 0; i < 3; i++)
   if (((((op)->spec >> ((i + 1) - 1) * 2) & 0x03) == 0x01) || ((((op)->spec >> ((i + 1) - 1) * 2) & 0x03) == 0x03)) {
    int found = 0;
    jit_value reg = op->arg[i];
    for (j = 0; j < found_regs; j++) {
     if (regs[j] == reg) {
      found = 1;
      break;
     }
    }
    if (!found) regs[found_regs++] = reg;
   }


  for (i = 0; i < found_regs; i++) {
   jit_value reg = regs[i];

   jit_tree * hint = jit_tree_search(new_hints, reg);
   struct jit_allocator_hint * new_hint = malloc(sizeof(struct jit_allocator_hint));
   if (hint) memcpy(new_hint, hint->value, sizeof(struct jit_allocator_hint));
   else {
    new_hint->last_pos = 0;
    new_hint->should_be_calleesaved = 0;
    new_hint->should_be_eax = 0;
   }
   new_hint->refs = 0;

   new_hint->last_pos = ops_from_return;

   if ((((jit_opcode) (op->code & 0xfff8)) == JIT_RETVAL) || (((jit_opcode) (op->code & 0xfff8)) == JIT_RET))
    new_hint->should_be_eax++;

   new_hints = jit_tree_insert(new_hints, reg, new_hint, NULL);
  }

  if (((jit_opcode) (op->code & 0xfff8)) == JIT_CALL) mark_calleesaved_regs(new_hints, op);

  hints_refcount_inc(new_hints);
  op->allocator_hints = new_hints;

  if (((jit_opcode) (op->code & 0xfff8)) == JIT_PROLOG) {
   last_hints = NULL;
   ops_from_return = 0;
  } else {
   last_hints = new_hints;
   ops_from_return++;
  }
 }
}

static void hints_refcount_inc(jit_tree * hints)
{
 if (hints == NULL) return;
 ((struct jit_allocator_hint*) hints->value)->refs++;
 hints_refcount_inc(hints->left);
 hints_refcount_inc(hints->right);
}

void jit_allocator_hints_free(jit_tree * hints)
{
 if (hints == NULL) return;
 jit_allocator_hints_free(hints->left);
 jit_allocator_hints_free(hints->right);

 int refs = --((struct jit_allocator_hint*) hints->value)->refs;
 if (refs == 0) free(hints->value);

 free(hints);
}







static inline void jump_adjustment(struct jit * jit, jit_op * op)
{
 if (op->code == (JIT_JMP | 0x02)) {
  jit_rmap * cur_regmap = op->regmap;
  jit_rmap * tgt_regmap = op->jmp_addr->regmap;

  rmap_sync(op, cur_regmap, tgt_regmap, (1));
  rmap_sync(op, tgt_regmap, cur_regmap, (2));
 }
}
static inline void branch_adjustment(struct jit * jit, jit_op * op)
{
 if (!is_cond_branch_op(op)) return;
 jit_rmap * cur_regmap = op->regmap;
 jit_rmap * tgt_regmap = op->jmp_addr->regmap;

 if (!rmap_equal(op, cur_regmap, tgt_regmap)) {




  switch (((jit_opcode) (op->code & 0xfff8))) {
   case JIT_BEQ: op->code = JIT_BNE | (op->code & 0x7); break;
   case JIT_BGT: op->code = JIT_BLE | (op->code & 0x7); break;
   case JIT_BGE: op->code = JIT_BLT | (op->code & 0x7); break;
   case JIT_BNE: op->code = JIT_BEQ | (op->code & 0x7); break;
   case JIT_BLT: op->code = JIT_BGE | (op->code & 0x7); break;
   case JIT_BLE: op->code = JIT_BGT | (op->code & 0x7); break;

   case JIT_BOADD: op->code = JIT_BNOADD | (op->code & 0x7); break;
   case JIT_BOSUB: op->code = JIT_BNOSUB | (op->code & 0x7); break;
   case JIT_BNOADD: op->code = JIT_BOADD | (op->code & 0x7); break;
   case JIT_BNOSUB: op->code = JIT_BOSUB | (op->code & 0x7); break;

   case JIT_FBEQ: op->code = JIT_FBNE | (op->code & 0x7); break;
   case JIT_FBGT: op->code = JIT_FBLE | (op->code & 0x7); break;
   case JIT_FBGE: op->code = JIT_FBLT | (op->code & 0x7); break;
   case JIT_FBNE: op->code = JIT_FBEQ | (op->code & 0x7); break;
   case JIT_FBLT: op->code = JIT_FBGE | (op->code & 0x7); break;
   case JIT_FBLE: op->code = JIT_FBGT | (op->code & 0x7); break;
   default: break;
  }

  jit_op * o = jit_op_new(JIT_JMP | 0x02, (((0x00) << 4) | ((0x00) << 2) | (0x02)), op->arg[0], 0, 0, 0);
  o->r_arg[0] = op->r_arg[0];

  o->regmap = rmap_clone(op->regmap);

  o->live_in = jit_set_clone(op->live_in);
  o->live_out = jit_set_clone(op->live_out);
  o->jmp_addr = op->jmp_addr;

  if (!jit_is_label(jit, (void *)op->r_arg[0])) {
   op->jmp_addr->arg[0] = (jit_value) o;
   op->jmp_addr->r_arg[0] = (jit_value) o;
  }

  jit_op_append(op, o);

  jit_op * o2 = jit_op_new(JIT_PATCH, (((0x00) << 4) | ((0x00) << 2) | (0x02)), (jit_value) op, 0, 0, 0);
  o2->r_arg[0] = o2->arg[0];
  jit_op_append(o, o2);

  op->arg[0] = (jit_value) o2;
  op->r_arg[0] = (jit_value) o2;
  op->jmp_addr = o2;
 }
}

void jit_assign_regs(struct jit * jit)
{
 for (jit_op * op = jit_op_first(jit->ops); op != NULL; op = op->next)
  op->regmap = rmap_init();

 for (jit_op * op = jit_op_first(jit->ops); op != NULL; op = op->next)
  assign_regs(jit, op);

 for (jit_op * op = jit_op_first(jit->ops); op != NULL; op = op->next)
  branch_adjustment(jit, op);

 for (jit_op * op = jit_op_first(jit->ops); op != NULL; op = op->next)
  jump_adjustment(jit, op);
}

void jit_reg_allocator_free(struct jit_reg_allocator * a)
{
 if (a->fp_regs) free(a->fp_regs);
 free(a->gp_regs);
 if (a->fp_arg_regs) free(a->fp_arg_regs);
 if (a->gp_arg_regs) free(a->gp_arg_regs);
 free(a);
}




int jit_reg_in_use(jit_op * op, int reg, int fp)
{
 jit_value virt_reg;
 if (rmap_is_associated(op->regmap, reg, fp, &virt_reg)
 && ((jit_set_get(op->live_in, virt_reg) || (jit_set_get(op->live_out, virt_reg))))) return 1;
 else return 0;
}





jit_hw_reg * jit_get_unused_reg_with_index(struct jit_reg_allocator * al, jit_op * op, int fp, int index)
{
 jit_hw_reg * regs;
 int reg_count;

 if (!fp) {
  regs = al->gp_regs;
  reg_count = al->gp_reg_cnt;
 } else {
  regs = al->fp_regs;
  reg_count = al->fp_reg_cnt;
 }
 for (int i = 0; i < reg_count; i++) {
  if (regs[i].callee_saved) continue;
  if (!jit_reg_in_use(op, regs[i].id, fp)) {
   if (index == 0) return &(regs[i]);
   else index--;
  }
 }
 return NULL;
}




jit_hw_reg * jit_get_unused_reg(struct jit_reg_allocator * al, jit_op * op, int fp)
{
 return jit_get_unused_reg_with_index(al, op, fp, 0);
}






struct jit_op * jit_add_op(struct jit * jit, unsigned short code, unsigned char spec, long arg1, long arg2, long arg3, unsigned char arg_size, struct jit_debug_info *debug_info)
{
 struct jit_op * r = jit_op_new(code, spec, arg1, arg2, arg3, arg_size);
 r->debug_info = debug_info;
 jit_op_append(jit->last_op, r);
 jit->last_op = r;

 return r;
}

struct jit_op * jit_add_fop(struct jit * jit, unsigned short code, unsigned char spec, long arg1, long arg2, long arg3, double flt_imm, unsigned char arg_size, struct jit_debug_info *debug_info)
{
 struct jit_op * r = jit_add_op(jit, code, spec, arg1, arg2, arg3, arg_size, debug_info);
 r->fp = 1;
 r->flt_imm = flt_imm;

 return r;
}

struct jit_debug_info *jit_debug_info_new(const char *filename, const char *function, int lineno)
{
 struct jit_debug_info *r = malloc(sizeof(struct jit_debug_info));
 r->filename = filename;
 r->function = function;
 r->lineno = lineno;
 r->warnings = 0;
 return r;
}

struct jit * jit_init()
{
 struct jit * r = malloc(sizeof(struct jit));

 r->ops = jit_op_new(JIT_CODESTART, (((0x00) << 4) | ((0x00) << 2) | (0x00)), 0, 0, 0, 0);
 r->last_op = r->ops;
 r->optimizations = 0;

 r->buf = NULL;
 r->mmaped_buf = 0;
 r->labels = NULL;
 r->reg_al = jit_reg_allocator_create();
 jit_enable_optimization(r, (0x04) | (0x01) | (0x08));

 return r;
}

jit_op *jit_add_prolog(struct jit * jit, void * func, struct jit_debug_info *debug_info)
{
        jit_op * op = jit_add_op(jit, JIT_PROLOG , (((0x00) << 4) | ((0x00) << 2) | (0x02)), (long)func, 0, 0, 0, NULL);
        struct jit_func_info * info = malloc(sizeof(struct jit_func_info));
        op->arg[1] = (long)info;
 op->debug_info = debug_info;

        jit->current_func = op;

 info->first_op = op;
        info->allocai_mem = 0;
        info->general_arg_cnt = 0;
        info->float_arg_cnt = 0;
 return op;
}

jit_label * jit_get_label(struct jit * jit)
{
        jit_label * r = malloc(sizeof(jit_label));
        jit_add_op(jit, JIT_LABEL, (((0x00) << 4) | ((0x00) << 2) | (0x02)), (long)r, 0, 0, 0, NULL);
        r->next = jit->labels;
        jit->labels = r;
        return r;
}






static int jit_imm_overflow(struct jit *jit, jit_op *op, long value)
{
 long abs_value = (value < 0 ? - value : value);
 if (((jit_opcode) (op->code & 0xfff8)) == JIT_HMUL) return 1;
 if (((jit_opcode) (op->code & 0xfff8)) == JIT_SUBC) return 1;
 if (op->code == (JIT_LD | 0x02 | 0x00)) return 1;
 if (op->code == (JIT_LD | 0x02 | 0x04)) return 1;

 if (op->code == (JIT_LSH | 0x02 | 0x00)) return (value < 0) || (value > 31);
 if (op->code == (JIT_RSH | 0x02 | 0x00)) return (value < 0) || (value > 31);
 if (op->code == (JIT_RSH | 0x02 | 0x04)) return (value < 0) || (value > 31);

 if ((op->code == (JIT_LDX | 0x02 | 0x00)) && (op->arg_size == 1)) return (value < -255) || (value > 255);
 if ((op->code == (JIT_LDX | 0x02 | 0x00)) && (op->arg_size == 2)) return (value < -255) || (value > 255);;
 if ((op->code == (JIT_LDX | 0x02 | 0x04)) && (op->arg_size == 2)) return (value < -255) || (value > 255);;
 if ((op->code == (JIT_STX | 0x02)) && (op->arg_size == 2)) return (value < -255) || (value > 255);;


 if ((op->code == (JIT_LDX | 0x02 | 0x04)) && (op->arg_size == 1) && (arm32_imm_rotate(abs_value) >= 0)) return 0;
 if ((op->code == (JIT_LDX | 0x02 | 0x04)) && (op->arg_size == 4) && (arm32_imm_rotate(abs_value) >= 0)) return 0;
 if ((op->code == (JIT_LDX | 0x02 | 0x00)) && (op->arg_size == 4) && (arm32_imm_rotate(abs_value) >= 0)) return 0;
 if ((op->code == (JIT_STX | 0x02)) && (op->arg_size == 4) && (arm32_imm_rotate(abs_value) >= 0)) return 0;

 if (((jit_opcode) (op->code & 0xfff8)) == JIT_FLD) return 0;
 if (((jit_opcode) (op->code & 0xfff8)) == JIT_FLDX) return 0;
 if (((jit_opcode) (op->code & 0xfff8)) == JIT_FST) return 0;
 if (((jit_opcode) (op->code & 0xfff8)) == JIT_FSTX) return 0;

 if ((((jit_opcode) (op->code & 0xfff8)) == JIT_MUL) && (value == 0)) return 0;
 if (((jit_opcode) (op->code & 0xfff8)) == JIT_MOD) {
  if ((op->code == (JIT_MOD | 0x02 | 0x00)) && ((((value) & (((value) - 1))) == 0) && ((value) != (1 << 31)))) return 0;
  return 1;
 }
 if ((((jit_opcode) (op->code & 0xfff8)) == JIT_DIV) || (((jit_opcode) (op->code & 0xfff8)) == JIT_MUL)) {
  if ((op->code & 0x02)) return !((((value) & (((value) - 1))) == 0) && ((value) != (1 << 31)));
  return 0;
 }
 return arm32_imm_rotate(value) == -1;

}




static void jit_correct_long_imms(struct jit * jit)
{
 for (jit_op * op = jit_op_first(jit->ops); op != NULL; op = op->next) {
  if (!(op->code & 0x02)) continue;
  if (((jit_opcode) (op->code & 0xfff8)) == JIT_JMP) continue;
  if (((jit_opcode) (op->code & 0xfff8)) == JIT_CALL) continue;
  if (((jit_opcode) (op->code & 0xfff8)) == JIT_PATCH) continue;
  if (((jit_opcode) (op->code & 0xfff8)) == JIT_MOV) continue;
  if (((jit_opcode) (op->code & 0xfff8)) == JIT_PUTARG) continue;
  if (((jit_opcode) (op->code & 0xfff8)) == JIT_MSG) continue;
  if (((jit_opcode) (op->code & 0xfff8)) == JIT_COMMENT) continue;
  if (((jit_opcode) (op->code & 0xfff8)) == JIT_PROLOG) continue;
  if (((jit_opcode) (op->code & 0xfff8)) == JIT_DATA_REF_CODE) continue;
  if (((jit_opcode) (op->code & 0xfff8)) == JIT_DATA_REF_DATA) continue;
  if (((jit_opcode) (op->code & 0xfff8)) == JIT_REF_DATA) continue;
  if (((jit_opcode) (op->code & 0xfff8)) == JIT_REF_CODE) continue;
  if (((jit_opcode) (op->code & 0xfff8)) == JIT_FORCE_ASSOC) continue;
  if (((jit_opcode) (op->code & 0xfff8)) == JIT_TRACE) continue;
  int imm_arg;
  for (int i = 1; i < 4; i++)
   if ((((op)->spec >> ((i) - 1) * 2) & 0x03) == 0x02) imm_arg = i - 1;
  long value = op->arg[imm_arg];

  if (jit_imm_overflow(jit, op, value)) {
   jit_op * newop = jit_op_new(JIT_MOV | 0x02, (((0x00) << 4) | ((0x02) << 2) | (0x03)), (((((0)) & 0x01) | ((((1)) & 0x03) << 1) | ((0) & 0xfffffff) << 4)), value, 0, (sizeof(void *)));
   jit_op_prepend(op, newop);

   op->code &= ~(0x3);
   op->code |= 0x01;

   op->spec &= ~(0x3 << (2 * imm_arg));
   op->spec |= (0x01 << (2 * imm_arg));
   op->arg[imm_arg] = (((((0)) & 0x01) | ((((1)) & 0x03) << 1) | ((0) & 0xfffffff) << 4));
  }
 }
}


static inline void jit_correct_float_imms(struct jit * jit)
{
 for (jit_op * op = jit_op_first(jit->ops); op != NULL; op = op->next) {
  if (!(op->code & 0x02)) continue;
  if (!op->fp) continue;
  if (((jit_opcode) (op->code & 0xfff8)) == JIT_FMOV) continue;
  if (((jit_opcode) (op->code & 0xfff8)) == JIT_FPUTARG) continue;
  if (((jit_opcode) (op->code & 0xfff8)) == JIT_FLD) continue;
  if (((jit_opcode) (op->code & 0xfff8)) == JIT_FLDX) continue;
  if (((jit_opcode) (op->code & 0xfff8)) == JIT_FST) continue;
  if (((jit_opcode) (op->code & 0xfff8)) == JIT_FSTX) continue;

  if (is_cond_branch_op(op) && (op->code & 0x02) && (op->flt_imm == 0.0)) continue;


  int imm_arg;
  for (int i = 1; i < 4; i++)
   if ((((op)->spec >> ((i) - 1) * 2) & 0x03) == 0x02) imm_arg = i - 1;

  jit_op * newop = jit_op_new(JIT_FMOV | 0x02, (((0x00) << 4) | ((0x02) << 2) | (0x03)), (jit_value) (((((1)) & 0x01) | ((((1)) & 0x03) << 1) | ((0) & 0xfffffff) << 4)), 0, 0, 0);
  newop->fp = 1;
  newop->flt_imm = op->flt_imm;
  jit_op_prepend(op, newop);

  op->code &= ~(0x3);
  op->code |= 0x01;

  op->spec &= ~(0x3 << (2 * imm_arg));
  op->spec |= (0x01 << (2 * imm_arg));
  op->arg[imm_arg] = (((((1)) & 0x01) | ((((1)) & 0x03) << 1) | ((0) & 0xfffffff) << 4));
 }
}

static inline void jit_expand_patches_and_labels(struct jit * jit)
{
 for (jit_op * op = jit_op_first(jit->ops); op != NULL; op = op->next) {
  if (((jit_opcode) (op->code & 0xfff8)) == JIT_PATCH) {
   ((jit_op *)(op->arg[0]))->jmp_addr = op;
  }
  if (((jit_opcode) (op->code & 0xfff8)) == JIT_LABEL) {
   ((jit_label *)(op->arg[0]))->op = op;
  }

  if ((((jit_opcode) (op->code & 0xfff8)) != JIT_LABEL) && (jit_is_label(jit, (void *)op->arg[0]))) {
   op->jmp_addr = ((jit_label *)(op->arg[0]))->op;
  }

  if ((((jit_opcode) (op->code & 0xfff8)) != JIT_LABEL) && (jit_is_label(jit, (void *)op->arg[1]))) {
   op->jmp_addr = ((jit_label *)(op->arg[1]))->op;
  }
 }
}

static inline void jit_prepare_reg_counts(struct jit * jit)
{
 int declared_args = 0;
 int last_gp = -1;
 int last_fp = -1;
 int gp_args = 0;
 int fp_args = 0;
 struct jit_func_info * info = NULL;
 jit_op * op = jit_op_first(jit->ops);

 while (1) {
  if (!op || (((jit_opcode) (op->code & 0xfff8)) == JIT_PROLOG)) {
   if (info) {
    info->gp_reg_count = last_gp + 1;
    info->fp_reg_count = last_fp + 1;
    info->general_arg_cnt = gp_args;
    info->float_arg_cnt = fp_args;





    info->args = malloc(sizeof(struct jit_inp_arg) * declared_args);
   }
   if (op) {
    declared_args = 0;
    last_gp = -1;
    last_fp = -1;
    gp_args = 0;
    fp_args = 0;
    info = (struct jit_func_info *)op->arg[1];
   }
   if (!op) break;
  }

  for (int i = 0; i < 3; i++)
   if (((((op)->spec >> ((i + 1) - 1) * 2) & 0x03) == 0x03) || ((((op)->spec >> ((i + 1) - 1) * 2) & 0x03) == 0x01)) {
    jit_reg r = (jit_reg) op->arg[i];
    if ((((r) & 0x01) == (0)) && ((((r) >> 4) & 0xfffffff) > last_gp)) last_gp = (((r) >> 4) & 0xfffffff);
    if ((((r) & 0x01) == (1)) && ((((r) >> 4) & 0xfffffff) > last_fp)) last_fp = (((r) >> 4) & 0xfffffff);
   }

  if (((jit_opcode) (op->code & 0xfff8)) == JIT_DECL_ARG) {
   declared_args++;
   if (op->arg[0] == JIT_FLOAT_NUM) fp_args++;
   else gp_args++;
  }

  if (((jit_opcode) (op->code & 0xfff8)) == JIT_PREPARE) {
   jit_op * xop = op;
   while (1) {
    if (((jit_opcode) (op->next->code & 0xfff8)) == JIT_PUTARG) xop->arg[0]++;
    else if (((jit_opcode) (op->next->code & 0xfff8)) == JIT_FPUTARG) xop->arg[1]++;
    else {
     jit_opcode next_code = ((jit_opcode) (op->next->code & 0xfff8));
     if (next_code == JIT_CALL) break;
     if ((next_code != JIT_TRACE) && (next_code != JIT_CODE_ALIGN)
     && (next_code != JIT_UREG) && (next_code != JIT_LREG)
     && (next_code != JIT_RENAMEREG) && (next_code != JIT_SYNCREG))
     {
      printf("Garbage in the prepare-call block. Opcode: %x\n", next_code >> 3);
      abort();
     }
    }
    op = op->next;
   }
  }
  op = op->next;
 }

}

static inline void jit_prepare_arguments(struct jit * jit)
{
 jit_op * op = jit_op_first(jit->ops);
 struct jit_func_info * info = NULL;
 int gp_arg_pos = 0;
 int fp_arg_pos = 0;
 int argpos = 0;
 int phys_reg = 0;

 while (op) {
  if (((jit_opcode) (op->code & 0xfff8)) == JIT_PROLOG) {
   info = (struct jit_func_info *)op->arg[1];
   info->has_prolog = 1;
   gp_arg_pos = 0;
   fp_arg_pos = 0;
   argpos = 0;
   phys_reg = 0;
  }
  if (((jit_opcode) (op->code & 0xfff8)) == JIT_DECL_ARG) {
   info->args[argpos].type = op->arg[0];
   info->args[argpos].size = op->arg[1];
   if (op->arg[0] == JIT_FLOAT_NUM) {
    info->args[argpos].gp_pos = gp_arg_pos;
    info->args[argpos].fp_pos = fp_arg_pos++;
   } else {
    info->args[argpos].gp_pos = gp_arg_pos++;
    info->args[argpos].fp_pos = fp_arg_pos;
   }
   jit_init_arg_params(jit, info, argpos, &phys_reg);
   argpos++;
  }
  op = op->next;
 }

}

static inline void jit_prepare_spills_on_jmpr_targets(struct jit *jit)
{
 for (jit_op * op = jit_op_first(jit->ops); op != NULL; op = op->next)
  if ((((jit_opcode) (op->code & 0xfff8)) == JIT_REF_CODE) || (((jit_opcode) (op->code & 0xfff8)) == JIT_DATA_REF_CODE)) {
   jit_op * newop = jit_op_new(JIT_FULL_SPILL | 0x02, (((0x00) << 4) | ((0x00) << 2) | (0x00)), 0, 0, 0, 0);
   jit_op_prepend(op->jmp_addr, newop);
  }
}

static inline void jit_buf_expand(struct jit * jit)
{
 long pos = jit->ip - jit->buf;
 jit->buf_capacity *= 2;
 jit->buf = realloc(jit->buf, jit->buf_capacity);
 jit->ip = jit->buf + pos;
}

void jit_generate_code(struct jit * jit)
{
 jit_expand_patches_and_labels(jit);

 jit_correct_long_imms(jit);

 jit_correct_float_imms(jit);

 jit_prepare_reg_counts(jit);
 jit_prepare_arguments(jit);
 jit_prepare_spills_on_jmpr_targets(jit);

 if (jit->optimizations & (0x08)) {
  jit_dead_code_analysis(jit, 1);
 }
 jit_flw_analysis(jit);


 if (jit->optimizations & (0x02)) jit_optimize_unused_assignments(jit);
 jit_collect_statistics(jit);
 jit_assign_regs(jit);





 jit->buf_capacity = (4096);
 jit->buf = malloc(jit->buf_capacity);
 jit->ip = jit->buf;

 for (struct jit_op * op = jit->ops; op != NULL; op = op->next) {
  if (jit->buf_capacity - (jit->ip - jit->buf) < (1024)) jit_buf_expand(jit);

  unsigned long offset_1 = (jit->ip - jit->buf);
  switch (((jit_opcode) (op->code & 0xfff8))) {
   case JIT_DATA_BYTE: *(jit->ip)++ = (unsigned char) op->arg[0]; break;
   case JIT_DATA_BYTES:
    while (jit->buf_capacity - (jit->ip - jit->buf) < op->arg[0])
     jit_buf_expand(jit);

    for (int i = 0; i < op->arg[0]; i++)
     *(jit->ip)++ = *(((unsigned char *) op->addendum) + i);
    break;
   case JIT_DATA_REF_CODE:
   case JIT_DATA_REF_DATA:
    op->patch_addr = ((jit_value)jit->ip - (jit_value)jit->buf);
    for (int i = 0; i < sizeof(void *); i++) {
     *jit->ip = 0;
     jit->ip++;
    }
    break;
   case JIT_FORCE_SPILL:
   case JIT_FORCE_ASSOC:
   case JIT_COMMENT:
   case JIT_MARK:
   case JIT_TOUCH:
    break;

   default: jit_gen_op(jit, op);
  }
  unsigned long offset_2 = (jit->ip - jit->buf);
  op->code_offset = offset_1;
  op->code_length = offset_2 - offset_1;
 }


 int code_size = jit->ip - jit->buf;



 void *mem = mmap(NULL, jit->buf_capacity, PROT_READ | PROT_EXEC | PROT_WRITE, MAP_ANON | MAP_PRIVATE, -1, 0);
 if (mem == MAP_FAILED) perror("mmap");
 memcpy(mem, jit->buf, code_size);
 free(jit->buf);


 long pos = jit->ip - jit->buf;
 jit->buf = mem;
 jit->ip = jit->buf + pos;
 jit->mmaped_buf = 1;

 jit_patch_external_calls(jit);
 jit_patch_local_addrs(jit);


 for (jit_op * op = jit_op_first(jit->ops); op != NULL; op = op->next) {
  if (((jit_opcode) (op->code & 0xfff8)) == JIT_PROLOG)
   *(void **)(op->arg[0]) = jit->buf + (long)op->patch_addr;
 }
}

void jit_trace(struct jit *jit, int verbosity)
{

 for (jit_op *op = jit_op_first(jit->ops)->next; op != NULL; op = op->next) {
  if (((jit_opcode) (op->code & 0xfff8)) == JIT_PROLOG) continue;
  if (((jit_opcode) (op->code & 0xfff8)) == JIT_DATA_BYTE) continue;
  if (((jit_opcode) (op->code & 0xfff8)) == JIT_DATA_REF_CODE) continue;
  if (((jit_opcode) (op->code & 0xfff8)) == JIT_DATA_REF_DATA) continue;
  jit_op * o = jit_op_new(JIT_TRACE, (((0x00) << 4) | ((0x00) << 2) | (0x02)), verbosity, 0, 0, 0);
  o->r_arg[0] = o->arg[0];
  jit_op_prepend(op, o);
 }



}

static void free_ops(struct jit_op * op)
{
 if (op == NULL) return;
 free_ops(op->next);
 if (op->addendum) free(op->addendum);
 jit_free_op(op);

}

static void free_labels(jit_label * lab)
{
 if (lab == NULL) return;
 free_labels(lab->next);
 free(lab);
}

static int is_cond_branch_op(jit_op *op)
{
 jit_opcode code = ((jit_opcode) (op->code & 0xfff8));
 return (code == JIT_BLT) || (code == JIT_BLE) || (code == JIT_BGT)
 || (code == JIT_BGE) || (code == JIT_BEQ) || (code == JIT_BNE)
 || (code == JIT_FBLT) || (code == JIT_FBLE) || (code == JIT_FBGT)
 || (code == JIT_FBGE) || (code == JIT_FBEQ) || (code == JIT_FBNE)
 || (code == JIT_BOADD) || (code == JIT_BOSUB) || (code == JIT_BNOADD)
 || (code == JIT_BNOSUB);
}


void jit_enable_optimization(struct jit * jit, int opt)
{
 jit->optimizations |= opt;
}

void jit_disable_optimization(struct jit * jit, int opt)
{
 jit->optimizations &= ~opt;
}

void jit_free(struct jit * jit)
{
 jit_reg_allocator_free(jit->reg_al);
 free_ops(jit_op_first(jit->ops));
 free_labels(jit->labels);
 if (jit->buf) {
  if (jit->mmaped_buf) munmap(jit->buf, jit->buf_capacity);
  else free(jit->buf);
 }
 free(jit);
}

int jit_regs_active_count(jit_op *op)
{
 return jit_set_size(op->live_out);
}

void jit_regs_active(jit_op *op, jit_value *dest)
{
 jit_set_to_array(op->live_out, dest);
}

void jit_message(struct jit * j, char * s) {
  jit_add_op(j, JIT_MSG | 0x02, (((0x00) << 4) | ((0x00) << 2) | (0x02)), (jit_value)(s), 0, 0, 0, jit_debug_info_new("head.c", __func__, 19));
}

void jit_messager(struct jit * j, char * s, int i) {
  jit_add_op(j, JIT_MSG | 0x01, (((0x00) << 4) | ((0x01) << 2) | (0x02)), (jit_value)(s), (((((0)) & 0x01) | ((((0)) & 0x03) << 1) | (((i)) & 0xfffffff) << 4)), 0, 0, jit_debug_info_new("head.c", __func__, 23));
}
