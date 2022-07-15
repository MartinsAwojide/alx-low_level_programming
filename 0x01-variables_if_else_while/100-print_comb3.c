#include <stdio.h>
/**
 * main - print possible combo of two digit numbers
 * Return: 0 Always
 */

int main(void)
{
	int i, n;

	for (n = '0'; n <= '9'; n++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			if (i > n)
			{
				putchar(n);
				putchar(i);

				if (n != '8' || (n == '8' && i != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
