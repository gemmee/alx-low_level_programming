#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 * Author: Gamachu AD
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *)&x;

	return (*c);
}
/* ------------------------------------------ */
/*                   NOTE                     */
/*------------------------------------------- */
/* I return the value of the first byte       */
/* pointed by `c`. Since `c` points to the    */
/* memory location of `x`, `*c` represents    */
/* the first byte of `x`. If the system is    */
/* little endian, the LSB of `x` (which is    */
/* `1` in this case) will be stored at the    */
/* lowest memory address, so `*c` will be     */
/* `1`. If the system is big-endian, the      */
/* MSB of `x` will be stored at the lowest    */
/* memory address, so `*c` will be `0`.       */
/*------------------------------------------- */     
