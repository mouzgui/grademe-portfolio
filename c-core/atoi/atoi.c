int atoi(const char *str)
{
	int i = 0, sign = 1,result = 0;
	while(str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == ' '))
		i++;
	while(str[i] == '+' || str[i] =='-')
	{
		if(str[i] == '-')
			sign = -1;
		else sign = 1;
		i++;
	}
	while(str[i] && str[i] >= '0' && str[i] <= '9')
		{
			result = (result * 10) + str[i] - '0';
			i++;
		}
	return (result * sign);
}
