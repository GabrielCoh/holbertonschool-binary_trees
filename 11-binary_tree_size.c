#include "binary_trees.h"

/**
 *
 *
 *
 *
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);
	if (tree->left != NULL)
		count += binary_tree_size(tree->left);
	if (tree->right != NULL)
		count += binary_tree_size(tree->right);
	return (count + 1);
}
