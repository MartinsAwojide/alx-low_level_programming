#include <stdio.h>

/**
 *  _puts - print characters of string
 *  @str: pointer to string
 *  Return: void
 */

void _puts(char *str)
{
	int len = 0;

	while (str[len])
	{
	_putchar(str[len]);
	len++;
	}
	_putchar('\n');
}
