#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
 * main - prints all the numbers of base 16 in lowercase,
 *        followed by a new line.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 0;
	char Lch = 'a';

	while (a < 10)
	{
		putchar(a + '0');
		a++;
	}

	while (Lch <= 'f')
	{
		putchar(Lch);
		Lch++;
	}
	putchar('\n');

	return (0);
}
