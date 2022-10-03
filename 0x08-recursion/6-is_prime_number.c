#include "main.h"

/**
 *helperFunction - returns 0 or 1.
 *@num: number being checked.
 *@i: possible factor of the number.
 *
 *Return: 0 if not prime, 1 if prime.
 */
int helperFunction(int num, int i)
{
	if (i <= num / 2)
	{
		if (num % i == 0)
			return (0);
		else
			return (helperFunction(num, i + 1));
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - checks whether a number is prime or not
 * @n: the number to be checked
 *
 * Return: 1 if prime, 0 otherwise
 * Author: Jaba
 * Date: Oct 03, 2022 Mon @KP10-B 21 room
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (helperFunction(n, 2));
}
