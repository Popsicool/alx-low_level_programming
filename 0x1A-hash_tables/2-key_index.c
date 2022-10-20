#include "hash_tables.h"
/**
 * key_index - a function that gives you the index of a key
 * @key: key to find
 * @size: size of the array of the hash table
 * Return: index of the key in the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
