#include <stdio.h>
/**
 * main - Affiche l'alphabet en minuscules dix fois.
 *
 * Return: Toujours 0.
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			putchar(j);
		}
		putchar('\n');
	}
	return (0);
}
