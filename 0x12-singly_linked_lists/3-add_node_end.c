#include "lists.h"
/**
  * add_node_end - new node at the end of a list_t list.
  * @head: a pointer to pointer of NULL.
  * @str: the string element of a node.
  * Return: new node address.
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *list;

	list = malloc(sizeof(list_t));
	list->str = strdup(str);
	list->next = *head;
	*head = list;
	return (list);
}
