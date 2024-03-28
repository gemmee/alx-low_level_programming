#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>


int rand(void)
{
	/* Return the numbers you've chosen */
	static int numbers[] = {9, 8, 10, 24, 75, 9};
	/*
	static int num[] = {9, 9, 8, 10, 24, 75};
	static int index = 0;
	return (num[index++] - 1);
 	*/
	/*the above commented code will also do*/
	/* - 1 because when I look at gm object code */
	/* using ghidra rand() % 75 + 1 or rand % 15 + 1 is used */

	static int index = 0;
	switch (index)
	{
	case 0:
		index++;
		return (numbers[5] - 1);
	case 1:
		index++;
		return (numbers[0] - 1);
	case 2:
		index++;
		return (numbers[1] - 1);
	case 3:
		index++;
		return (numbers[2] - 1);
	case 4:
		index++;
		return (numbers[3] - 1);
	case 5:
		index++;
		return (numbers[4] - 1);
	}
}

