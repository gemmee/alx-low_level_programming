#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to an integer (man atoi to learn more).
 * @s: string to convert to integer if possible
 *
 * Return: value of 1st number in string
 * Author: Gamachu AD
 */
int _atoi(char *s)
{
	int neg, i, num;

	neg = i = num = 0;
	while ((s[i] < '0' || s[i] > '9') && s[i] != '\0')
	{
		if (s[i] == '-')
			neg++;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9' && s[i] != '\0')
	{
		num = 10 * num + (s[i] - '0');
		i++;
	}
	if (neg % 2 && num != 0)
		num = -num;
	return (num);
}
