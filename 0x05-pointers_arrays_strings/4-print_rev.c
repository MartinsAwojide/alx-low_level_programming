#include "main.h"

/**
 *  print_rev - prints string in reverse
 *  @s: pointer to string
 *  Return: void
 */

void print_rev(char *s)
{
	int len = 0;

	while (s[len])
	{
	len++;
	}

	while (len > 0)
	{
	_putchar(s[len]);
	i--;
	}
	_putchar('\n');
}