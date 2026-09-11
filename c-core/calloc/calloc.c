#include <stdlib.h>
#include <stddef.h>
#include <stdint.h>

void	*calloc(size_t nmemb, size_t size)
{
	if(nmemb == 0 || size == 0)
		return malloc(0);

	size_t len = nmemb * size;
	if((len / size) != nmemb)
		return NULL;
	void *dst = malloc(len);
	if(!dst)
		return NULL;
	size_t i = 0;
	unsigned char *s = (unsigned char *)dst;
	while(i < len)
	{	
		s[i] = 0;
		i++;
	}
	return (dst);
}
