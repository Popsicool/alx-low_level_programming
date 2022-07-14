#include "main.h"
/**
 * cap_string - capitalize all words
 * @str: pointer to string to be capitalized
 * Return: char
 */

char *cap_string(char *str)
{
int i, j;
char del[] = " \t\n,;.!?\"(){}";
for (i = 0; s[i] != '\0'; i++)
{
if (s[0] >= 97 && s[0] <= 122)
s[0] = s[0] - 32;
for (j = 0; del[j] != '\0'; j++)
if (s[i] == del[j] && s[i + 1] >= 97 && s[i + 1] <= 122)
s[i + 1] = s[i + 1] - 32;
}
return (s);
}
