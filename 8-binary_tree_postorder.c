#include "binary_trees.h"
/**
 * binary_tree_postorder - func to traverse tree using postorder
 * @tree: tree to traverse
 * @func: func to be called on each node
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
