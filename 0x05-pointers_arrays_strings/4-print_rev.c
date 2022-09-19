#include <stdio.h>
#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 *
 */
void print_rev(char *s)
{
int len = 0, i;

	while (s[i++])
		len++;

	for (i = len - 1; i >= 0; i--)
		putchar(s[i]);

	putchar('\n');
}
