#include <stdio.h>
/**
 * main - Entry point
 * Description : prints combination
 * Return: Always 0 (Success/correct)
 */
int main(void)

{
  int left_no;
  int right_no;
  int center_no;



  for (left_no = 48; left_no <= 57; left_no++)
    {
      for (center_no = left_no + 1; center_no <= 57; center_no++)
	{
	  for (right_no = center_no + 1 ; right_no <= 57; right_no++)


	    {
	      putchar(left_no);
	      putchar (center_no);
	      putchar (right_no);

	      if  ((left_no == 55) && (center_no == left_no + 1) && (right_no == center_no + 1))
		{
		  break;
		}

	      putchar(',');
	      putchar (' ');

	    }

	}

    }

  putchar('\n');

  return (0);

}
