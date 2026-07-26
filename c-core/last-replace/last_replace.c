#include <unistd.h>
int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return i;
}
int	main(int ac, char **av)
{	
	if(ac != 4)
		write(1,"wrong number of arguments\n",26);
  else if(ft_strlen(av[2]) > 1 || ft_strlen(av[3]) > 1)
    write(1,"\n",1);
	else
	{
    int i = 0;
    int last = -1;
    while(av[1][i])
    {
      if(av[1][i] == av[2][0])
        last = i;
      i++;
    }
    if(last != -1)
    {
      av[1][last] = av[3][0];
    }
    write(1,av[1],ft_strlen(av[1]));
		write(1,"\n",1);
	}
	return (0);
}
