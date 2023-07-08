#include "main.h"

/**
 *_strncat - cat n character
 *@dest: destination
 *@src: source
 *@n : the number of char to cat
 *Return: the new str
*/

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (j < n && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	return (dest);
}
