#include "main.h"
/**
 * int _strlen - func to check length of string
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
return a;
}
