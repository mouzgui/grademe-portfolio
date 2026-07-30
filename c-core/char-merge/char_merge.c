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
int exist(char *str, char c)
{
	int i = 0;
	while(str[i])
	{
		if(str[i] == c)
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
		int i = 0;
		int j = 0;
		while(av[2][j])
		{
			if(seenBefor(av[2],j) != -1 || exist(av[2],av[2][j]) != -1)
				write(1,&av[2][j],1);
			j++;
		}
		while(av[1][i])
		{
			if(exist(av[2],av[1][i]) != -1 && seenBefor(av[1],i) != -1)
				write(1,&av[1][i],1);
			i++;
		}

		write(1,"\n",1);
	}	

	return (0);
}
