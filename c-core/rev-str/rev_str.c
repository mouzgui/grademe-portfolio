char *rev_str(char *str)
{
	int i = 0;
	int j = 0;
	while(str[j])
	{
		j++;
	}
	j--;
	while(j > i)
	{
		char temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		j--;
		i++;
	}
	return (str);
}