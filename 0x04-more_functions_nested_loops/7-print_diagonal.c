#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - draws diagonal line
 * @n: number of times
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int length = 0;
	int spaces;

	if (n > 0)
	{
		while (length < n)
		{
			for (spaces = 0; spaces < length; spaces++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			length++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
