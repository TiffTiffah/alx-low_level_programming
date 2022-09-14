#include <stdio.h>
#include "main.h"

/**
 * main - prints all natural numbers below 1024
 * that are multiples of 3 and 5
 *
 * Return: Always 0
 */
int main(void)
{
	int n, sum = 0;

	while (n < 1024)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
			sum += n;
		n++;
	}
	printf("%d\n", sum);
}
