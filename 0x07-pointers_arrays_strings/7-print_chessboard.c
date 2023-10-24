#include <string.h>
#include <stdio.h>

/**
 * print_chessboard - assign bytes of length b to string s
 * Description : 'same thins '
 * @a :no of bytes
 * Return: first somethiing
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c", a[i][j]);
		}
	}
}

