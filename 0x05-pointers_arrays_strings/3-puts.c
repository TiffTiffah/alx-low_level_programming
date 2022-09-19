#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string
 * @str: string to be printed
 */
void _puts(char *str)
{
	while (*str)
		putchar(*str++);

	putchar('\n');
}
