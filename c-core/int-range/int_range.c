#include <stdlib.h>

int *int_range(int from, int to)
{
  int s;
  if(from >= to)
  {
    s = (from - to) + 1;
  }
  else if(to >= from)
  {
    s = (to - from) + 1;
  }
	int *array = malloc((sizeof(int) * s));
  if(!array)
    return 0;
  int i = 0;
  int max = from;
  if(from >= to)
  {
    while(s > i)
    {
      array[i] = max;
      max--;
      i++;
    }
  }
  else if(to >= from)
  {
    i = 0;
    while(s > i)
    {
      array[i] = from;
      from++;
      i++;
    }
  }
	return array;
}