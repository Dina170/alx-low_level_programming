#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Prints the last digit of a randomly generated number
 *        and prints whether it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
		
	int ld = n % 10;

	if (ld > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	else if (ld == 0)
		printf("Last digit of %d is 0 and is 0\n", n);
	else if (ld < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);

	return (0);
}
