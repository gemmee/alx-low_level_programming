#include "main.h"

/**
 * leet - encodes a string by replacing letters a and A -> 4,
 *        e and E -> 3, o and O -> 0, t and T -> 7, l and L -> 1.
 * @ch: pointer to a string
 *
 * Return: pointer to the string
 * Author: Gamachu AD
 */
char *leet(char *ch)
{
	int i, j;
	char leet[6] = "AEOTL";
	char nums[6] = "43071";

	for (i = 0; ch[i] != '\0'; i++)
		for (j = 0; j < 5; j++)
			if (ch[i] == leet[j] || ch[i] == leet[j] + 32)
				ch[i] = nums[j];
	return (ch);
}

