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
  int result[100];
  int i = 0;
  if(nb == 0)
  {
    write(1,"0",1);
  }
  if(nb < 0)
  {
    write(1,"-",1);
    nb = nb * -1;
  }
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
int main(int ac, char **av)
{
  if(ac == 1)
    write(1,"0\n",2);
  else
  {
    int i = 1;
    int result = 0;
    while(av[i])
    {
      result += ft_atoi(av[i]);
      i++;
    }
    ft_putnbr(result);
    write(1,"\n",1);
  }
  return (0);
}