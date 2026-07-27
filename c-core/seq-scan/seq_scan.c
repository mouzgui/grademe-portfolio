#include <unistd.h>
char *ft_strcpy(char *src,char *dest)
{
  int i = 0;
  while(src[i])
  {
    dest[i] = src[i];
    i++;
  }
  dest[i] = '\0';
  return dest;
}
int ft_strlen(char *str)
{
  int i = 0;
  while(str[i])
    i++;
  return i;
}
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
int main(int ac,char **av)
{
  if(ac != 3)
    write(1,"wrong number of arguments\n",26);
  else
  { 
    char s1[100], s2[100];
    ft_strcpy(av[1],s1), ft_strcpy(av[2],s2);
    ft_toLower(s1);
    ft_toLower(s2);
    int i = 0, j = 0;
    while(s1[i] && s2[j])
    {
      if(s1[i] == s2[j])
      {
        i++;
      }
        j++;
    }
    if(s1[i] == '\0')
      write(1,av[1],ft_strlen(av[1]));
    write(1,"\n",1);
  }
  return (0);
}