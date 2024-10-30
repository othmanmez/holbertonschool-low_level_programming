#include <stdio.h>

/**
 * swap_int - échange la valeur de 2 entier.
 *
 * @a: premier entier
 * @b: deuxième entier
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}
