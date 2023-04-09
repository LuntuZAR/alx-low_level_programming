#include "main.h"

/**
 * get_endianness - checks if the machine is big or small endian
 * Return: if big 0, if small 1
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}

