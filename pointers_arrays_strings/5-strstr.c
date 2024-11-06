#include <stddef.h> /* Pour NULL */
/**
 * _strstr - Locates the first occurrence of the substring `needle`
 *           in the string `haystack`.
 * @haystack: The main string to search within.
 * @needle: The substring to locate within `haystack`.
 *
 * Return: A pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;
	/* Si needle est une chaîne vide, retourne haystack */
	if (*needle == '\0')
		return (haystack);
	/* Parcourt chaque caractère de haystack */
	for (i = 0; haystack[i] != '\0'; i++)
	{
		/* Vérifie si needle correspond à partir de cette position */
		for (j = 0; needle[j] != '\0'; j++)
		{
			/* Si les caractères ne correspondent pas, arrêt de la vérification */
			if (haystack[i + j] != needle[j])
				break;
		}
		/* Si nous avons atteint la fin de needle, on a trouvé une correspondance */
		if (needle[j] == '\0')
			return (haystack + i); /* Retourne le pointeur vers le débu */
	}
	return (NULL); /* Retourne NULL si needle n'est pas trouvé dans haystack */
}
