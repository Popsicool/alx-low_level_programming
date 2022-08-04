#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function to print numbers
 * @separator: the separator
 * @n: number of parameters to pass
 * Return: none
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ad;

	va_start(ad, n);
	for (; i < n; i++)
		printf("%d", i);

	if (separator && i < n - 1)
	printf("%s", separator);
	va_end(ad);
}
