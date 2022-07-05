#include "main.h"
/**
 * print_last_digit - return digit
 *
 * description: return last digit
 *@n: integer to  be passed
 * return the last digit
 */
int print_last_digit(int n)
{
int last;
if (n < 0)
{
n= n * (-1);
}
last= n % 10;
_putchar(last);
return (last);
}
