#include "main.h"
/**
 * _strcat - function to concatenate two strings
 *@dest: pointer to the character that will change
 *@src: pointer to the character to be changed
 * Return: return dest
 */

char *_strcat(char *dest, char *src)
{
int a, b;
a = 0;
while (dest[a] != '\0')
{
a++;
}
b = 0;
while (src[b] != '\0')
{
dest[a] = src[b];
b++;
a++;
}
dest[a] = '\0'
return (dest);
}
