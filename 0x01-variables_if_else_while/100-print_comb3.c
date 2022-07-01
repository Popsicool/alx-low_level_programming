#include <stdio.h>
/**
 * main - Entry point
 * Description: Printing combination 
 * Return: 0 (Success)
 */
int main(void)

{
  int left_no;
  int right_no;


  for (left_no = 48; right_no <= 78; left_no++)
    {
      for (right_no = left_no + 1 ; right_no <= 78; right_no++)
	{

	  putchar(left_no);
	  putchar (right_no);


	  if ((left_no == 56) && (right_no == 78))
	    {
	      break;
	    }

	  putchar(',');
	  putchar (' ');

	}

    }

  putchar('\n');


  return (0);


}
