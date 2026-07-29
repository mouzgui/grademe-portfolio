int prefix_span(const char *text, const char *allowed)
{
	int i = 0;
	int j = 0;
	int count = 0;
	while(text[i])
	{
		j = 0;
		while(allowed[j])
		{
      if(text[i] == allowed[j])
        count++;
			j++;
		}
		i++;
	}
	return (count);
	return (0);
}
