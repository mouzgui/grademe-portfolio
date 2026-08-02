#include <unistd.h>
void to_lower(char *str)
{
	int i = 0;
	while(str[i])
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
}
char *strcpy(char *src,char *dst)
{
	int i = 0;
	while(src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return dst;
}
int	main(int ac, char **av)
{
	if(ac != 3)
		write(1,"wrong number of arguments\n",26);
	else
	{
		char s1[100];
		char s2[100];
		strcpy(av[1],s1);
		strcpy(av[2],s2);
		to_lower(s1);	
		to_lower(s2);
		int i = 0;
		int j = 0;
		while(s1[i] && s2[j])
		{
			if(s1[i] == s2[j])
			{
				i++;
			}
			j++;
			if(s1[i] == '\0')
			{
				i = 0;
				while(av[1][i])
				{
					write(1,&av[1][i],1);
					i++;
				}
			}
		}
		write(1,"\n",1);
	}
	return (0);
}
