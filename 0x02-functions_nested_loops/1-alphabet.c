#include "main.h"
/**
 * main- entry point
 *
 * description: prints lower case alphabets with new line
 *
 * return 0 (success)
 */

void print_alphabet(void)
{
char alphabet;
for (alphabet = "a"; alphabet <= "z"; alphabet++)
{
_putchar(alphabet);
}
_putchar("\n");
return (0);
}
