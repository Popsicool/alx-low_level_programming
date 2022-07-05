File Edit Options Buffers Tools C Help
#include "main.h"
/**
 * main- entry point
 *
 * description: prints 10X alphabets with new line
 *
 * return 0 (success)
 */

int main(void)
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
