File Edit Options Buffers Tools C Help
#include "main.h"
/**
 * print_alphabet_x10 - entry point
 *
 * description: prints 10X alphabets with new line
 *
 * return 0 (success)
 */

void print_alphabet_x10(void);
{
int count;
while (count <= 10)
{
char alphabet;
for (alphabet = "a"; alphabet <= "z"; aphabet++)
{
_putchar(alphabet);
}
count++;
}
_putchar("\n");
return (0);
}
