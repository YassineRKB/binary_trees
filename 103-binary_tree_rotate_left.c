#include "binary_trees.h"
/**
 * binary_tree_rotate_left - func to perform a left rotation
 * in a binary tree
 * @tree: afected tree's ointer
 * Return: NULL on fail else pointer of root node of the tree
*/
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *childNode;

	if (!tree || !tree->right)
		return (NULL);
	childNode = tree->right;
	tree->right = childNode->left;
	if (childNode->left)
		childNode->left->parent = tree;
	childNode->parent = tree->parent;
	if (tree->parent)
	{
		if (tree->parent->left == tree)
			tree->parent->left = childNode;
		else
			tree->parent->right = childNode;
	}
	childNode->left = tree;
	tree->parent = childNode;
	return (childNode);
}
