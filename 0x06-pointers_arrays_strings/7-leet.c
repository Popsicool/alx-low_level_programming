#include "main.h"
/**
 * leet - function to encode string to 1337
 * @s: pointer to string to encode
 * Return: char
 */
char *leet(char *s)
{
int count = 0, i;
int low_letters[] = {97, 101, 111, 116, 108};
int upp_letters[] = {65, 69, 79, 84, 76};
int numbers[] = {52, 51, 48, 55, 49};

while (*(s + count) != '\0')
{
for (i = 0; i < 5; i++)
{
if (*(s + count) == low_letters[i] || *(s + count) == upp_letters[i])
{
*(s + count) = numbers[i];
break;
}
}
count++;
}

return (s);
}
