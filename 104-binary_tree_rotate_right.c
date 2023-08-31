#include "binary_trees.h"
/**
 * binary_tree_rotate_right - func to perform a right rotation
 * in a binary tree
 * @tree: afected tree's ointer
 * Return: NULL on fail else pointer of root node of the tree
*/
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *childNode;

	if (!tree || !tree->left)
		return (NULL);
	childNode = tree->left;
	tree->left = childNode->right;
	if (childNode->right)
		childNode->right->parent = tree;
	childNode->parent = tree->parent;
	if (tree->parent)
	{
		if (tree->parent->right == tree)
			tree->parent->right = childNode;
		else
			tree->parent->left = childNode;
	}
	childNode->right = tree;
	tree->parent = childNode;
	return (childNode);
}
