#include "binary_trees.h"
/**
 * binary_tree_size - func to get size of binary tree
 * @tree: pointer to root tree to measure size
 * Return: if tree is null, 0 else size
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);
	size += 1;
	size += binary_tree_size(tree->right);
	size += binary_tree_size(tree->left);
	return (size);
}
