#include <stdlib.h>
#include <stdio.h>

/* more headers goes there */

/**
 * main - prints the alphabet in lowercase and then in uppercase
 *        , followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char Lch = 'a';
	char Uch = 'A';

	while (Lch <= 'z')
	{
		putchar(Lch);
		Lch++;
	}

	while (Uch <= 'Z')
	{
		putchar(Uch);
		Uch++;
	}
	putchar('\n');
	return (0);
}
