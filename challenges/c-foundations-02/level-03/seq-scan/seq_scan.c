#include <unistd.h>
void alltolower(char *str)
{
	int i = 0;
	while(str[i])
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
}
char *ft_strcpy(char *src, char *dest)
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

int	main(int ac, char **av)
{

	if (ac != 3)
		write(1,"wrong number of arguments\n",26);
	else
	{
		char s1[100],s2[100];
		ft_strcpy(av[1],s1), ft_strcpy(av[2],s2);
    alltolower(s1);
    alltolower(s2);
		int i = 0;
		int j = 0;
		while(s1[i] && s2[j])
		{
			if(s1[i] == s2[j])
			{
				i++;
			}		
			j++;
		}
		if(s1[i] == '\0')
			{
        int s = 0;
				while(av[1][s])
				{
          write(1,&av[1][s],1);
					s++;
				}
      }
		write(1,"\n",1);
	}
	return (0);
}