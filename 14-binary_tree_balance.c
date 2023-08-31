#include "binary_trees.h"
/**
 * binary_tree_height - func to measure binary tree height
 * @tree: tree to be measured
 * Return: 0 if tree is null else height
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_left = 0, h_right = 0, r;

	if (!tree)
		return (0);
	if (tree->left)
		h_left += 1 + binary_tree_height(tree->left);
	if (tree->right)
		h_right += 1 + binary_tree_height(tree->right);
	r = h_right;
	if (h_left > h_right)
		r = h_left;
	return (r);
}
/**
 * binary_tree_balance - func to measure the balance factor of
 * binary tree
 * @tree: tree to be measured
 * Return: 0 if tree is null
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t bl = 0, br = 0, r;

	if (!tree)
		return (0);
	if (tree->left)
		bl += 1 + binary_tree_height(tree->left);
	if (tree->right)
		br += 1 + binary_tree_height(tree->right);
	r = bl - br;
	return (r);
}

