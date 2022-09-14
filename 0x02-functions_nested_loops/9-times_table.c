#include <stdio.h>
#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	int row, column, product;

	for (row = 0; row <= 9; row++)
	{

		for (column = 0; column <= 9; column++)
		{
			_putchar(' ');

			product = row * column;

			if (product <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar(',');
				_putchar((product / 10) + '0');
			}

			_putchar((product % 10) + '0');
		}
		_putchar(',');
		_putchar('\n');
	}
}
