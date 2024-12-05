#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Ajoute un nouveau nœud à la fin d'une liste chaînée list_t.
 * @head: Pointeur vers le pointeur de tête de la liste.
 * @str: La chaîne de caractères à copier dans le nouveau nœud.
 *
 * Return: L'adresse du nouvel élément, ou NULL si l'opération échoue.
 */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new_node, *temp;

    /* Allocation mémoire pour le nouveau nœud */
    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
    {
        return (NULL); /* Échec de l'allocation mémoire */
    }

    /* Duplication de la chaîne str */
    new_node->str = strdup(str);
    if (new_node->str == NULL)
    {
        free(new_node);  /* Libération du nœud si la duplication échoue */
        return (NULL);
    }

    /* Définir la longueur de la chaîne */
    new_node->len = strlen(new_node->str);

    /* Le nouveau nœud doit avoir un pointeur next à NULL */
    new_node->next = NULL;

    /* Si la liste est vide, le nouveau nœud devient la tête de la liste */
    if (*head == NULL)
    {
        *head = new_node;
    }
    else
    {
        /* Sinon, on parcourt la liste jusqu'au dernier nœud */
        temp = *head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        /* Ajouter le nouveau nœud à la fin de la liste */
        temp->next = new_node;
    }

    return (new_node);  /* Retourne l'adresse du nouveau nœud */
}

