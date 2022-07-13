#include <stdio.h>

/**
 *  reset_to_98 - updates var value to reset_to_98
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
