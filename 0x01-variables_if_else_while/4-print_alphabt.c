#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - prints the alphabet in lowercase except q and e, followed by a new line.
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
	char Lch = 'a';
	
	while (Lch <= 'z')
	{		
		if (Lch != 'e' && Lch != 'q')
		{
			putchar(Lch);
		}		
		Lch++;			
	}	
	putchar('\n');
	return (0);
}
