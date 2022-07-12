#include "main.h"
/**
 * int _strlen - func to check length of string
 * Description: print length of strings
 * @s: character to check its length
 * Return: length of the string
 */
int _strlen(char *s)
{
int a = 0;
while (s[a] != '\0')
{
a++;
}
return (a);
}
