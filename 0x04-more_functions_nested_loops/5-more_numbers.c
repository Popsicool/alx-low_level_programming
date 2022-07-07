#include "main.h"
/**
 * more_numbers - print 10 times number
 * Return: 0
 */
void more_numbers(void)
{
char n = 0;
while (n<10)
{
char x = 0;
while (x < 14)
{
if (n < 10)
{
_putchar('0' + n);
}
else
{
_putchar(n);
}
}
}
_putchar('\n');
}
