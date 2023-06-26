#include "main.h"

/**
 *puts_half - print half string
 *
 *@str: the str to print
 *return: no return
*/

void	puts_half(char *str)
{
	int i;
	int n;

	i = 0;
	if (!str)
	{
		write(1, "\n", 1);
		return;
	}
	while (str[i])
		i++;
	i++;
	n = i / 2;
	while (str[n])
	{
		write(1, &str[n], 1);
		n++;
	}
	write(1, "\n", 1);
}
