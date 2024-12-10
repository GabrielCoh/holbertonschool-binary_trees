#include "binary_trees.h"

/**
 * binary_tree_height - function that returns the height of a tree
 * @tree: the current tree were gonna get the height from.
 * Return: 0 if theres no tree else we return the height
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
	return (i);
}
