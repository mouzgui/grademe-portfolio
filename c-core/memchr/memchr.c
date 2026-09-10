#include <stddef.h>

void	*gm_memchr(const void *s, int c, size_t n)
{
	unsigned char *data = (unsigned char *)s;
	unsigned int i = 0;
	while(i < n)
	{
		if(data[i] == (char)c)
			return &data[i];
		i++;
	}
	return (NULL);
}
