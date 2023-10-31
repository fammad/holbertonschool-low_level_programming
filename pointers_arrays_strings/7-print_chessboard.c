#include <stdio.h>
#include "main.h"
/**
*print_chessboard - function that prints the chessboard.
*@a: Variable
*A program that printing chessboard
*Return: Void
*/
void print_chessboard(char (*a)[8])
{
  int cy1;
  int cy2;

	for (cy1 = 0; cy1 < 8; cy1++)
	{
		for (cy2 = 0; cy2 < 8; cy2++)
		{
			printf("%c", a[cy1][cy2];
		}
	}
}
