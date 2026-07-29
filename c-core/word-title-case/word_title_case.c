#include <unistd.h>
void all_tolower(char *str)
{
  int i = 0;
  while(str[i])
  {
    if(str[i] >= 'A' && str[i] <= 'Z')
      str[i] += 32;
    i++;
  }
}

void ft_strcap(char *str)
{
  all_tolower(str);
  if(str[0] >= 'a' && str[0] <= 'z')
    str[0] -= 32;
  int i = 1;

  while(str[i])
  {
    while(str[i] && !((str[i] >= 9 && str[i] <= 13) || str[i] == ' '))
    i++;
    while(str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == ' '))
    i++;
    if(str[i] && (str[i] >= 'a' && str[i] <= 'z'))
    {
      str[i] -= 32;
    }
    i++;
  }
}
int main(int ac ,char **av)
{
  if(ac == 1)
    write(1,"wrong number of arguments\n",26);
  else
  { 
    int i = 1;
    int j = 0;
    while(av[i])
    {
      ft_strcap(av[i]);
      i++;
    }
    i = 1;
    while(av[i])
    {
      j = 0;
      while(av[i][j])
      {
        write(1,&av[i][j],1);
        j++;
      }
      write(1,"\n",1);
      i++;
    }
  }

  return (0);
}