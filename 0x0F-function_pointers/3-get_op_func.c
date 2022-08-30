#include "3-calc.h"
/**
  * get_op_func - function selects the correct function to perform.
  * @s: operator user.
  *
  * Return: correct function result or NULL if operator is wrong.
  * Author: Jaba
  * Date: Aug 29 2022 @KP10b
  */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 5)
	{
		if (s[0] == ops[i].op[0])
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}

