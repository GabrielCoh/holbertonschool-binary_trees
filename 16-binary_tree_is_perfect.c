#include "binary_trees.h"

/**
 * binary_tree_height - measures height of binary tree
 * @tree: pointer to the root node of the tree
 * Return: 1 or 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t i = 0, j = 0;

	if (!tree || (tree->left == NULL && tree->right == NULL))
		return (0);
	if (tree != NULL || (tree->left && tree->right))
	{
		i = binary_tree_is_perfect(tree->left);
		j = binary_tree_is_perfect(tree->right);

		if (i >= j)
			return (i + 1);
		else
			return (j + 1);
	}
	return (0);
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree
 * Return: 0 or 1
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t lh, rh;

	if (!tree)
		return (0);

	lh = binary_tree_is_perfect(tree->left);
	rh = binary_tree_is_perfect(tree->right);

	if (lh != rh)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left && tree->left)
		return (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));

	return (0);
}
