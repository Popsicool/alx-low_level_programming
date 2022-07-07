#include "main.h"

/**
 * print_square - print a square
 * @size: size of the square
 * Return: none
 */
void print_square(int size)
{
int row;
int column;

if (size > 0)
{
for (row = 0; row < size; row++)
{
for (column = 0; column < size; column++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
