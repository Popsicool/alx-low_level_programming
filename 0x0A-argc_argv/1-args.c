#include <stdio.h>

/**
* main - this is a function to print its name
* @argc: argc parameter
* @argv: array of a command listed
* Return: 0 (success)
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
