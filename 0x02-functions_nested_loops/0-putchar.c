#include "main.h"

/**
*main - function print _putchar  followed by a new line.
*
*Return: returns 0
*/
int main(void)
{
	char arr[7] = "_putchar";

	

	for (int i = 0; i < 8; i++)
	{
		_putchar(arr[i]);
	}
	
	return (0);
}