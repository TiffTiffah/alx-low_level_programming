#include <stdio.h>
#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	int row, column, product, tens, ones;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			product = column * row;
			tens = product / 10;
			ones = product % 10;

			if (column == 0)
			{
				_putchar('0');
			}
			else if (column < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(ones + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(tens + '0');
				_putchar(ones + '0');
			}
		}
	}
}
