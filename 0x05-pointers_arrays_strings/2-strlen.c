#include "main.h"

/**
 *_strlen - returns the length of a string task2
 * @s: string
 *Return: Always to intergers
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
