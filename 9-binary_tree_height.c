#include "binary_trees.h"
/**
 * binary_tree_height - func to measure binary tree height
 * @tree: tree to be measured
 * Return: 0 if tree is null else height
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_left = 0, h_right = 0, r;

	if (tree)
	{
		if (tree->left)
			h_left = 1 + binary_tree_height(tree->left);
		if (tree->right)
			h_right = 1 + binary_tree_height(tree->right);
		r = h_right;
		if (h_left > h_right)
			r = h_left;
		return (r);
	}
	return (0);
}
