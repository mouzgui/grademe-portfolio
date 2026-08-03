#include <stdlib.h>
// #include <stdio.h>
int *int_range(int min, int max)
{	
	int i = 0;
	int size = 0;
	if(min > max)
	{
		size = (min - max) + 1;
	}
	else 
	{
		size = (max - min) + 1;
	}
	int *tab = malloc((sizeof(int) * size));
	if(!tab)
		return NULL;
	if(max > min)
	{
		while(i < size)
		{
			tab[i] = min;
			min++;
			i++;
		}
	}
	if(min > max)
	{
		while(i < size)
		{
			tab[i] = min;
			min--;
			i++;		
		}
	}
	return tab;
}

// int main()
// {	
// 	int min = 2, max = 5;
// 	int size = max - min;
// 	int *tab = int_range(min,max);
// 	int i = 0;

// 	while(size >= i)
// 	{
// 		printf("%d",tab[i]);
// 		i++;
// 	}
// 	return (0);
// }

