#include "main.h"

/**
 *leet - encodes a string to 1337
 *@str: The string to be encoded
 *
 *REturn: A pointer to the encoded string
 */

char *leet(char *str)
{
	int indx1 = 0;
	int indx2;
	int leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[indx1])
	{
		if (str[indx1] == leet[indx2] ||
			str[indx1] - 32 == leet[indx2])
		{
			str[indx1] = indx2 + '0';
		}
		indx1++;
	}
	return (str);
}
