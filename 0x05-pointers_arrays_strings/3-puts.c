#include <stdio.h>
#include "main.h"

/**
 *_puts - prints a string task3
 * @str: string to print
 *
 * Description: prints a string
 * On success: Always returns no error
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}
