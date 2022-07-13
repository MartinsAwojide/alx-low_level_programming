#include <stdio.h>
#include <string.h>

/**
 *  _strlen - returns length of string
 *  @s: pointer to string
 *  Return: length of string
 */

int _strlen(char *s)
{
	int len;

	len = strlen(*s);

	return (len);
}
