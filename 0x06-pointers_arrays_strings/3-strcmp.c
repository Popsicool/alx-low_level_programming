#include "main"
/**
 * _strcmp - compare two strings
 * @s1: first string
 * @s2: second string
 * Return: Always return 0
 */
int _strcmp(char *s1, char *s2)
{
char *a = s1;
char *b = s2;
while (*a != '\0' && *b != '\0' &&  *a == *b)
{
a++;
b++;
}
return (*a - *b);
}
