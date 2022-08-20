#include "main.h"

/**
 * rev_string - reverses a given string
 * @s: pointer to a string
 *
 * author: Jaba
 * date: Aug. 20, 2022, Central Library
 * Return: void.
 */
void rev_string(char *s)
{
int i, j, temp, len;

len = 0;
while(s[len] != '\0')
{
len++;
}
j = len - 1;

for(i = 0; i < j; i++, j--)
{
temp = s[i];
s[i] =  s[j];
s[j] = temp;
}
}

