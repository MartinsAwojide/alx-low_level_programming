#include <stdio.h>

/**
 *  swap_int - swap variables pointed to 
 *  @a: first variable
 *  @b: second variable
 *  Return: void on Success
 */

void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
