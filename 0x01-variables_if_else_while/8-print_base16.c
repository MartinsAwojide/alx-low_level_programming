#include <stdio.h>

/**
 *main - entry point
 *Description: print base16 char
 *Return: 0 (Success)
 */

int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
	putchar(i);
	}

	for (i = 'a'; i <= 'f'; i++)
	{
	putchar(i);
	}

	putchar('\n');

	return (0);
}
