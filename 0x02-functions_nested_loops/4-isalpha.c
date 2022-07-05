#include "main.h"
/**
 *  _isalpha - case function
 *
 * description: check if its a lower or uppercase letter
 *
 *@c: integer to pass
 * return: 1 if lower, 0 if not
 */

int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
}
