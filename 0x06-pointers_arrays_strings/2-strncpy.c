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
int a;
a = 0;
while (a < n && src[a] != '\0')
{
dest[a] = src[a];
a++;
}
dest[a] = '\0''
return (dest);
}
