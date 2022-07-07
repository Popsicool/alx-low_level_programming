#include "main.h"

/**
 * _isupper - check if its upper case
 * @c : character to check
 * Description: Will check if the input is upper case
 * Return: 0 or 1
 */

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
