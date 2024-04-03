#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 * @name: a pointer to a character
 * @f: a pointer to a function
 *
 * Return: Nothing
 * Author: Gamachu AD
 */
void print_name(char *name, void (*f)(char *s))
{
	f(name); /* equivalent to (*f)(name); */
}
