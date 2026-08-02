#include <stdlib.h>
int is_insep(char *sep, char c)
{
  int i = 0;
  while(sep[i])
  {
    if(sep[i] == c)
      return 1;
    i++;
  }
  return 0;
}
int get_tokens(char *str, char *sep)
{
  int i = 0;
  int tokens = 0;
  while(str[i])
  {
    while(str[i] && is_insep(sep,str[i]))
      i++;
    if(str[i] == '\0') 
      break;
    tokens++;
    while(str[i] && !is_insep(sep,str[i]))
      i++;
  }
  return tokens;
}
void get_length(char *str,char *sep,int *tab)
{
  int tokens = get_tokens(str,sep);
  int i = 0, count = 0, j = 0;
  while(str[i])
  {
    count = 0;
    while(str[i] && is_insep(sep,str[i]))
      i++;
    if(str[i] == '\0')
    {
      break;
    }
    while(str[i] && !is_insep(sep,str[i]))
    {
      count++;
      i++;
    }
    if(j < tokens)
    {
      tab[j] = count;
      j++;
    }
  }
}
char **split(char *str, char *charset)
{
  int tokens = get_tokens(str,charset);
  int i = 0;
  char **tab = malloc((tokens + 1) * (sizeof(char *)));
  if(!tab)
  {
    return NULL;
  }
  if(tokens == 0)
  {
    tab[0] = NULL;
    return tab;
  }
  int *lengths = malloc((tokens) * sizeof(int));
  if(!lengths)
  {
    return NULL;
  }
  get_length(str,charset,lengths);
  while(i < tokens)
  {
    tab[i] = malloc((lengths[i] + 1) * sizeof(char));
    if(!tab[i])
    {
      return NULL;
    }
    i++;
  }
  i = 0;
  int j = 0, s = 0;
  while(str[i])
  {
    while(str[i] && is_insep(charset,str[i]))
      i++;
    if(str[i] == '\0')
    {
      break;
    }
      j = 0;
      while(j < lengths[s])
      {
        tab[s][j] = str[i];
        j++;
        i++;
      }
      tab[s][j] = '\0';
      s++;
  }
  tab[tokens] = NULL;
  return tab;
}