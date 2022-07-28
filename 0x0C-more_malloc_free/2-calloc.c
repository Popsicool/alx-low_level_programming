#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * _calloc - checking malloc
 * @nmemb: par1
 * @size: par2
 * Return: none
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	unsigned int i;
	char *filler;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = malloc(size * nmemb);
	if (mem == NULL)
		return (Null);
	filler = mem;
	for (i = 0; i < (size * nmemb); i++)
		filler[i] = '\0'
	return (mem);
}
