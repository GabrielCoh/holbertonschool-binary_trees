#include "binary_trees.h"

/**
 * binary_tree_height - function that returns the height of a tree
 * @tree: the current tree were gonna get the height from.
 * Return: 0 if theres no tree else we return the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lh = 0, rh = 0;

	if (!tree)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	lh = binary_tree_height(tree->left);
	rh = binary_tree_height(tree->right);

	if (lh >= rh)
		return (lh + 1);
	else
		return (rh + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: 0 or the balance factor of the binary tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t lh, rh;

	if (!tree)
		return (0);

	lh = (tree->left != NULL) ? binary_tree_balance(tree->left) : -1;
	rh = (tree->right != NULL) ? binary_tree_balance(tree->right) : -1;

	return (lh - rh);
}
