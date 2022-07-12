#include "main.h"
/**
 * void _puts - print a string followed by new line
 * Description: Print a string followed by a new line
 * @str: Pointer to  the integer to be changed
 * Return: none
 */
void _puts(char *str)
{
char *c = str;
int i;
for (i = 0; c[i]; i++)
{
_putchar(c[i]);
}
_putchar('\n');
}
