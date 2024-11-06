#include <stdio.h>
/**
 * print_diagsums - Prints the sums of the two diagonals of a square matrix.
 * @a: Pointer to the first element of the matrix.
 * @size: Size of the matrix (number of rows and columns).
 *
 * Return: Nothing.
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0;
	int i;
	/* Calcul de la somme de la première diagonale (haut gauche à bas droit) */
	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
	}
	/* Calcul de la somme de la deuxième diagonale (haut droit à bas gauche) */
	for (i = 0; i < size; i++)
	{
		sum2 += a[i * size + (size - 1 - i)];
	}
	/* Affichage des sommes des diagonales */
	printf("%d, %d\n", sum1, sum2);
}
