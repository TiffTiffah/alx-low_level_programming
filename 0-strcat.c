#include <stdio.h>
#include "main.h"

/**
 * _strcat - concatenates two strings
 * @src: source string to be appended to @dest
 * @dest: pointer to the string to be concatenated upon.
 *
 * Return: pointer to the destination string @dest
 */

char *_strcat(char *dest, char *src)
{
	int index = 0;
	int dest_len = 0;
	
	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];
	
	return (dest);
}
