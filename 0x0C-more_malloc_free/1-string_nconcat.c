#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - checking malloc
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * @n: number of bytes of second string
 * Return: character
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len = n, i;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		len++;
	concat = malloc(sizeof(char) * (len + 1))
	if (concat == NULL)
		return (NULL);

	len = 0;
	for (i = 0; s1[i]; i++)
		concat[len++] = s1[i]
	for (i = 0; s2[i] && i < n; i++)
		concat[len++] = s2[i]
	concat[len] = '\0';
	return (0);
}
