#include <stdio.h>

/**
 *main - entry point
 *Description: print combo
 *Return: 0 (Success)
 */

int main(void)
{
	int i;

	for (i = '0' ; i <= '9' ; i++)
	{
	putchar(i);
	putchar(',');
	putchar(' ');
	}

	putchar('\n');

	return (0);
}
