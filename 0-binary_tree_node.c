#include "binary_trees.h"
/**
 * binary_tree_node - func to make binary tree
 * @parent: node parent pointer
 * @value: node value
 * Return: pointer
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nNode;

	nNode = malloc(sizeof(binary_tree_t));
	if (!nNode)
		return (NULL);
	nNode->parent = parent;
	nNode->left = NULL;
	nNode->right = NULL;
	nNode->n = value;

	return (nNode);
}
