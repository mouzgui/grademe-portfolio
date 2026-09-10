#include <stddef.h>

int	memcmp(const void *s1, const void *s2, size_t n)
{
	 unsigned char *f = (unsigned char *)s1;
  	unsigned char *l = (unsigned char *)s2;

	if(n == 0)
		return 0;
  unsigned int i = 0;
  while(i < n)
  {
    if(f[i] != l[i])
      return f[i] - l[i];
    i++;
  }
  if(n == i)
	return 0;
  return f[i] - l[i];
	return (0);
}
