#include "main.h"

/**
 * get_bit - value of a bit at a given index.
 * @n: number
 * @index: index at which to check bit
 *
 * Return: value of the bit,-1 in case of error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int div, ch;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	div = 1 << index;
	ch = n & div;
	if (ch == div)
		return (1);
	return (0);
}
