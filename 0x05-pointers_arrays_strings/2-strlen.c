#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the sting that it's length is to be returned
 *
 * Return: Always o
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
