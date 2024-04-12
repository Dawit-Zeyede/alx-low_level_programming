#include "hash_tables.h"
/**
 * hash_table_set - Add an item of Hash table.
 * @ht: A pointer to the hash table.
 * @key: Key for added item.
 * @value: Value for the key to be added.
 * Return: 0 or 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *cpy;
	unsigned long int index;
	unsigned long int count;

	if (ht == NULL || key == NULL)
		return (0);
	if (*key == '\0' || value == NULL)
		return (0);
	cpy = strdup(value);
	if (cpy == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	for (count = index; ht->array[count]; count++)
		if (strcmp(ht->array[count]->key, key) == 0)
		{
			free(ht->array[count]->value);
			ht->array[count]->value = cpy;
			return (1);
		}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(cpy);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = cpy;
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
