#include "main.h"
/**
 * rev_string - reverse a string
 * @s: the string to reverse
 */
void rev_string(char *s)
{
	int length = 0;
	int i;
	char temp;
	/* Calculer la longueur de la chaîne */
	while (s[length] != '\0')
	{
		length++;
	}
	/* Inverser la chaîne */
	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
