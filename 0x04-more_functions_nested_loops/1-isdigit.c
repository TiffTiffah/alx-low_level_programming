#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks for a digit through 0 to 9
 * @c: character to be checked if it is a digit
 *
 * Return: 1 if is a digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
