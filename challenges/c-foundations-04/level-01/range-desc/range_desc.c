#include <stdlib.h>
int *range_desc(int min, int max)
{
	int i = 0;
	int size= (max - min) + 1;
	int *tab = malloc(sizeof(int) * size);
	if(!tab)
		return NULL;
	while(i < size)
	{	
		tab[i] = max;
		max--;
		i++;
	}
	return tab;
}
