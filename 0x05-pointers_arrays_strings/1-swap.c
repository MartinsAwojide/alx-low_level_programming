#include <stdio.h>

/**
 *  reset_to_98 - updates var value to reset_to_98
 *  @a: first variable
 *  @b: second variable
 *  @p: placeholder variable
 *  @q: placeholder variable
 *  Return: void on Success
 */

void swap_int(int *a, int *b)
{
	int p = 0;
	int q = 0;
	
	p = *a;
	q = *b;

	p = *b;
	q = *a;	
}
