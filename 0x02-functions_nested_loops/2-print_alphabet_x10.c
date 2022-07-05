#include "main.h"
/**
 * print_alphabet_x10 - print alphabet
 *
 * description: prints 10X alphabets with new line
 *
 * return: 0 (success)
 */

void print_alphabet_x10(void)
{
int count= 0;
while (count < 10)
{
int alphabet;
for (alphabet = 97; alphabet <= 122; aphabet++)
{
_putchar(alphabet);
}
count++;
}
_putchar("\n");
return (0);
}
