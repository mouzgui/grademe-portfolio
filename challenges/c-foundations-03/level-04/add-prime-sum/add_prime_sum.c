#include <unistd.h>
void ft_putchar(char c)
{
	write(1,&c,1);
}
int ft_atoi(char *str)
{
	int i = 0, sign = 1, result = 0;
	while(str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == ' '))
		i++;
	while(str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if(str[i] == '-')
		{
			sign = -1;
		}
		i++;
	}
	while(str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		result = (result * 10) + str[i] - '0';
		i++;
	}
	return result * sign;
}
void ft_putnbr(int nb)
{
	int i = 0;
	int result[100];
	if(nb == 0)
	{
		write(1,"0",1);
		return;
	}
	while(nb > 0)
	{
		result[i] = nb % 10;
		nb /= 10;
		i++;
	}
	while(i > 0)
	{
		i--;
		ft_putchar(result[i] + '0');
	}
}
int isprime(int nm)
{
	int i = 2;
	while(i < nm)
	{
		if(nm % i == 0)
			return 0;
		i++;
	}
	return 1;
}
int	main(int ac, char **av)
{
	if(ac != 2)
		write(1,"0\n",2);
	else
	{
		int i = 2;
		int result = 0;
		int nb = ft_atoi(av[1]);
		while(i <= nb)
		{
			if(isprime(i))
				result += i;
			i++;
		}
		ft_putnbr(result);
		write(1,"\n",1);
	}
}
