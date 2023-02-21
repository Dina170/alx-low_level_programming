#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	unsigned long fn = 0, sn = 1, sum;

	for (i = 0; i < 50; i++)
	{
		sum = fn + sn;
		printf("%lu", sum);

		fn = sn;
		sn = sum;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
