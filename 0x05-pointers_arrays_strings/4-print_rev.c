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

	int i;

	i = len - 1;

	while (s[i])
	{
	_putchar(s[i]);
	i--;
	}
	_putchar('\n');
}
