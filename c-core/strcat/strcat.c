char	*strcat(char *dst, const char *src)
{
	int i = 0, j = 0;
	while(dst[i])
	{
		i++;
	}
	while(src[j])
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (dst);
}