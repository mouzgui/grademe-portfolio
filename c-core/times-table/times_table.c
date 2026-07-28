#include <unistd.h>
void ft_putchar(char c)
{
  write(1,&c,1);
}
int	ft_atoi(char *str)
{
  int i = 0;
  int result = 0;
  int sign = 1;
  while((str[i] >= 9 && str[i] <= 13) ||str[i] == 32)
  i++;
  while(str[i] == '+' || str[i] == '-')
  {
    if(str[i] == '-')
      sign *=  -1;
    i++;
  }
  while(str[i] && (str[i] >= '0' && str[i] <= '9'))
  {
    result = (result * 10) + (str[i] - '0');
    i++;
  }
  return result * sign;
} 
void  ft_putnbr(int nb)
{
  int i = 0;
  int result[20];
  if(nb == 0)
    write(1,"0",1);
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
  if(ac != 2)
    write(1,"wrong number of arguments\n",26);
  else
  {
    int i = 1;
    while(i <= 9)
    {
      ft_putnbr(i);
      ft_putchar(' ');
      ft_putchar('x');
      ft_putchar(' ');
      ft_putnbr(ft_atoi(av[1]));
      ft_putchar(' ');
      ft_putchar('=');
      ft_putchar(' ');
      ft_putnbr(i * ft_atoi(av[1]));
      ft_putchar('\n');
      i++;
    }
  }

  return (0);
}