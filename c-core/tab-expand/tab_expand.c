#include <unistd.h>

int main(int ac, char **av)
{
  if(ac != 2)
    write(1,"wrong number of arguments\n",26);
  else
  {
    int i = 0;
    int col = 1;
    while(av[1][i])
    {
      // col = 0;
      if(av[1][i] == ' ')
      {
        while(col % 8 != 0)
        {
          write(1," ",1);
          col++;
        }
      }
      write(1,&av[1][i],1);
      i++;
      col++;
    }
    
    write(1,"\n",1);
  }

  return (0);
}