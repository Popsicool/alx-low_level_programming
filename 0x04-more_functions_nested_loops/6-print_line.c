#include "main.h"

/**
 * print_line - draw a straight line
 *@n: integer to  pass
 * Return: none
 */

void print_line(int n)
{
int i = 0;

if (n > 0)
{
for (; i < n; i++)
_putchar('_');
}
_putchar('\n');
}
