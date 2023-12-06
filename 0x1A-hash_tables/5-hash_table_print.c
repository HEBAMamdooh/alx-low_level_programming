#include "hash_tables.h"

/**
 * hash_table_print - print key/values of hash table in order
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx = 0;
	hash_node_t *node;
	char *sep = "";

	if (!ht || !ht->array)
		return;

	putchar('{');
	while (idx < ht->size)
	{
		node = ((ht->array)[idx]);
		while (node)
		{
			printf("%s'%s': '%s'", sep, node->key, node->value);
			sep = ", ";
			node = node->next;
		}
		idx++;
	}
	puts("}");
}
