#include "binary_trees.h"
/**
 * binary_tree_uncle - func to find uncle of a node
 * @node: node looking for its uncle
 * Return: NULL if node is null or node is root or has no uncle
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	if (node->parent->parent->right == node->parent)
		return (node->parent->parent->left);
	return (node->parent->parent->right);
}
