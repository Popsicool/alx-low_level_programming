#include "main.h"

/**
 * print_line - draw a straight line
 *@n: integer to  pass
 * Return: none
 */

void print_line(int n)
{
if (n > 0)
{
int a = 1;
while (a <= n)
{
_putchar('_');
a++
}
}

_putchar('\n');
}
