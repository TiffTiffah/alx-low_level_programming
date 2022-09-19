#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: the first integer that is to be swapped
 * @b: the second integer to be swapped
 *
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
