#include <unistd.h>
void ft_toLower(char *str)
{
  int i = 0;
  while(str[i])
  {
    if(str[i] >= 'A' && str[i] <= 'Z')
      str[i] += 32;
    i++;
  }
}
int ft_strlen(char *str)
{
  int i = 0;
  while(str[i])
    i++;
  return i;
}
void ft_last_toupper(char *str)
{
  ft_toLower(str);
  int i = ft_strlen(str) - 1;
  while(i >= 0)
  {
    //skip no words
    while(i >= 0 && !(str[i] >= 'a' && str[i] <= 'z'))
    {
      i--;
    }
      if(i >= 0 &&  str[i] >= 'a' && str[i] <= 'z')
        str[i] -= 32;
    while(i >= 0 && !((str[i] >= 9 && str[i] <= 13) || str[i] == ' '))
    {
      i--;
    }
  }
}
int main(int ac, char **av)
{
  if(ac == 1)
    write(1,"wrong number of arguments\n",26);
  else
  {
   int i = 1;
   i = 1;
   while(av[i])
   {
      ft_last_toupper(av[i]);
      i++;
   }
   i = 1;
   int j = 0;
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
    // write(1,"\n",1);
  }
  return (0);
}