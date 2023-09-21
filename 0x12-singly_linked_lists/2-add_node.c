#include "lists.h"
#include <string.h>
/**
  * add_node - adds a new node at the beginning of a list_t list.
  * @head: pointer to a pointer pointing to first node.
  * @str: string to be added.
  * Return: pointer to the new elements.
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *list;

	list = malloc(sizeof(list_t));
	if (list == NULL)
		return (NULL);
	(list)->str = strdup(str);
	(list)->next = *head;
	*head = list;
	return (*head);
}
