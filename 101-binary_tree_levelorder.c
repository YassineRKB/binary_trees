#include "binary_trees.h"
/**
 * treeSaver - binary tree to array
 * @tree: tree
 * @tarr: tree array
 * @index: index
 */
void treeSaver(const binary_tree_t *tree, int *tarr, int index)
{
	if (!tree)
		return;
	tarr[index] = tree->n;
	treeSaver(tree->left, tarr, (2 * index) + 1);
	treeSaver(tree->right, tarr, (2 * index) + 2);
}
/**
 * binary_tree_size - func to get size of binary tree
 * @tree: pointer to root tree to measure size
 * Return: if tree is null, 0 else size
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);
	size += 1;
	size += binary_tree_size(tree->right);
	size += binary_tree_size(tree->left);
	return (size);
}
/**
 * binary_tree_levelorder - func to go through a binary tree
 * using level-order traversal
 * @tree: binary tree to traverse
 * @func: function to be lanched on each node
*/
void binary_tree_levelorder(
	const binary_tree_t *tree, void (*func)(int)
)
{
	int i, *tarr, size;

	if (!tree || !func)
		return;
	size = binary_tree_size(tree);
	tarr = malloc(size * sizeof(int));
	if (!tarr)
		return;
	treeSaver(tree, tarr, 0);
	for (i = 0; i < size; i++)
		func(tarr[i]);
	free(tarr);
}
