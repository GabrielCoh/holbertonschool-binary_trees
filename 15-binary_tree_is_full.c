#include "binary_trees.h"

/**
 * binary_tree_is_full - function that determines if tree is full
 * @tree: the current tree to use the function on.
 * Return: 0 if theres no tree or if not full else return 1 since its full.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}
