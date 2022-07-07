#include <stdio.h>

/**
 * main - prints fizz, Buzz, FizzBuzz or number
 * Return: none
 */
int main(void)
{
int a = 1;
while (a <= 100)
{
if (a % 15 == 0)
{
printf('FizzBuzz');
}
else if (a % 3 == 0)
{
printf('Fizz');
}
else if (a % 5 == 0)
{
printf('Buzz');
}
else
{
printf('%i', a)
}
if (a != 100)
{
printf(' ');
}
a++;
}
printf('\n');
return (0);
}
