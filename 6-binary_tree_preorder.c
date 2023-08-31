#include "binary_trees.h"
/**
 * binary_tree_preorder - func to go through a tree using preorder traversal
 * @tree: binary tree to traverse
 * @func: pointer to func to be called on each node
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
