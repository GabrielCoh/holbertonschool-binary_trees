#include "binary_trees.h"

/**
 * binary_tree_sibling - check if theres a sibling.
 * @node: the current node to check.
 * Return: NULL if no node or parent or sibling else return the sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->right != node)
		return (node->parent->right);
	if (node->parent->left != node)
		return (node->parent->left);
	return (NULL);
}
