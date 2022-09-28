#include "main.h"

/**
 * puts_recursion - prints's a string followed by a new line
 * @s: check string to be printed
 * aautho ismail
 *
 * Return (void)
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(s[0]);
		_putchar_recursion(s + 1);
	}
}

