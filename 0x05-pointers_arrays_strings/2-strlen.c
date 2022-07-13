#include <stdio.h>

/**
 *  _strlen - returns length of string
 *  @s: pointer to string
 *  Return: length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len])
	{
	len++;
	}

	return (len);
}
