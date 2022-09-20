#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: the string to be printed
 *
 */

void puts_half(char *str)
{
	int length = 0;
	int index = 0;

	while (*(str + index))
		index++;

	length = index / 2;

	if (index % 2)
		length += 1;

	while (length < index)
	{
		_putchar(*(str + j));
		length++;
	}

	putchar('\n');
}
