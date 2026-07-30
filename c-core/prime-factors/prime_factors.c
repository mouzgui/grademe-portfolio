#include <stdlib.h>
#include <stdio.h>
int	main(int ac, char **av)
{
	if(ac != 2)
		printf("wrong number of arguments\n");
	else
	{
    int i = 2;
    int first = 1;
    int x = atoi(av[1]);
    if(x == 1)
    {
      printf("%d\n",1);
      return 0;
    }
    while(i <= x)
    { 
      if(x % i == 0)
      {
        if(!first)
          printf("*"); 
        printf("%d",i);
        x = x / i;
        first = 0;
      }
      else
      {
        i++;
      }
    }
	  printf("\n");
	}
	return (0);
}