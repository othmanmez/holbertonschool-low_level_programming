#include "main.h"
/**
 * _memset - Remplit une zone de mémoire avec un octet constant
 * @s: pointeur vers la zone de mémoire à remplir
 * @b: l'octet constant utilisé pour remplir
 * @n: nombre de premiers octets de la mémoire à remplir
 *
 * Description: La fonction remplit les `n` premiers octets de la mémoire
 * pointée par `s` avec la valeur de l'octet `b`.
 *
 * Return: Un pointeur vers la zone de mémoire `s` après remplissage
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	/* Parcourt les premiers `n` octets et les remplit avec `b` */
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);  /* Retourne le pointeur vers la zone de mémoire remplie */
}
