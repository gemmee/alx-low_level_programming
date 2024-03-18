
/**
 * rot13 - encodes a string using rot13
 * @str: pointer to the string
 *
 * Description: 1 if statement and 2 loops are allowed
 *              No switch statement is allowed
 *              No ternary operation is allowed
 * Return: pointer to the encrypted string
 * Author: Tnznpuh :)
 */
char *rot13(char *str)
{
	int i, j;
	char *alpha = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (str[i] == alpha[j]) /*For lowercase letters */
			{
				str[i] = alpha[(j + 13) % 26];
				break;
			}
			else if (str[i] == alpha[j] - 32) /* For uppercase */
			{
				str[i] = alpha[(j + 13) % 26] - 32;
				break;
			}
		}
	}
	return (str);
}
