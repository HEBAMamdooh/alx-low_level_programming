#include "hash_tables.h"

/**
 * create_shash_node - Creates a new sorted hash table node
 * @key: The key for the new node
 * @value: The value for the new node
 * Return: Pointer to the new node, or NULL on failure
 */
static shash_node_t *create_shash_node(const char *key, const char *value)
{
	shash_node_t *node = malloc(sizeof(shash_node_t));
	if (!node)
		return NULL;

	node->key = strdup(key);
	node->value = strdup(value);
	if (!node->key || !node->value)
	{
		free(node->key);
		free(node->value);
		free(node);
		return NULL;
	}

	node->next = NULL;
	node->sprev = NULL;
	node->snext = NULL;

	return node;
}

/**
 * insert_sorted - Inserts a node into the sorted linked list of a sorted hash table
 * @ht: The sorted hash table
 * @node: The node to insert
 */
static void insert_sorted(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *current, *prev = NULL;
	for (current = ht->shead; current != NULL && strcmp(current->key, node->key) < 0; prev = current, current = current->snext)
		;

	node->sprev = prev;
	node->snext = current;

	if (prev)
		prev->snext = node;
	else
		ht->shead = node;

	if (current)
		current->sprev = node;
	else
		ht->stail = node;
}

/**
 * shash_table_create - Creates a sorted hash table
 * @size: The size of the array
 * Return: A pointer to the newly created hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table = malloc(sizeof(shash_table_t));
	if (!table)
		return NULL;

	table->size = size;
	table->array = calloc(size, sizeof(shash_node_t *));
	if (!table->array)
	{
		free(table);
		return NULL;
	}

	table->shead = NULL;
	table->stail = NULL;

	return table;
}

/**
 * shash_table_set - Adds or updates an element in a sorted hash table
 * @ht: The hash table
 * @key: The key, cannot be an empty string
 * @value: The value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *node, *new_node;

	if (!ht || !key || !value || strlen(key) == 0)
		return 0;

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	/* Check if key already exists */
	while (node)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			return 1;
		}
		node = node->next;
	}

	/*Create new node*/ 
	new_node = create_shash_node(key, value);
	if (!new_node)
		return 0;

	/*Insert into hash table*/ 
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	/*Insert into sorted list*/ 
	insert_sorted(ht, new_node);

	return 1;
}

/**
 * shash_table_get - Retrieves a value associated with
 *			a key in a sorted hash table
 * @ht: The hash table
 * @key: The key to look for
 * Return: The value associated with the element, or NULL if key couldn’t be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	if (!ht || !key)
		return NULL;

	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	shash_node_t *node = ht->array[index];

	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return node->value;
		node = node->next;
	}

	return NULL;
}

/**
 * shash_table_print - Prints a sorted hash table
 * @ht: The hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	if (!ht)
		return;

	shash_node_t *node = ht->shead;
	printf("{");
	while (node)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
		if (node)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order
 * @ht: The hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	if (!ht)
		return;

	shash_node_t *node = ht->stail;
	printf("{");
	while (node)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		if (node)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table
 * @ht: The hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *node, *temp;

	if (!ht) return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			temp = node;
			node = node->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}

	free(ht->array);
	free(ht);
}
