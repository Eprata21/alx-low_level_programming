#include "hash_tables.h"

/**
 * key_index - a function tha gives the index of key
 * @key: key
 * @size: the size of the array of the key
 * Return: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);

	return (hash % size);
}
