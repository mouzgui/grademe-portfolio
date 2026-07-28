unsigned int lcm(unsigned int a, unsigned int b)
{
	if(a == 0 || b == 0)
	{
		return 0;
	}
		int i  = a;
	while(!(((i % a) == 0) && ((i % b) == 0)))
  {
    i++;
  }
	return (i);
}