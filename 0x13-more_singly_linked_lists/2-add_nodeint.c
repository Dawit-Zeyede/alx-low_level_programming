#include "lists.h"
/**
  * add_nodeint - add a new node at the beginning of a listint_t list.
  * @head: a pointer to pointer of an existing node.
  * @n: value to be filled to the new node.
  * Return: a pointer to the new node.
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
