#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: This prints a number's last digit.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lastDigit; // Declare variables at the beginning of a function.

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* Shows the last digit of 'n' by using the absolute value with modulo 10. */
	lastDigit = abs(n) % 10;

	printf("Last digit of %d is %d and is ", n, lastDigit);

	/* Check the last digit conditions. */
	if (lastDigit > 5)
	{
		printf("greater than 5\n");
	}
	else if (lastDigit == 0)
	{
		printf("0\n");
	}
	else
	{
		printf("less than 6 and not 0\n");
	}

	return (0);
}
