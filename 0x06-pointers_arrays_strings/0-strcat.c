#include "main.h"

/**
 * strcat - Concatenates two strings
 * @dest: pointer to the string to be concatenated upon.
 * @src: source string to be appended to @dest.
 *
 * Return: pointer to the destination string @dest.
 */
char *strcat(char *dest, const char *src)
{
	int index = 0;
	int dest_len = 0;

	while (*(dest + index))
		index++;

	while ((*(dest + index) = *(src + dest_len)))
	{
		index++;
		dest_len++;
	}

	return (dest);
}
