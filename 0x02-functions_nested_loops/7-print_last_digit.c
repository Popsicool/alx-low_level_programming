#include "main.h"
/**
 * main- entry point
 *
 * description: return last digit
 *
 * return the last digit
 */
int print_last_digit(int n)
{
int last;
if (n < 0)
{
n= n * (-1)
}
last= n % 10
_putchar(last);
return (last)
}
