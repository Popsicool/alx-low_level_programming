#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * _calloc - checking malloc
 * @nmemb: par1
 * @size: par2
 * Return: pointer to the allocated memory.
 * if nmemb or size is 0, returns NULL.
 * if malloc fails, returns NULL.
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
		return (NULL);
	filler = mem;
	for (i = 0; i < (size * nmemb); i++)
		filler[i] = '\0';
	return (mem);
}
