char *find_any_char(const char *text, const char *needles)
{
	if(needles[0] == '\0')
		return 0;
	int i = 0;
	int j = 0;
	while(text[i])
	{
		j = 0;
		while(needles[j])
		{
			if(text[i] == needles[j])
			{
				return (char *)&(text[i]);
			}
			j++;
		}
		i++;
	}	
	return (0);
}
