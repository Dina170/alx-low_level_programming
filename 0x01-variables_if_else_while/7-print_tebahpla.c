#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char Lch = 'z';
	
	while (Lch >= 'a')
	{		
		putchar(Lch);
		Lch--;
	}
	putchar('\n');

	return (0);
}
