#include "main.h"

/**
 *_strlen_recursion - returns length of the string.
 *@s: pointer to string.
 *
 *Return: length of the string.
 *Author: Jaba [Loved the beauty of this code, though not my own!]
 *Date: Oct 03, 2022 @kp 10b on Mon
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}

/**
 * helperFunction - check if palindrome.
 * @s: pointer to the string.
 * @fi: first index.
 * @li: last index.
 *
 * Return: 0 if not palindrome, 1 if palindrome.
 */
int helperFunction(char *s, int fi, int li)
{
	if (fi < li && s[fi] == s[li])
		return (helperFunction(s, fi + 1, li - 1));
	if (s[fi] != s[li])
		return (0);
	return (1);
}

/**
 * is_palindrome - checks if string is palindrome or not.
 * @s: pointer to the string.
 *
 * Return: 1 if string is palindrom, 0 if not.
 */
int is_palindrome(char *s)
{
	int fi, li;

	fi = 0;
	li = _strlen_recursion(s) - 1;

	if (!*s) /* An empty string is considered as palindrome */
		return (1);

	return (helperFunction(s, fi, li));
}
