#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	if(ac != 4)
		write(1,"wrong number of arguments\n",26);
	else
	{
		int a = atoi(av[1]);
		int b = atoi(av[3]);
		if(av[2][0] == '*')
			printf("%d\n",a * b);
		if(av[2][0] == '+')
			printf("%d\n",a + b);
		if(av[2][0] == '-')
			printf("%d\n",a - b);
		if(av[2][0] == '/')
			printf("%d\n",a / b);
		if(av[2][0] == '%')
			printf("%d\n",a % b);
		
	}
	return (0);
}
