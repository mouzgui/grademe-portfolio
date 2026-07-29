#include <stdio.h>
int ft_atoi(char *str)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	while(str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == ' '))
	{
		i++;
	}
	while(str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if(str[i] == '-')
		{
			sign = -1;
		}
		i++;
	}
	while(str[i] && str[i] >= '0' && str[i] <= '9')
	{	
		result = (result * 10) + str[i] - '0';
		i++;
	}
	return result * sign;
}
int ft_gcd(int a, int b)
{
  int i = a;
  while(i >= 1 && !(a % i == 0 && b % i == 0))
  {
    i--;
  }
  return i;
}
int main(int ac, char **av)
{
  if(ac != 3)

    printf("%s","wrong number of arguments\n");
  else
  {
    printf("%d\n",ft_gcd(ft_atoi(av[1]),ft_atoi(av[2])));
  }
  return (0);
}