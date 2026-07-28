#include <unistd.h>
void ft_putchar(char c)
{
	write(1,&c,1);
}
void ft_putnbr(int nb)
{
	int i = 0;
	int result[100];
	while(nb > 0)
	{
		result[i] = nb % 10;
		nb = nb / 10;
		i++;
	}
	while(i > 0)
	{
		i--;
		ft_putchar(result[i] + '0');
	}
}
int	main()
{
	int i = 1;
	while(i <= 100)
	{
		if((i % 3 == 0 )&& (i % 5 == 0))
		{
			write(1,"FizzBuzz",8);
		}
		else if(i % 3 == 0)
		{
			write(1,"Fizz",4);
		}
		else if(i % 5 == 0)
		{
			write(1,"Buzz",4);
		}
		else 
		{
			ft_putnbr(i);
		}
		write(1,"\n",1);
		i++;
	}
	return (0);
}
