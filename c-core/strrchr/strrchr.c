#include <stddef.h>

char	*strrchr(const char *s, int c)
{
	char *str = (char *)s;
	int i = 0;
	while(str[i])
		i++;
	while(i >= 0)
	{
		if(str[i] == (char)c)
			return &str[i];
		i--;
	}

	return (NULL);
}
