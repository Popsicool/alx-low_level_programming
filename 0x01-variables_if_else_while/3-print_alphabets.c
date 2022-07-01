#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Printing characters
 *
 * Return: Always 0 (Sucess/correct)
 */
int main(void)

{
  char lower;
  char upper;

  for (lower = 'a'; lower <= 'z'; lower++)
    {
      putchar(lower);
    }


  for (upper = 'A'; upper <= 'Z'; upper++)
    {
      putchar(upper);
    }




  putchar ('\n');

  return (0);

}
