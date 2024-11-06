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

	temp = *a; /*Stocke la valeur de *a dans temp*/
	*a = *b; /*Assigne la valeur de *b à *a*/
	*b = temp; /*Assigne la valeur de temp à *b*/

}
