#include <stddef.h>

void	*gm_memset(void *s, int c, size_t n)
{
	unsigned char *p = (unsigned char *)s;
	size_t i = 0;
	while(i < n)
	{
		p[i] = (char )c;
		i++;
	}
	return (s);
}
