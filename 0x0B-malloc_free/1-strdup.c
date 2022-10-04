#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function that concatenates two strings
 * space in memory which contains a copy of the string
 * passed.
 * @str: pointer to the string being duplicated
 * author ism
 * Return: NULL if str is NULL
 */
char *_strdup(char *str)
{
	char *nstr;
	unsigned int len, i;

	/* cheack if str is NULL */
	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	nstr = malloc(sizeof(char) * (len + 1));

	/* check if malloc was successful*/
	if (nstr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		nstr[i] = str[i];
	}
	nstr[len] = '\0';
	return (nstr);
}
