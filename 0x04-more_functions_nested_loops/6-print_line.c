#include <stdio.h>
#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: the integer to be considered while drawing the line
 *
 * Return: 0 if n is 0 or less
 */
void print_line(int n)
{
	int length = 0;

	if (n > 0)
	{
		while (length < n)
		{
			_putchar('_');
			length++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
		return (0);
	}
}
