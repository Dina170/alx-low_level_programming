#include "hash_tables.h"

/**
  * hash_table_get - Retrieves a value associated with a key
  * @ht: The hash table to look into
  * @key: The key to finding
  *
  * Return: The value associated with the element
  * or NULL if key couldn't be found
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *item = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((unsigned char *) key, ht->size);
	item = ht->array[index];

	if (item == NULL)
		return (NULL);

	while (strcmp(key, item->key) != 0)
		item = item->next;

	return (item->value);
}
