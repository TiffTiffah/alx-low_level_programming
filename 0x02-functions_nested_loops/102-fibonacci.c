#include <stdio.h>

/**
 * main - print the first 50 fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0
 */
int main(void)
{
	int count;
	unsigned long f1 = 0, f2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = f1 + f2;
		printf("%lu, ", sum);

		f1 = f2;
		f2 = f1;
	}
	sum = f1 + f2;
	printf("%lu\n", sum);

	return (0);
}
