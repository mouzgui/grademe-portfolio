#include <stddef.h>

char	*strchr(const char *s, int c)
{
	int i = 0;
	char *str = (char*)s;
	while(str[i])
		i++;
	int j = 0;
	while(j <= i)
	{
		if(str[j] == (char)c)	
			return &str[j];
		j++;
	}
	return (NULL);
}
