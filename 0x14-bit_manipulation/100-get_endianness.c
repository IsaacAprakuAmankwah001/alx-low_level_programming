#include "main.h"
/**
 * get_endianness - checks if a machine is small or big endian
 * Return: 0 for big, 1 for small
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return (*c);
}
