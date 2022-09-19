#include <stdio.h>
#include <string.h>
#include "main.h"

/**
*print_rev - Prints a string in reverse order task4
*@s: String to reverse
*Return: Always return to  Nothing
*/

void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		putchar(*(s + len));
	putchar(10);
}
