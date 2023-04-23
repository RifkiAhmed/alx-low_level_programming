#include "3-calc.h"


int (*get_op_func(char *s))(int, int)
{	
	op_t ops = {"+", op_add};
	op_t ops = {"-", op_sub};
	op_t ops = {"*", op_mul};
	op_t ops = {"/", op_div};
	op_t ops = {"%", op_mod};
	
	while (ops.op)
	{
		if ((*(ops.op == s))
				return (ops.f);
	}
	return (NULL);

}
