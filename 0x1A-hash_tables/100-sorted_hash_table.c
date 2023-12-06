#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * shash_table_create - Creates a sorted hash table
 * @size: The size of the array
 *
 * Return: A pointer to the newly created hash table
 */
shash_table_t *shash_table_create(unsigned long int size) {
	shash_table_t *hash_table = malloc(sizeof(shash_table_t));
	if (hash_table == NULL) {
		return NULL;
	}

	hash_table->size = size;
	hash_table->array = malloc(sizeof(shash_node_t *) * size);
	if (hash_table->array == NULL) {
		free(hash_table);
		return NULL;
	}

	for (unsigned long int i = 0; i < size; i++) {
		hash_table->array[i] = NULL;
	}

	hash_table->shead = NULL;
	hash_table->stail = NULL;

	return hash_table;
}

/**
 * shash_table_set - Adds an element to the hash table
 * @ht: The hash table to add or update the key/value to
 * @key: The key. key can not be an empty string
 * @value: The value associated with the key. value must be duplicated. value can be an empty string
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value) {
	if (ht == NULL || key == NULL || *key == '\0' || value == NULL) {
		return 0;
	}

	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	shash_node_t *new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL) {
		return 0;
	}

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL) {
		free(new_node);
		return 0;
	}

	// Insert into the hash table
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	// Insert into the sorted linked list
	shash_node_t *current = ht->shead;
	shash_node_t *previous = NULL;
	while (current != NULL && strcmp(key, current->key) > 0) {
		previous = current;
		current = current->snext;
	}

	new_node->snext = current;
	new_node->sprev = previous;

	if (previous == NULL) { // Insert at the beginning
		ht->shead = new_node;
	} else {
		previous->snext = new_node;
	}

	if (current == NULL) { // Insert at the end
		ht->stail = new_node;
	} else {
		current->sprev = new_node;
	}

	return 1;
}

/**
 * shash_table_get - Retrieves a value associated with a key
 * @ht: The hash table to look into
 * @key: The key to look for
 *
 * Return: The value associated with the element, or NULL if key couldn’t be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key) {
	if (ht == NULL || key == NULL) {
		return NULL;
	}

	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	shash_node_t *node = ht->array[index];

	while (node != NULL) {
		if (strcmp(node->key, key) == 0) {
			return node->value;
		}
		node = node->next;
	}

	return NULL;
}

/**
 * shash_table_print - Prints a hash table using the sorted linked list
 * @ht: The hash table
 */
void shash_table_print(const shash_table_t *ht) {
	if (ht == NULL) {
		return;
	}

	shash_node_t *node = ht->shead;
	putchar('{');
	while (node != NULL) {
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
		if (node != NULL) {
			printf(", ");
		}
	}
	puts("}");
}

/**
 * shash_table_print_rev - Prints a hash table in reverse order using the sorted linked list
 * @ht: The hash table
 */
void shash_table_print_rev(const shash_table_t *ht) {
	if (ht == NULL) {
		return;
	}

	shash_node_t *node = ht->stail;
	putchar('{');
	while (node != NULL) {
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		if (node != NULL) {
			printf(", ");
		}
	}
	puts("}");
}

/**
 * shash_table_delete - Deletes a hash table
 * @ht: The hash table
 */
void shash_table_delete(shash_table_t *ht) {
	if (ht == NULL) {
		return;
	}

	for (unsigned long int i = 0; i < ht->size; i++) {
		shash_node_t *node = ht->array[i];
		while (node != NULL) {
			shash_node_t *temp = node;
			node = node->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}

	free(ht->array);
	free(ht);
}

// You need to include the implementation of key_index and the hash function (like djb2) here or in separate files.
