int validate_base(char c)
{
  if(c >= '0' && c <= '9')
    return c - '0';
  if(c >= 'a' && c <= 'f')
    return ((c - 'a') + 10);
  if(c >= 'A' && c <= 'F')
    return ((c - 'A') + 10);
  
  return -1;
}
int parse_int_base(const char *str, int base)
{ 
  int i = 0;
  int sign = 1;
  int result = 0;
  while(str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
    i++;
  while(str[i] && (str[i] == '+' || str[i] == '-'))
  {
    if(str[i] == '-')
    {
      sign = -1;
    }
    i++;
  }
  int value;
  while(str[i])
  {
    value = validate_base(str[i]);
    if(value == - 1 || value >= base)
	{
      break;
	}
      result = result * base + value;
      i++;
  }
  return result * sign;

	return (0);
}