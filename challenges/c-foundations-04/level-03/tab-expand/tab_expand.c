#include <unistd.h>
int	main(int ac, char **av)
{
	if(ac != 2)
		write(1,"wrong number of arguments\n",26);
	else
	{
    int i = 0, count = 1;
    while(av[1][i])
    {
      if(av[1][i] == ' ')
      {
        while((8 - count) % 8 != 0)
        {
          write(1," ",1);
          count++;
        }
      }
      write(1,&av[1][i],1);
      i++;
      count++;
    }
		write(1,"\n",1);
	}
	return (0);
}
