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

/**
 * recursiveCheck - recursive function for binary_tree_is_complete
 * @root: tree
 * @index: index of the node
 * @size: size of the tree
 * Return: 0 if not complete, else 
 */
int recursiveCheck(const binary_tree_t *isRoot, int size, int index)
{
	if (!isRoot)
		return (1);
	if (index >= size)
		return (0);
	return (
		recursiveCheck(isRoot->left, size, 2 * index + 1) &&
		recursiveCheck(isRoot->right, size, 2 * index + 2)
	);
}

/**
 * binary_tree_is_complete - func to check if tree is complete
 * @tree: binary tree to be checked
 * Return: 0 if not complete, else 1
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (
		recursiveCheck(tree, (int)binary_tree_size(tree), 0)
	);
}
