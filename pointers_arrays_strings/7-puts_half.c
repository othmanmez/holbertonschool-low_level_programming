#include "main.h"
/**
 * leet - Encode une chaîne de caractères en 1337 (leet).
 * @str: La chaîne de caractères �|  encoder.
 *
 * Return: Un pointeur vers la chaîne encodée.
 */
char *leet(char *str)
{
	int m = 0, j;

	char lettres[] = "aAeEoOtTlL";
	char nombres[] = "4433007711";

	while (str[m] != '\0')
	{
		for (j = 0; lettres[j] != '\0'; j++)
		{
			if (str[m] == lettres[j])
			{
				str[m] = nombres[j];
				break;
			}
		}
		m++;
	}
	return (str);
}
