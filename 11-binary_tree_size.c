#include "binary_trees.h"

/**
 * binary_tree_size - function that calculates the size of a tree.
 * @tree: the current tree to use the function on.
 * Return: 0 if theres no tree else return the size of the tree
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
