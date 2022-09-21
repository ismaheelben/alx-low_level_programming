#include "main.h"

/**
 * _strcat - concatenates 2 stringstask0
 * @dest: string to append
 * @src: string to add
 *
 * Return:Always (dest)
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
