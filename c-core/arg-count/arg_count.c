#include <unistd.h>
void ft_putchar(char c)
{
	write(1,&c,1);
}
void nb(int n)
{	
	int i = 0;
	int res[100];
	while(n > 0)
	{
		res[i] = n % 10;
		n /= 10;
		i++;
	}
	while(i > 0)
	{
		i--;
		ft_putchar(res[i] + '0');
	}
}
int	main(int ac, char **av)
{
	(void)av;
	if(ac == 1)
		write(1,"0\n",2);
	else
	{
		nb(ac - 1);
		write(1,"\n",1);
	}

	return (0);	
}
