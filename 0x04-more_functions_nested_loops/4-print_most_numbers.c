#include "main.h"
/**
 * print_most_numbers - prints number from 0 to 9 except 2 & 4
 * Return: return 0
 */
void print_most_numbers(void)
{
char n = 0;
while (n >= 0 && n <= 9)
{
if (n != 2 && n != 4)
{
_putchar("0" + n);
}
n++; 
}
_putchar('\n');
}
