#include "main.h"

/**
 * _strlen - Returns the length of a string task2
 * @str: string.
 *
 * Return: Always 0
 */
size_t _strlen(const char *str)
{
	size_t len = 0;

	while (*str++)
		len++;

	return (len);
}
