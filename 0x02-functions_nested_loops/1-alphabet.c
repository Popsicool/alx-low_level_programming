#include "main.h"
/**
 * main - entry point
 *
 * description: prints lower case alphabets with new line
 *
 * return 0 (success)
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
