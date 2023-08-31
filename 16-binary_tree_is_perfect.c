#include "binary_trees.h"
/**
 * whatDepth - func to get depth of node in binarey tree
 * @tree: node to be measured
 * Return: depth of the node or 0
*/
size_t whatDepth(const binary_tree_t *tree)
{
	return (tree->parent ? 1 + whatDepth(tree->parent) : 0);
}
/**
 * leaf - func to get leaf of binary tree
 * @tree: tree where to get leaf
 * Return: pointer of 1st time leaf found
*/
const binary_tree_t *leaf(const binary_tree_t *tree)
{
	if (((!tree->left && !tree->right) ? 1 : 0) == 1)
		return (tree);
	return (tree->left ? leaf(tree->left) : leaf(tree->right));
}
/**
 * recursiveCheck - recursive function.
 * @tree: binary tree to check
 * @depth: depth of leaf in tree.
 * @lvl: current node's level.
 * Return: 0 null or not perfect, 1 perfect.
 */
int recursiveCheck(const binary_tree_t *tree, size_t lvl, size_t depth)
{
	if (((!tree->left && !tree->right) ? 1 : 0))
		return (lvl == depth ? 1 : 0);
	if (!tree->left || !tree->right)
		return (0);
	return (
		recursiveCheck(tree->left, lvl + 1, depth) &&
		recursiveCheck(tree->right, lvl +1, depth)
	);
}
/**
 * binary_tree_is_perfect - func to check if binary tree is perfect
 * @tree: tree to be checked
 * Return: 0 if tree is null, else int
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (
		recursiveCheck(tree, 0, whatDepth(leaf(tree)))
	);
}
