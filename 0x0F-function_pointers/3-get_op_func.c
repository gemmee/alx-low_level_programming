#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform the operation asked
 * @s: the operator passed as argument
 *
 * Return: the correct function if s is found
 * NULL if s does not match
 *
 * Author: Gamachu AD
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (ops[i].op)
	{
		if (!strcmp(ops[i].op, s))
			return (ops[i].f);
		i++;
	}
	return (NULL); /* means no match is found*/
}
