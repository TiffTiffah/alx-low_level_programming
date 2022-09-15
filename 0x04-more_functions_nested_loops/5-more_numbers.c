#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14 except 2 and 4 ten times
 *
 */

void more_numbers(void)
{
	int num, times = 0;

	while (times < 10)
	{
		for (num = '0'; num <= '14'; num++)
		{
			if (num > 9)
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
		}

		times++;
		_putchar('\n');
	}
}
