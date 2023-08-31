#include "binary_trees.h"
/**
 * recursiveCheck - recursive function for bst_insert
 * @tree: tree where to insert
 * @node: node to be inserted
 * Return: null on fail, else pointer to node
 */
bst_t *recursiveCheck(bst_t **tree, bst_t *node)
{
	if ((*tree)->n == node->n)
	{
		free(node);
		return (NULL);
	}
	if ((*tree)->n > node->n)
	{
		if ((*tree)->left)
			return (
				recursiveCheck(&(*tree)->left, node)
			);
		(*tree)->left = node;
		node->parent = (*tree);
		return (node);
	}
	else
	{
		if ((*tree)->right)
			return (
				recursiveCheck(&(*tree)->right, node)
			);
		(*tree)->right = node;
		node->parent = (*tree);
		return (node);
	}
}
/**
 * bst_insert - insert a new node in a BST
 * @tree: tree
 * @value: value of the new node
 * Return: node (success) | NULL (failed)
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *node;

	node = binary_tree_node(NULL, value);
	if (!node)
		return (NULL);

	if (!(*tree) || !tree)
	{
		(*tree) = node;
		return (node);
	}

	return (recursiveCheck(tree, node));
}
