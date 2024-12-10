#include "binary_trees.h"

/**
 * binary_tree_nodes - calculates the numbers of nodes that have a child
 * @tree: the current tree to use the function on
 * Return: 0 if no tree else will return the number of nodes with a child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (0);
	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);

	return (left + right + 1);
}
