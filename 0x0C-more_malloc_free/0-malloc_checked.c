#include "main.h"
#include <stdlib.h>

/**
 * malloc_check - allocates memory using malloc
 * @b: memory allocation
 * author ism
 * Return: pointer to allocate memory of at error terminate process
 */

void *malloc_checked(unsigned int b)
{

	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
