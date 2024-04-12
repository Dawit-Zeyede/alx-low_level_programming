#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table.
 * @size: size of an array(table) to be created.
 * Return: a pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;
	unsigned long int count;

	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
		return (NULL);
	new->size = size;
	new->array = malloc(sizeof(hash_node_t *) * size);
	if (new->array == NULL)
		return (NULL);
	for (count = 0; count < size; count++)
		new->array[count] = NULL;
	return (new);
}
