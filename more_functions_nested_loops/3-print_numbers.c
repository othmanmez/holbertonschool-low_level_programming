#include <stdio.h>
/* Prototype de _putchar */
int _putchar(char c);

/**
 * print_numbers - affiche les nombres de 0 à 9 suivis d'un saut de ligne
 */
void print_numbers(void)
{
	int i;  /* Déclaration de la variable avant la boucle*/

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');  /* Convertit l'entier en caractère et l'affiche*/
	}
	_putchar('\n');  /*Affiche un saut de ligne*/
}
