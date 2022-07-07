#include "main.h"

/**
 * print_diagonal - prints diagonal line
 * @n: integer to  pass
 * Return: none
 */
void print_diagonal(int n)
{
if (n > 0)
{
int  count = 1;
while (count <= n)
{
if(count > 1)
{
int a = 1;
int b =1;
while (b =< a)
{
_putchar(' ');
b++;
}
a++;
}
_putchar('\');
_putchar('\n');
count++;
}
} 
else
{
_putchar('\n');
}
}
