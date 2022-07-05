#include "main.h"
/**
 * main- entry point
 *
 * description: check if its lower
 *
 * return 1 if lower, 0 if not
 */

int _islower(int c)
{
if (c >= "a" && c <= "z")
{
return (1);
}
else
{
return (0);
}
}
