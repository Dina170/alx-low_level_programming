#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
 * main - prints all possible combinations of single-digit numbers.
 *        Numbers must be separated by ",", followed by a space
 *        Numbers should be printed in ascending order
 *        You can only use the putchar function
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar(a + '0');
		if (a != 9)
		{
			putchar(',');
			putchar(' ');
		}
		a++;
	}
	putchar('\n');

	return (0);
}
