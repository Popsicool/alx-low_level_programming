#include "main.h"

/**
 * swap_int - swap the valuses of two integers a and b
 *@a: A pointer to be swapped with B
 *@b: B pointer to be swapped with A
 * Return: void that means our answer is correct
 */

void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
