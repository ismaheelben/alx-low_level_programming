#include "main.h"

/**
*_memset - fills memory with a constant byte.
*@n: bytes of the memory area to be filled.
* author ismaila
*Return: pointer to memory area s
*/
char *_memset(char *s, char b, unsigned int n);
{

	while (n)
	{
	s[n - 1] = b;
		n--;
	}
	return (s);
}

