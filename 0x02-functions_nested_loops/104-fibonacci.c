#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with
 *        1 and 2, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	unsigned long fn = 0, sn = 1, sum;
	unsigned long fn_half1, fn_half2, sn_half1, sn_half2;
	unsigned long half1, half2;

	for (i = 0; i < 92; i++)
	{
		sum = fn + sn;
		printf("%lu, ", sum);

	 fn = sn;
		sn = sum;
	}

	fn_half1 = fn / 10000000000;
	sn_half1 = sn / 10000000000;
	fn_half2 = fn % 10000000000;
	sn_half2 = sn % 10000000000;

	for (i = 93; i < 99; i++)
	{
		half1 = fn_half1 + sn_half1;
		half2 = fn_half2 + sn_half2;
		if (fn_half2 + sn_half2 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}

		printf("%lu%lu", half1, half2);
		if (i != 98)
			printf(", ");

		fn_half1 = sn_half1;
		fn_half2 = sn_half2;
		sn_half1 = half1;
		sn_half2 = half2;
	}
	printf("\n");
	return (0);
}
