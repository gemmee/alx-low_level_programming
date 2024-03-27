#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


/**
 * f3 - generates index of 3rd char of key
 * @usr: pointer to username
 * @len: length of username
 *
 * Return: index of the 3rd char of key
 */
int f3(char *usr, int len)
{
	int product, j;

	product = 1;
	for (j = 0; j < len; j++)
		product *= usr[j];

	return ((product ^ 85) & 63);
}

/**
 * f4 - generates index of 4th character of the key
 * @usr: pointer to the username
 * @len: length of the username
 *
 * Return: index of 4th char of key
 */
int f4(char *usr, int len)
{
	int i, random_n, bigchar;

	bigchar = *usr;
	for (i = 0; i < len;  i++)
		if (bigchar < usr[i])
			bigchar = usr[i];

	srand(bigchar ^ 14);
	random_n = rand();

	return (random_n & 63);
}

/**
 * f5 - generates index of 5th char of key
 * @user: pointer to username
 * @len: length of username
 *
 * Return: index of 5th char of key
 */
int f5(char *user, int len)
{
	int i, sum;

	sum = 0;
	for (i = 0; i < len; i++)
		sum += user[i] * user[i];

	return ((sum ^ 239) & 63);
}

/**
 * f6 - generates index of 6th char of key
 * @usr: pointer to username
 *
 * Return: index of 6th char of key
 */
int f6(char *usr)
{
	int rand_i, j;

	rand_i = 0;
	for (j = 0; j < *usr; j++)
		rand_i = rand();

	return ((rand_i ^ 229) & 63);
}

/**
 * main - generates a valid key for a user (argv[1])
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 * Author: Gamachu AD
 */
int main(int argc, char **argv)
{
	int usr_len, index, sum, i;
	char keygen[7];
	long keys[] = {0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
				0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
				0x723161513346655a, 0x6b756f494b646850, 0}; /*64 chars*/
/*  -> "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk" */
	(void) argc;
/* ------------------------------------------------------------------------- */
/*                              I used ghidra to solve this challenge        */
/* ------------------------------------------------------------------------- */
/*	                             printf("%s\n", (char *)keys);               */
/*	                             printf("%c\n", ((char *)keys)[0]);          */


	usr_len = strlen(argv[1]);
/*  -------------------- f1 ----------------------------- */
	index = (((usr_len & 0xffffffff)  ^ 59) & 63); /* &63 because keys is 64 */
	keygen[0] = ((char *)keys)[index];
/*  ---------------------- f2  -------------------------- */
	sum = 0;
	for (i = 0; i < usr_len; i++)
		sum += (int)argv[1][i];
	index = ((sum ^ 79) & 63); /* & 63 because max index for keys is 63      */
	keygen[1] = ((char *)keys)[index];

	index = f3(argv[1], usr_len);
	keygen[2] = ((char *)keys)[index];

	index = f4(argv[1], usr_len);
	keygen[3] = ((char *)keys)[index];

	index = f5(argv[1], usr_len);
	keygen[4] = ((char *)keys)[index];

	index = f6(argv[1]);
	keygen[5] = ((char *)keys)[index];
	keygen[6] = '\0';
	printf("%s\n", keygen);

	return (0);
}

