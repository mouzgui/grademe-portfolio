#include <stdlib.h>
char *int_to_str(int n)
{
  long long nb = n;
  long long result[255];
  int is_zero = -1;
  int i = 0 , sign = 1, j = 0;
  int length = 0;
  if(nb == 0)
  {
    length = 1;
    is_zero = 1;
  }

  if(nb < 0)
  {
    length = 1;
    nb = nb * -1;
    sign = -1;
    j++;
  }
  while(nb > 0)
  {
    result[i] = nb % 10;
    nb = nb / 10;
    i++;
  }
  length += i;
  char *buffer = malloc(length + 1);
  if(!buffer)
    return NULL;
  if(is_zero == 1)
    {
      buffer[0] = '0';
      buffer[1] = '\0';
      return buffer;
    }
  while(i > 0)
  { 
    if(sign == -1)
    {
      buffer[0] = '-';
    }
    i--;
    buffer[j] = result[i] + '0';
    j++;
  }
   buffer[j] = '\0';
  return buffer;
}