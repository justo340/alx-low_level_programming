#include "stdio.h"

/**
 * print_chessboard - a function that prints the chessboard
 * @a: 2d array of chars
 *
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j;

	for (; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			putchar(a[i][j]);
		putchar('\n');
	}
}
