#include "main.h"
/**
 * _islower - entry point
 *
 *@c: contains value to be compared
 * Description: check if its lower
 *
 * Return 1 if lower, 0 if not
 */

int _islower(int c)
{

if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
