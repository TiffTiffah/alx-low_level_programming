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

	if (n > 0)
	{
		while (slash < n)
		{
			_putchar('\');
			slash++;
		}
		_putchar('\n');
	}
