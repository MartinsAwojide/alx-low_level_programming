#include <stdio.h>

/**
 *main - entry point
 *Description: print alphabetsi
 *Return: 0 (Success)
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'e' && != 'q')
		{
		putchar(i);
		}
	}

	putchar('\n');

	return (0);
}
