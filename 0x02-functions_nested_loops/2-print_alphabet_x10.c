#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets in order 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int times = 0;
	char letter = 'a';

	while (times < 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');

		times++;
	}
}
