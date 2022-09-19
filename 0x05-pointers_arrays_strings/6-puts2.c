#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints characters of a string starting with
 *           the first character
 * @str: the string whereby the characters are pribted individually
 */

void puts2(char *str)
{
	int n = 0;

	while (*(str + n))
	{
		putchar(*(str + n));
		n = n + 2;
	}

	putchar('\n');
}

