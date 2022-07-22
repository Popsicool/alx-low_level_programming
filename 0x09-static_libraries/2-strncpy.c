#include "main.h"
/**
 * _strncpy - function to copy string
 * @dest: pointer to the destination
 * @src: pointer to the str to copy
 * @n: highest byte to copy
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; src[i] != '\0' && i < n; i++)
{
dest[i] = src[i];
}
for ( ; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
