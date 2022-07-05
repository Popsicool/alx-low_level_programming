#include "main.h"
/**
 * main- entry point
 *
 * description: check if its a lower or uppercase letter
 *
 * return 1 if lower, 0 if not
 */

int _isalpha(int c)
{
if ((c >= "a" && c <= "z") || (c >= "A" && c <= "Z"))
{
return (1);
}
else
{
return (0);
}
}
