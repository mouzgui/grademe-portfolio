#include <unistd.h>
int	main(int ac, char **av)
{	
	if(ac == 1)
		return (0);
	else
	{
		int i = ac - 1;
		int j = 0;
		while(i > 0)
		{
			j = 0;
			while(av[i][j])
			{
				write(1,&av[i][j],1);
				j++;
			}
			write(1,"\n",1);
		i--;
		}	
	}
	return (0);
}
