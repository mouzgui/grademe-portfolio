#include <unistd.h>

int	main(int ac, char **av)
{
	if(ac != 2)
		write(1,"wrong number of arguments\n",26);
	else
	{
		int i = 0;
		while(av[1][i])
		{
			if(av[1][i] == 'n')
			{
				write(1,"n",1);
				break;
			}
		i++;
		}
		write(1,"\n",1);
	}
	return (0);
}
