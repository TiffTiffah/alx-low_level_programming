#include <stdio.h>
#include "main.h"

/**
 * print_array - function to print n elements of an array
 * @a: is the pointer to be used
 * @n: the number of elements to be printed
 *
 */
void print_array(int *a, int n)
{
	int index = 0;

	while (index < n)
	{
		printf("%d", a[index]);

		if (index < (n - 1)
				{
				printf(", ");
				}

				index++;
				}



				printf("\n");
				}


