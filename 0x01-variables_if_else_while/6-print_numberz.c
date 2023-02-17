#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - prints all single digit numbers of base 10 starting from 0, followed by a new line.
 *        You can only use the putchar function
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 0;
	while (a < 10)
	{
		putchar(a + '0');
		a++;
	}	
	putchar('\n');

	return (0);
}
