#include "binary_trees.h"
/**
 * binary_tree_insert_left - func to insert node at left-child of another node
 * @parent: node where left child to be inserted
 * @value: value of new node
 * Return: pointer or null on error
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *nNode;

	if (!parent)
		return (NULL);
	nNode = binary_tree_node(parent, value);
	if (!nNode)
		return (NULL);
	if (parent->left)
	{
		nNode->left = parent->left;
		parent->left->parent = nNode;
	}
	parent->left = nNode;
	return (nNode);

}
