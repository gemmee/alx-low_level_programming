#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

/** 
 * main - generates random valid alphanumeric passwords
 *
 * Return: 0 on success
 * Author: Gamachu AD
 */
int main(void) {
	int sum, diff, i;
	char ascii;
	char *password = NULL;

	srand(time(NULL));
	sum = 0;
	i = 0;
	password = malloc(24); /* 'z'*22 + 'X' + '\0' */
        /* we need at least 23 character long alphanumeric password:
	   so I allocated 24 minimum space +1 for null character to end the password 
           eg. 'zzzzzzzzzzzzzzzzzzzzzX' is one valid password 
		because it adds to 2772 -> the ascii value of z = 122 and X = 88
		so 122*22 + 88 = 2772
	   To arrive at this I used python 2772 // 122 and 2772 % 122 then chr(122)
	   and chr(88) to get the characters. I also checked which alphanumeric character
	   has the highest value using ord('z') = 122, ord('Z') = 90 and ord('9') = 57

	*/
	while (sum < 2772) {
		ascii = (char)(rand() % 128); /* gets ascii between 0 to 127 */
		
		if (isalnum(ascii)) {  /* if ascii is alphanumeric then add to password */
			sum += (int)ascii; 
			password[i] = ascii;
			if (i > 22 && sum != 2772) { /* 0 to 22 stores the password */
				/* Add 1 more byte if the allocated space is full */
				password = realloc(password, 24 + i - 22);
				if (password == NULL) {
					printf("Memory allocation failed\n");
					return 1;
				}
			}
			i++;
				
		}
		if (sum > 2772 && isalnum(ascii)) 
		{
			diff = sum - 2772;
			ascii -= (char)diff;
			if (isalnum(ascii)) {
				sum -= diff;
				password[--i] = ascii;
				i++;
			}
			else { /* the last ascii is not alphanumeric so reset everything */
				sum = 0;
				password = realloc(password, 24);
				i = 0;
			}
		}
	}
	password[i] = '\0';
	printf("%s\n", password);
	free(password);

	return 0;
}
