#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - ajoute un nouveau nœud au début d'une liste list_t
 * @head: adresse du pointeur vers la tête de la liste
 * @str: chaîne à dupliquer et à mettre dans le nouveau nœud
 *
 * Return: l’adresse du nouveau nœud, ou NULL en cas d’échec
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;


	while (str && str[len])
		len++;


	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);


	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
