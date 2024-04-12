#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table.
 * @ht: A pointer to a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head;
	hash_node_t *current;
	hash_node_t *cpy;
	unsigned long int count;

	head = ht;
	for (count = 0; count < ht->size; count++)
	{
		if (ht->array[count] != NULL)
		{
			current = ht->array[count];
			while (current != NULL)
			{
				cpy = current->next;
				free(current->key);
				free(current->value);
				free(current);
				current = cpy;
			}
		}
	}
	free(head->array);
	free(head);
}
