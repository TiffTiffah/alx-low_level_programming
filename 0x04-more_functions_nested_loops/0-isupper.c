#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks if the character is in uppercase
 * @c: a character
 *
 * Return: 1 if upprecase and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
