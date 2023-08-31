#include "binary_trees.h"
/**
 * binary_tree_sibling - func to find a sibling of a node
 * @node: node to find its sibling
 * Return: NULL if node or parent is NULL or has no 
 * sibling else pointer to the sibling
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->right == node)
		return (node->parent->left);
	return (node->parent->right);

}
