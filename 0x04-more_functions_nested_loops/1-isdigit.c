#include "main.h"

/**
 * _isdigit - function to check for digit
 * @c: input to be checked
 * Return: 1 if its a digit, 0 if not
 */

int _isdigit(int c)
{
if (c >= 48 && c<= 57)
{
return (1);
}
else
{
return (0);
}
}
