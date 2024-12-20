#include "binary_trees.h"

/**
 * binary_tree_inorder - function that does in order traversal in a tree.
 * @tree: pointer to the root of the node
 * @func: pointer to the function
 *
 * Return: nothing if tree or func is null.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;

	if (!func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
