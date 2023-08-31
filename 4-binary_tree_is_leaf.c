#include "binary_trees.h"
/**
 * binary_tree_is_leaf - func to check if node is leaf
 * @node: pointer of node to be checked
 * Return: 0 if node is null
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node || node->left || node->right)
		return (0);
	return (1);
}
