#include "binary_trees.h"
/**
 * binary_tree_leaves - func that counts leaves in binary tree
 * @tree: tree to be checked
 * Return: 0 if tree is null, else size_t
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leavesCount = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		leavesCount += 1;
	leavesCount += binary_tree_leaves(tree->right);
	leavesCount += binary_tree_leaves(tree->left);
	return (leavesCount);
}
