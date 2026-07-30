int strcmp(const char *s1, const char *s2)
{
	int i = 0;
	int j = 0;
	while(s1[i] && s2[j])
	{
		if(s1[i] != s2[j])
			return s1[i] - s2[j];
		i++;
		j++;
	}
	return s1[i] - s2[j];
}
