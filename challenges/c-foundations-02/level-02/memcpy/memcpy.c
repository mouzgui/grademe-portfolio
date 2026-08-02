#include <stddef.h>

void	*memcpy(void *dst, const void *src, size_t n)
{
	size_t i = 0;
	unsigned char *dest = dst;
	const unsigned char *sc = src;
	while(n > i)
	{
		dest[i] = sc[i];
		i++;
	}
	return dest;
}
