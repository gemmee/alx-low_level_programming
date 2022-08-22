#include "main.h"

/**
 * leet - encodes a string into 1337, letters a and A should be
 * replaced by 4, e and E by 3, o and O by 0, t and T by 7, l and L by 1.
 * @ch: pointer to a string
 *
 * author: Jaba
 * date: Aug 22, 2022. KP7c-131 room
 * Return: pointer to the string
 */
char *leet(char *ch)
{
int i, j;
char leet[11] = "aAeEoOtTlL";
char nums[11] = "4433007711";

/*traverse the string */ 
for (i = 0; ch[i] != '\0'; i++)
{
/*check whether letters in leet are found. */
for (j = 0; ch[i] == leet[j]; j++)
{
/*replace the letter with code in nums. */
ch[i] = nums[j];
}
}
return (ch);
}

