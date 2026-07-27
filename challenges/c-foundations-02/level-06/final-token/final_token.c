#include <unistd.h>
int ft_strlen(char *str)
{
  int i = 0;
  while(str[i])
    i++;
  return i;
}
int	main(int ac, char **av)
{
	if(ac != 2)
		write(1,"wrong number of arguments\n",26);
	else
	{
    int i = ft_strlen(av[1]) - 1;
    int start = 0;
    int end = 0;
    while(i >= 0)
    {
      while(i >= 0 && ((av[1][i] >= 9 && av[1][i] <= 13 )|| av[1][i] == ' '))
      {
        i--;
      }
      end = i;
      while(i >= 0 && !((av[1][i] >= 9 && av[1][i] <= 13) || av[1][i] == ' '))
      {
        i--;
      }
      start = i + 1;
      break;
    }
    while(start <= end)
    {
      write(1,&av[1][start],1);
      start++;
    }
		write(1,"\n",1);
	}
	return (0);
}