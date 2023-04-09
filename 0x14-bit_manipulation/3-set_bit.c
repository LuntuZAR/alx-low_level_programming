#include "main.h"

/**
 * set_bit - sets a bit at a given index to 1
 * @n: pointer changes the number
 * @index: sets the index of the bit to 1
 *
 * Return: 1 if successful, -1 if failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

