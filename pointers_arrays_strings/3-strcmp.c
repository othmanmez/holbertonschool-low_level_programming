#include "main.h"
/**
 * _strcmp - Compare deux chaînes de caractères
 * @s1: Première chaîne de caractères
 * @s2: Seconde chaîne de caractères
 *
 * Return: 0 si les chaînes sont identiques,
 *         < 0 si s1 est inférieure �|  s2,
 *         > 0 si s1 est supérieure �|  s2.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
