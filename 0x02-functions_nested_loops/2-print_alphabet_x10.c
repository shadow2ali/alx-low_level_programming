#include<stdio.h>
#include "main.h"
/**
*print_alphabet_x10 - prints alphabet letters 10 times followed by a new line.
*Return: void
*
*/
void print_alphabet_x10(void)
{
	int a, b;

	for (a = 1; a <= 10; a++)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}
	}
	printf("\n");
}

