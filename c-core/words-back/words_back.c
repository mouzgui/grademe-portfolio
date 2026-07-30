#include <unistd.h>
void ft_swap(char *str)
{
	int i = 0, j = 0;
	while(str[j])
		j++;
	j--;
	while(j > i)
	{
		char temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
}

int	main(int ac, char **av)
{
	if(ac != 2)
		write(1,"wrong number of arguments\n",26);
	else
	{
		ft_swap(av[1]);
		int i = 0, start = 0, end = 0;
		while(av[1][i])
		{
			while(av[1][i] && ((av[1][i] >= 9 && av[1][i] <= 13) || av[1][i] == ' '))
				i++;
			start = i;
			while(av[1][i] && !((av[1][i] >= 9 && av[1][i] <= 13) || av[1][i] == ' '))
				i++;
			end = i - 1;
			while(end > start)
			{
				char temp = av[1][start];
				av[1][start] = av[1][end];
				av[1][end] = temp;
				start++;
				end--;
			}
			i++;
		}
		i = 0;
		while(av[1][i])
		{
			write(1,&av[1][i],1);
			i++;
		}

		write(1,"\n",1);
	}
	return (0);
}
