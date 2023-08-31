#include "binary_trees.h"
/**
 * recursiveCheck - recursive function for binary_tree_is_bst
 * @tree: tree to be checked
 * @min: lowest node traversed
 * @max: highest node traversed
 * Return: 0 if not bst, else 1
 */
int recursiveCheck(const binary_tree_t *tree, int min, int max)
{
	if (tree)
	{
		if (tree->n < min || tree->n > max)
			return (0);
		return (
			recursiveCheck(tree->left, min, tree->n - 1) &&
			recursiveCheck(tree->right, tree->n + 1, max)
		);
	}
	return (1);
}
/**
 * binary_tree_is_bst - func to check if binary tree is valid bst
 * @tree: tree to be checked
 * Return: 0 if not bst, else 1
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (recursiveCheck(tree, INT_MIN, INT_MAX));
}
