#include <stdlib.h>
char *strdup(const char *src)
{
	int i = 0, j = 0;
	while(src[i])
	{
		i++;
	}
	char *dst = malloc(i + 1);
	if(!dst)
		return NULL;
	while(j < i)
	{
		dst[j] = src[j];
		j++;
	}
	dst[j] = '\0';
	return (dst);
}
