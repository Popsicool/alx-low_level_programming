#include "main.h"
#include <unistd.h>

int _putchar(char c)
{
  return (write(1, &c, 1));
}

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

int _abs(int n)
{
  if (n < 1)
	{
	  return (n * (-1));
	}
  else
	{
	  return (n);
	}
}

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
int _isdigit(int c)
{
  if (c >= 48 && c <= 57)
	{
	  return (1);
	}
  else
	{
	  return (0);
	}
}
int _strlen(char *s)
{
  int a = 0;
  while (s[a] != '\0')
	{
	  a++;
	}
  return (a);
}

void _puts(char *str)
{
  char *c = str;
  int i;
  for (i = 0; c[i]; i++)
	{
	  _putchar(c[i]);
	}
  _putchar('\n');
}
char *_strcpy(char *dest, char *src)
{
  int i;
  i = 0;
  while (src[i] != '\0')
	{
	  dest[i] = src[i];
	  i++;
	}
  dest[i] = '\0';
  return (dest);
}
int is_numerical(unsigned int n)
{
  return (n >= '0' &&  n <= '9');
}

int _atoi(char *s)
{
  unsigned int number, i;
  int sign;
  sign = 1;
  number = 0;
  for (i = 0; s[i] != '\0'; i++)
	{
	  if (is_numerical(s[i]))
		{
		  number = (s[i] - 48) + number * 10;
		  if (s[i + 1] == ' ')
			break;
		}
	  else if (s[i] == '-')
		{
		  sign *= -1;
		}
	}
  return (number *sign);
}

char *_strcat(char *dest, char *src)
{
  int i;
  int j;
  i = 0;
  j = 0;
  while (dest[i] != '\0')
	{
	  i++;
	}
  while (src[j] != '\0')
	{
	  dest[i] = src[j];
	  j++;
	  i++;
	}
  dest[i] = '\0';
  return (dest);
}

char *_strncat(char *dest, char *src, int n)
{
  int m;
  int i;
  m = 0;
  for (i = 0; i < 1000; i++)
	{
	  if (dest[i] == '\0')
		{
		  break;
		}
	  m++;
	}
  for (i = 0; src[i] != '\0' && i < n; i++)
	{
	  dest[m + i] = src[i];
	}
  dest[m + i] = '\0';
  return (dest);
}

char *_strncpy(char *dest, char *src, int n)
{
  int i;
  for (i = 0; src[i] != '\0' && i < n; i++)
	{
	  dest[i] = src[i];
	}
  for ( ; i < n; i++)
	{
	  dest[i] = '\0';
	}
  return (dest);
}
int _strcmp(char *s1, char *s2)
{
  int i;

  for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
	  if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
	}
  return (0);
}

char *_memset(char *s, char b, unsigned int n)
{
  unsigned int i;
  for (i = 0; i < n; i++)
	{
	  *(s + i) = b;
	}
  return (s);
}

char *_memcpy(char *dest, char *src, unsigned int n)

{
  unsigned int i;
  i = 0;
  while (i < n)  /*Delacring WHILE*/
	{
	  *(dest + i) = *(src + i);
	  i++;
	}
  return (dest);
}
char *_strchr(char *s, char c)
{
  while (*s != '\0')
	{
	  if (*s == c)
		{
		  return (s);
		}
	  ++s;
	}
  if (*s == c)
	{
	  return (s);
	}
  return (0);
}

unsigned int _strspn(char *s, char *accept)
{
  int i, j;
  int count = 0;
  char *str1, *str2;
  str1 = s;
  str2 = accept;
  i = 0;
  while (str1[i] != '\0')
	{
	  j = 0;
	  while (str2[j] != '\0')
		{
		  if (str2[j] == str1[i])
			{
			  count++;
			  break;
			}
		  j++;
		}
	  if (s[i] != accept[j])
		{
		  break;
		}
	  i++;
	}
  return (count);
}
char *_strpbrk(char *s, char *accept)
{
  int j;
  while (*s != '\0')
	{
	  j = 0;
	  while (accept[j] != '\0')
		{
		  if (*s == accept[j])
			{
			  return (s);
			}
		  j++;
		}
	  s++;
	}
  return (0);
}

char  *_strstr(char *haystack, char *needle)
{
  char *str1, *str2;
  while (*haystack != '\0')
	{
	  str1 = haystack;
	  str2 = needle;
	  while (*haystack != '\0' && *str2 != '\0' && *haystack == *str2)
		{
		  haystack++;
		  str2++;
		}
	  if (*str2 == '\0')
		return (str1);
	  haystack = str1 + 1;
	}
  return (0);
}
