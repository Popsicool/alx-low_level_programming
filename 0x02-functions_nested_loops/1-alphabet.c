#include "main.h"
/**
 * print_alphabet - entry point
 *
 * Description: prints lower case alphabets with new line
 *
 * Return 0 (success)
 */

void print_alphabet(void)
{
char alp = 'a';

while (alp <= 'z')
{
_putchar (alp);
alp++;

}
_putchar ('\n');

}
