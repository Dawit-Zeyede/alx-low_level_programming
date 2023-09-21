#include "lists.h"
#include <string.h>
/**
  * add_node_end - new node at the end.
  * @head: pointer to a pointer to fist node.
  * @str: string to be appended.
  * Return: end of the program.
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *list;

	list = malloc(sizeof(list_t));
	if (list == NULL)
		return (NULL);
	(*head)->next = list;
	list->str = strdup(str);
	list->next = NULL;
	return (list);
}
