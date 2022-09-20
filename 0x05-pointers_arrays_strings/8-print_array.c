#include <stdio.h>
#include "main.h"

/**
 * print_array - function to print n elements of an array
 * @a: the pointer to be used
 * @n: the number of elements to be printed
 */

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index < (n - 1))
			putchar(', ');

	}

	putchar('\n');
}
