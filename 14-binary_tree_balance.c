#include "binary_trees.h"

/**
 * binary_tree_height - function that returns the height of a tree
 * @tree: the current tree were gonna get the height from.
 * Return: 0 if theres no tree else we return the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count_left = 0, count_right = 0;

	if (!tree)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);
	count_left = binary_tree_height(tree->left);
	count_right = binary_tree_height(tree->right);

	if (count_left >= count_right)
		return (count_left + 1);
	else
		return (count_right + 1);
}

/**
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t count_left = 0, count_right = 0;

	if (!tree)
		return (0);

	if (!tree->left)
		count_left = binary_tree_height(tree->left);
	else
		count_left -= 1;

	if (tree->right)
		count_right = binary_tree_height(tree->right);
	else
		count_right -= 1;
	return (count_left - count_right);
}
