#include "binary_trees.h"
/**
 * binary_trees_ancestor - func to find common ancenstor
 * between 2 nodes
 * @first: node a
 * @second: node b
 * Return: NULL on no ancestor, else pointer to ancestor
*/
binary_tree_t *binary_trees_ancestor(
	const binary_tree_t *first, const binary_tree_t *second
)
{
	binary_tree_t *nodeA, *nodeB;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)second);
	nodeA = first->parent;
	nodeB = second->parent;
	if (nodeA == second || !nodeB || (nodeA && !nodeB->parent))
		return (binary_trees_ancestor(nodeA, second));
	if (first == nodeB || !nodeA || (nodeB && !nodeA->parent))
		return (binary_trees_ancestor(nodeB, first));
	return (binary_trees_ancestor(nodeA, nodeB));
}
