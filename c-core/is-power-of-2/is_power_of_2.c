int is_power_of_2(unsigned int n)
{
		unsigned int x = 1;
		while(x <= n)
		{
			if(x == n)
				return 1;
			x *= 2;
		}
	return (0);
}

