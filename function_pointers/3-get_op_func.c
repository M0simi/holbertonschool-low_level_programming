#include <stddef.h>
#include "3-calc.h"

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL} /* end of array */
	};

	int i = 0;

	while (ops[i].op != NULL) /* search to the match */
	{
		if (*(ops[i].op) == *s) /* comparing with the entr sympol */
			return (ops[i].f); /* return the correct function */
		i++;
	}
	return (NULL); /* if not match found */
}
