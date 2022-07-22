#include "main.h"
/**
 * *_strncat - function to conc two strings
 * @dest: pointer to the dest to be changed
 * @src: pointer to the char to be appended to dest
 * @n: max number of byte
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int m;
int i;
m = 0;
for (i = 0; i < 1000; i++)
{
if (dest[i] == '\0')
{
break;
}
m++;
}
for (i = 0; src[i] != '\0' && i < n; i++)
{
dest[m + i] = src[i];
}
dest[m + i] = '\0';
return (dest);
}
