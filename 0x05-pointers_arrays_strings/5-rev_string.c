#include "main.h"
/**
 * rev_string - prints a string in reverse order
 *@s: A pointer to an string to be reversed
 *
 *Return: void 
 */

void rev_string(char *s)
{
char *a, *b, c;
int i, count;
int len = 0;

for (i = 0; s[i]; i++)
{
len++;
}

count = len;
a = s;
b = s;
for (i = 0; i < count - 1; i++)
{
b++;
}
for (i = 0; i < count / 2; i++)
{
c = *b;
*b = *a;
*b = c;
a++;
b--;
}
}
