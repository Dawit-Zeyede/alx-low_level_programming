#include "hash_tables.h"
/**
 * hash_table_get - get an item from hash table.
 * @ht: A pointer to hash table.
 * @key: Key to the value to be found.
 * Return: item in a hash table or NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *valadr;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);
	valadr = ht->array[index];
	while (valadr && strcmp(valadr->key, key) != 0)
		valadr = valadr->next;
	return ((valadr == NULL) ? NULL : valadr->value);
}
