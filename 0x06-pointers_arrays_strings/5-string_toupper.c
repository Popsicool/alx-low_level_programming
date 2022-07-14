#include "main.h"
/**
 * string_toupper - change lower case to upper
 * @str: pointer to the string to work on
 * Return: char
 */
char *string_toupper(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 32;
}
}
return (str);
}
