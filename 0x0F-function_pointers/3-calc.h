#ifndef PROTO
#define PROTO

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
char *op;
int (*f)(int a, int b);
} op_t;

int opp_add(int a, int b);
int opp_sub(int a, int b);
int opp_mul(int a, int b);
int opp_div(int a, int b);
int opp_mod(int a, int b);
int (*get_op_func(char *s))(int, int);


#endif
