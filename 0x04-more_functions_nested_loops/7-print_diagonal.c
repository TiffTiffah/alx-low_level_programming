#include <stdi.h>
#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: the integer to be considered when drawing the line
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int slash = 0;
	int spaces;

	if (n > 0)
	{
		while (slash < n)
		{
			for (spaces = 0; spaces < slash; spaces++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			slash++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
