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
/**
 * bst_remove - function that removes a node from a BST
 * @root: root
 * @value: value
 * Return: node or 0
 */
bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *drowNode, *sNode = NULL, *child;

	drowNode = bst_search(root, value);
	if (!drowNode)
		return (root);
	if (drowNode->left && drowNode->right)
	{
		sNode = drowNode->right;
		while (sNode->left)
			sNode = sNode->left;
		drowNode->n = sNode->n;
		drowNode = sNode;
	}
	if (drowNode->left || drowNode->right)
	{
		child = (drowNode->left) ? drowNode->left : drowNode->right;
		child->parent = drowNode->parent;
		if (drowNode == drowNode->parent->right)
			drowNode->parent->right = child;
		else
			drowNode->parent->left = child;
	}
	else
	{
		if (drowNode == drowNode->parent->right)
			drowNode->parent->right = NULL;
		else
			drowNode->parent->left = NULL;
	}
	free(drowNode);
	return (root);
}
