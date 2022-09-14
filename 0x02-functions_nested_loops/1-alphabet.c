#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - print alphabets in order
 *
 * Return - void
 */
void print_alphabet(void)
{
	char letter = 'a';

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
