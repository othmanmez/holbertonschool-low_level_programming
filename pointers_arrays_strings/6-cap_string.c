#include <stdio.h>

/**
 * cap_string - Met en majuscule
 * première letre de chaque mot dans une chaîne.
 * @str: Pointeur vers la chaîne à modifier.
 *
 * Return: Pointeur vers la chaîne modifiée.
 */
char *cap_string(char *str)
{
	int i = 0;
	int capitalize_next = 1; /* Indique si le prochain est en majuscule */
	char separators[] = " \t\n,;.!?\"(){}"; /* Séparateurs de mots */
	int j; /* Déclaration de j ici */

	while (str[i])
	{
		/* Vérifie si le caractère doit être mis en majuscule */
		if (capitalize_next && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32; /* Convertit en majuscule */
		}
		capitalize_next = 0; /* Réinitialise le drapeau */

		/* Vérifie si le caractère actuel est un séparateur */
		for (j = 0; separators[j]; j++)
		{
			if (str[i] == separators[j])
			{
				capitalize_next = 1; /*mettre en majuscule le prochain caractère */
				break;
			}
		}
		i++; /* Passe au caractère suivant */
	}

	return (str); /* Retourne le pointeur vers la chaîne modifiée */
}
