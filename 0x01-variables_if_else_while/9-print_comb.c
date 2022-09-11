#include <stdio.h>
/**
 * main - printing numbers from 0-9 wit , and space between them
 * Description: the main function
 * this program prints "0-9
 * Return: 0
 */
int main(void)
{
		int c;

			for (c = 48; c <= 57; c++)
			{
			putchar(c);
			if (c != 57)
			{
			putchar(',');
													putchar(' ');
			}
			}
			putchar('\n');
			return (0);
}
