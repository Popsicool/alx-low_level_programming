#include "main.h"
/**
 * *_strcat - function to concatenate two strings
 *@dest: pointer to the character that will change
 *@src: pointer to the character to be changed
 * Return: return dest
 */

char *_strcat(char *dest, char *src)
{
int i;
int j;
i = 0;
j = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}
dest[i] = '\0';
return (dest);
}
