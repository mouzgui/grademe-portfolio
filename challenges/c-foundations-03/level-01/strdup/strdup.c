#include <stdlib.h>
char *strdup(const char *src)
{
	int i = 0;
	int j = 0;
	while(src[i])
	i++;
	char *dest = malloc(i + 1);
	if(!dest)
		return NULL;
	while(src[j])
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';

	return dest;
}
