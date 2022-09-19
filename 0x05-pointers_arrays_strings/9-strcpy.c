#include "main.h"

/**
* _strcpy - Copy paste string task9
* @dest: destination
* @src: source
*
* Return: Always return to destinations
*/

char *_strcpy(char *dest, char *src)
{
	int inc = 0;

	while (*(src + inc) != '\0')
	{
		*(dest + inc) = *(src + inc);
		inc++;
	}
	*(dest + inc) = '\0';


	return (dest);
}
