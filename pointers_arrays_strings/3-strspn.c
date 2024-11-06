#include <stdio.h>
/**
 * _strspn - Calcule la longueur du préfixe de @str qui contient uniquement
 * @str: La chaîne principale
 * @accept: La chaîne contenant les caractères acceptés dans le préfixe
 *
 * Return: La longueur de la sous-chaîne de préfixe de @str
 */
int _strspn(const char *str, const char *accept)
{
	int i, j;
	int found;

	for (i = 0; str[i] != '\0'; i++)
	{
		found = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (str[i] == accept[j])
			{
				found = 1;
				break;
			}
		}
		if (!found)
			break;
	}
	return (i);
}
