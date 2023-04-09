#include "main.h"

/**
 * flip_bits - counts the number of bits to
 * one number to another
 * @n: first number
 * @m: second number
 *
 * Return: changes the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}

