#include <unistd.h>

int	main(int ac, char **av)
{
	if(ac == 1)
		write(1,"wrong number of arguments\n",26);
	else
	{
		int i = 0;
		while(av[ac - 1][i])
		{
			write(1,&av[ac- 1][i],1);
			i++;
		}
		write(1,"\n",1);
	}
	return (0);
}
