#include "main.h"

/**
 * _pow - calculate base to a power
 * @base: base
 * @power: power
 *
 * Return: value of (base ^ power)
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int n;
	unsigned int i;

	n = 1;
	for (i = 1; i <= power; i++)
		n *= base;
	return (n);
}

/**
 * print_binary - prints a number in binary
 * @n: number
 *
 * Return: none
 */
void print_binary(unsigned long int n)
{
	unsigned long int div, ch;
	char flag;

	flag = 0;
	div = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (div != 0)
	{
		ch = n & div;
		if (ch == div)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || div == 1)
		{
			_putchar('0');
		}
		div >>= 1;
	}
}
