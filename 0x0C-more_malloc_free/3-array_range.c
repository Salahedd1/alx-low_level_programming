#include "main.h"

/**
 *array_range - creat an array of intiger
 *@min: from where to start
 *@max: end
 *Return: an aray full
*/

int *array_range(int min, int max)
{
	int *tab;
	int i;

	i = 0;
	if (min > max)
		return (NULL);
	tab = malloc(sizeof(int) * (max - min + 1));
	if (!tab)
		return (NULL);
	while (min <= max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
