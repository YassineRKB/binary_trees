#include "binary_trees.h"
/**
 * binary_tree_is_root - func to check if node is root
 * @node: node to be checked
 * Return: o if node is null
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || node->parent)
		return (0);
	return (1);
}
