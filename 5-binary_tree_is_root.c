#include "binary_trees.h"

/**
 * binary_tree_is_root - The function that verify if the given node is a root
 * @node: the node to check
 *
 * Return: 0 if the node is the root and 1 if the node isnt the root.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);

	return (0);
}
