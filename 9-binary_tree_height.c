#include "binary_trees.h"

/**
 *
 *
 *
 *
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int i = 0;
	int j = 0;

	if (!tree)
		return (0);
	
	if (tree->left != NULL)
	{
		i++;
		binary_tree_height(tree->left);
	}
	if (tree->right != NULL)
	{
		j++;
		binary_tree_height(tree->right);
	}
	return (j);
	return (i);
}
