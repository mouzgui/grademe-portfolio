char	*strstr(const char *str, const char *to_find)
{
	int i = 0;
	int j = 0;
	if(to_find[0] == '\0')
		return (char *)str;
	while(str[i])
	{
		j = 0;
		while(to_find[j] && to_find[j] == str[i + j])
		{
			j++;
			if(to_find[j] == '\0')
				return (char *)&str[i];
		}
		i++;
	}
	return 0;
}
