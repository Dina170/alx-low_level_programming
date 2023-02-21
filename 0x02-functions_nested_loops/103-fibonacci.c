#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci sequence
 *        terms not exceeding 4000000.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long fn = 0, sn = 1, sum;
	float even_sum;

	while (sum <= 4000000)
	{
		sum = fn + sn;

		if ((sum % 2) == 0)
			even_sum += sum;

		fn = sn;
		sn = sum;
	}
	printf("%.0f\n", even_sum);

	return (0);
}
