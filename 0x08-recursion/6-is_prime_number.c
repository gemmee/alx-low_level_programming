#include "main.h"

/**
 * is_prime_recursive - helper function that checks if the number is prime.
 * @num: number being checked.
 * @i: possible factor of the number.
 *
 * Return: 0 if not prime, 1 if prime.
 * Author: Gamachu AD
 */
int is_prime_recursive(int num, int i)
{
	if (num < 2) /* If num is less 2, it's not prime */
		return (0);
	else if (num % i == 0) /* If num has any factors, it's not prime */
		return (0);
	else if (i <= num / 2) /* All possible factors of num are <= num/2 */
		return (is_prime_recursive(num, i + 1));
	else /* If num passes all the above checks, it must be prime */
		return (1);
}

/**
 * is_prime_number - checks whether a number is prime or not using recursion
 * @n: the number to be checked
 *
 * Return: 1 if prime, 0 otherwise
 * Author: Gamachu AD
 */
int is_prime_number(int n)
{
	return (is_prime_recursive(n, 2));
}
