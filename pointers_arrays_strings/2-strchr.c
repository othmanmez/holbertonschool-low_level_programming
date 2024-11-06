#include "main.h"
#include <stddef.h>  /* Inclure pour NULL */

/**
 * _strchr - Localiser un caractère dans une chaîne.
 * @s: Pointeur vers la chaîne à parcourir.
 * @c: Le caractère à localiser dans la chaîne.
 *
 * Cette fonction retourne un pointeur vers la première occurrence du caractère
 * `c` dans la chaîne `s`. Si le caractère n'est pas trouvé, elle retourne NULL.
 *
 * Retour: Un pointeur vers la première occurrence de `c` dans `s`, ou NULL si non trouvé.
 */
char *_strchr(char *s, char c)
{
    while (*s)  /* Tant que le caractère actuel n'est pas le caractère nul */
    {
        if (*s == c)  /* Si le caractère actuel correspond à `c` */
        {
            return (s);  /* Retourner un pointeur vers le caractère trouvé */
        }
        s++;  /* Passer au caractère suivant dans la chaîne */
    }

    /* Vérifier si le caractère recherché est le caractère nul '\0' */
    if (*s == c)  /* Si on arrive au caractère nul et qu'il correspond à `c` */
    {
        return (s);  /* Retourner un pointeur vers le caractère nul si `c` est '\0' */
    }

    return (NULL);  /* Retourner NULL si `c` n'a pas été trouvé dans la chaîne */
}

