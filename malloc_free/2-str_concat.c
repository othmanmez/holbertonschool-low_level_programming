#include <stdlib.h>

/**
 * str_concat - Concatène deux chaînes de caractères.
 * @s1: La première chaîne.
 * @s2: La seconde chaîne.
 *
 * Return: Un pointeur vers la chaîne concaténée, ou NULL en cas d'échec.
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	unsigned int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	result = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		result[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		result[i + j] = s2[j];
	}
	result[i + j] = '\0';
	return (result);
}

