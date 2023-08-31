#include "binary_trees.h"
/**
 * bst_search - func to find value in a BST.
 * @tree: bst tree to be searched.
 * @value: neddle.
 * Return: NULL if tree is null or value missing else,
 * pointer to value.
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree)
	{
		if (tree->n == value)
			return ((bst_t *)tree);
		if (tree->n > value)
			return (bst_search(tree->left, value));
		return (bst_search(tree->right, value));
	}
	return (NULL);
}
