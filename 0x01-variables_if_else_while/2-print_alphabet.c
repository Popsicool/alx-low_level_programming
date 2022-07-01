#include <stdio.h>
/**
 * main -Entry point
 * Description: Printing alphabets
 * Return: Always 0 (Success/correct)
 */
int main(void)

{
char alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
putchar(alpha);
}

putchar('\n');

return (0);

}
