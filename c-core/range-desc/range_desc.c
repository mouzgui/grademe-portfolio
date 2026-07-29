#include <stdlib.h>
int *range_desc(int min, int max)
{
	int s = (max - min) + 1;
	int *tab = malloc(sizeof(int) * s);
	if(!tab)
		return (0);
	int i = 0;
	while(s > i)
	{
		tab[i] = max;
		max--;
		i++;
	}
	return tab;
}