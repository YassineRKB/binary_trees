#include "binary_trees.h"

/**
 * array_to_bst - function that builds a Binary
 * Search Tree from an array
 * @array: array
 * @size: size
 * Return: node or NULL
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *node = NULL;
	int i = 0;

	if (!array)
		return (NULL);
	for (; i < (int)size; i++)
		bst_insert(&node, array[i]);
	return (node);
}
