#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: two dimension array to print
 */
void print_chessboard(char (*a)[8])
{
	int i, s;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; s < 8; s++)
		{
			_putchar(a[i][s]);
		}
		_putchar('\n');
	}
}
