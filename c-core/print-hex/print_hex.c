#include <unistd.h>
void ft_puchar(char c)
{
  write(1,&c,1);
}
int ft_atoi(char *str)
{
  int i = 0;
  int result = 0;
  while(str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == ' '))
    i++;
  while(str[i])
  {
    result = (result * 10) + str[i] - '0';
    i++;
  }
  return result;
}
int	main(int ac, char **av)
{
	if(ac != 2)
		write(1,"wrong number of arguments\n",26);
	else
	{
		unsigned int i = 0;
		char hex[] = "0123456789abcdef";
    unsigned int x = ft_atoi(av[1]);
    char result[1000];
    if(x == 0)
      write(1,"0",1);
		while(x > 0)
		{	
      result[i] = hex[x % 16];
      x  = x / 16;
      i++;
		}
    while(i > 0)
    {
      i--;
      ft_puchar(result[i]);
    }
		write(1,"\n",1);
	}
	return (0);
}