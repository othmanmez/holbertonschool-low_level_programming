#include "main.h"
#include <stddef.h>  /* Inclure pour NULL */

/**
 * _strpbrk - Recherche un caractère dans une chaîne qui correspond à un des
 *            caractères d'un autre ensemble de caractères.
 * @s: La chaîne à parcourir.
 * @accept: La chaîne contenant les caractères à rechercher.
 *
 * Retourne : Un pointeur vers le premier caractère de `s` qui correspond
 *            à un des caractères de `accept`, ou NULL si aucun caractère
 *            n'est trouvé.
 */
char *_strpbrk(char *s, char *accept)
{
    int i, j;  /* Compteurs pour les boucles */

    /* Parcours de chaque caractère de `s` */
    for (i = 0; s[i] != '\0'; i++) 
    {
        /* Vérification contre chaque caractère de `accept` */
        for (j = 0; accept[j] != '\0'; j++) 
        {
            if (s[i] == accept[j])  /* Si une correspondance est trouvée */
            {
                return (s + i);  /* Retourne un pointeur vers le caractère correspondant dans `s` */
            }
        }
    }

    return (NULL);  /* Retourne NULL si aucune correspondance n'a été trouvée */
}

