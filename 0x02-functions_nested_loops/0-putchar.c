#include <stdio.h>
#include "main.h"

/**
 * main - print -putchar
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char words[8] = "_putchar";
	int n = 0;

	for (n = 0; n < 8; n++)
	{
		_putchar(words[n]);
	}
	_putchar('\n');

	return (0);
}
