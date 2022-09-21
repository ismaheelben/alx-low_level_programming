#include "main.h"

/**
 * _strncpy - copies a stringtask2
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 *
 * Return: Always (dest)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
