#include <unistd.h>
#include <stdio.h>

int main(int ac,char **av)
{
  if(ac != 3)
    write(1,"wrong number of arguments\n",26);
  else
  {
    int i = 0;
    int j = 0;
    int res;
    while(av[1][i] && av[2][j])
    {
      if(av[1][i] == av[2][j])
      {
        i++;
      }
      if(av[1][i] == '\0')
          res = 1;
      else res = 0;
      j++;
    }
    if(res == 1)
      write(1,"yes\n",4);
    else write(1,"no\n",3);
  }
  return (0);
}
