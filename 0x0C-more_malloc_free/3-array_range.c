#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * array_range -
 * @min: parameter for minimum
 * @max: parameter for maximum
 * Return: array of integers or NULL
 */

int *array_range(int min, int max)
{
	int *array, i, n;

	if (min > max)
		return (NULL);
	n = max - min + 1;
	array = malloc(sizeof(int) * n);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < n; i++)
	array[i] = min++;
	return (array);
}
