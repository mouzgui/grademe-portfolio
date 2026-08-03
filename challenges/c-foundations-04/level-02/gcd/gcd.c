#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	if(ac != 3)
		printf("wrong number of arguments\n");
	else
	{	
		int i = 0;
		int num1 = atoi(av[1]);
		int num2 = atoi(av[2]);
		if(num1 > num2)
		{
			i = num2;
		}
		else i = num1;

		
		while(i > 0)
		{
			if(num1 % i == 0 && num2 % i == 0)
			{
				printf("%d\n",i);
				break;
			}
			i--;
		}
		// write(1,"\n",1);
	}
	return (0);
}
