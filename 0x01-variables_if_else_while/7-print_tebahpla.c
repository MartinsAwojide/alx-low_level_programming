#include <stdio.h>

/**
 *main - entry point
 *Description: print alphabets in reverse
 *Return: 0 (Success)
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
	putchar(i);
	}

	putchar('\n');

	return (0);
}
