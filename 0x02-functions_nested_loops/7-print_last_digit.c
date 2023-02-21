#include "main.h"

/**
 * function that prints the last digit of a number.
 * @n: The number.
 *
 * Return: Value of the last digit.
 */
int print_last_digit(int n)
{
	int ldigit = n % 10;

	if(n < 0)
		ldigit *= -1;

	_putchar(ldigit + '0');

	return(ldigit);
}
