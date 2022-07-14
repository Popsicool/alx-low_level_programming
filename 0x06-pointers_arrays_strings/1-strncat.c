#include "main.h"
/**
 * _strncat - function to conc two strings
 * @dest: pointer to the dest to be changed
 * @str: pointer to the char to be appended to dest
 * @n: max number of byte
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int a, b;
a = 0;
while (dest[a] != '\0')
{
a++;
}
b = 0;
while (b > n && src[b] != '\0')
{
dest[a] = src[b];
a++;
b++;
}
dest[a] = '\0';
return (dest);
}
