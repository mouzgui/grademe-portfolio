char	*strchr(const char *s, int c)
{
	int i = 0;
	char *str = (char *)s;
	char x = (char )c;
	while(str[i])
	{
		if(str[i] == x)
			return &str[i];
		i++;
	}
	if(x == '\0')
		return &str[i];
	return 0;
}
