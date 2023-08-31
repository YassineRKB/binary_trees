#include "binary_trees.h"
/**
 * binary_tree_insert_right - func to insert b node as right child of a node
 * @parent: node to recieve right-child
 * @value: value stored in new node
 * Return: pointer or null on error
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *nNode;

	if (!parent)
		return (NULL);
	nNode = binary_tree_node(parent, value);
	if (!nNode)
		return (NULL);
	if (parent->right)
	{
		nNode->right = parent->right;
		parent->right->parent = nNode;
	}
	parent->right = nNode;
	return (nNode);
}
