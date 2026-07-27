#include <unistd.h>
int seenBefor(char *str, int current)
{		
	int i = 0;
	while(i < current)
	{
		if(str[i] == str[current])
			return -1;
		i++;
	}
	return 1;
}
int	main(int ac, char **av)
{
	if(ac != 3)
		write(1,"wrong number of arguments\n",26);
  else
  { 
    int i = 0, j = 0;
    while(av[2][j])
    {
      i = 0;
      while(av[1][i])
      {
        if(av[1][i] == av[2][j] && seenBefor(av[2],j) != -1)
        {
          write(1,&av[2][j],1);
          break;
        }
        i++;
      }
      j++;
    }
    write(1,"\n",1);
  }
}
