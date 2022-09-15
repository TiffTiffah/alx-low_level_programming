#include <stdio.h>
#include "main.h"

/**
 * main - Prints the numbers from 1-100, but for multiples of three,
 *        Fizz is printed instead of the number, for multiples of five,
 *        Buzz, and for multiples of both three and five, FizzBuzz.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 1; num < 101; num++)
	{
		if (num % 5 == 0 && num % 3 == 0)
			printf("FizzBuzz ");
		else if (num % 5 == 0)
			if (num == 100)
				printf("Buzz");
			else
				printf("Buzz ");
		else if (num % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", num);
	}
	printf("\n");

	return (0);
}
