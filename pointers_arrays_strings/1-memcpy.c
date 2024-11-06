#include "main.h"
/**
 * _memcpy - Copie une zone mémoire de la source vers la destination
 * @dest: Pointeur vers la zone mémoire de destination
 * @src: Pointeur vers la zone mémoire source
 * @n: Nombre d'octets à copier de `src` vers `dest`
 *
 * Cette fonction copie `n` octets de la zone mémoire pointée par `src`
 * vers la zone mémoire pointée par `dest`. Elle retourne le pointeur vers
 * la destination.
 *
 * Retour: Pointeur vers la zone mémoire de destination `dest`
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	/* Copier chaque octet de `src` vers `dest` */
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];  /* Copie un octet de src vers dest */
	}
	return (dest); /* Retourne le pointeur `dest` */
}

