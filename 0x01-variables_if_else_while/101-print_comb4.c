#include <stdio.h>
/**
 * main - print possible combo of three digit numbers
 * Return: 0 Always
 */

int main(void)
{
	int i, n1, n2;

	for (n1 = '0'; n1 <= '9'; n1++)
	{
		for (n2 = '0'; n2 <= '9'; n2++)
		{
			for (i = '0'; i <= '9'; i++)
			{
				if ((i > n2) && (n2 > n1))
				{
					putchar(n1);
					putchar(n2);
					putchar(i);

					if (n1 != '7' || (n1 == '7' && n2 != '8'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
