#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table.
 * @ht: a pointer to the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int count;
	unsigned char flag = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (count = 0; count < ht->size; count++)
	{
		if (ht->array[count] != NULL)
		{
			if (flag == 1)
				printf(", ");
			current = ht->array[count];
			while (current != NULL)
			{
				printf("'%s': '%s'", current->key, current->value);
				current = current->next;
				if (current != NULL)
					printf(", ");
			}
			flag = 1;
		}
	}
	printf("}\n");
}
