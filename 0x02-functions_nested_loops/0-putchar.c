#include <unistd.h>
#include "main.h"
/**
 *  main - Prints _putchar task 0
 *  Return: Always 0 success
 */
int _putchar(char c)
{
		return (write(1, &c, 1));
}
