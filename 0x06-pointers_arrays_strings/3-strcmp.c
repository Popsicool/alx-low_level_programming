#include "main"
/**
 * _strcmp - compare two strings
 * @s1: first string
 * @s2: second string
 * Return: Always return 0
 */
int _strcmp(char *s1, char *s2)
{
int i = 0, b = 0;

while (b == 0)
{
if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
break;
b = *(s1 + i) - *(s2 + i);
i++;
}

return (b);
}
