#include "variadic_functions.h"

int sum_them_all(const unsigned int n, ...)
{

	unsigned int i = 0;
	int sum = 0;
	va_list ad;

	va_start(ad, n);
	for (; i < n; i++)
		sum += va_arg(ad, int);
	va_end(ad);
	return (sum);
}
