#include "binary_trees.h"
/**
 * binary_tree_is_full - func to check if binary tree is full
 * @tree: tree to be checked
 * Return: 0 i tree is Null
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int checkLeft = 0, checkRight = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (tree->left)
		checkLeft = binary_tree_is_full(tree->left);
	if (tree->right)
		checkRight = binary_tree_is_full(tree->right);
	if (checkLeft == 0 || checkRight == 0)
		return (0);
	return (1);
}
