#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node
 * Return: pointer to the uncle node or NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *p, *gp;

	if (!node || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	p = node->parent;
	gp = node->parent->parent;

	if (gp->left == p)
		return (gp->right);

	else
		return (gp->left);

	return (NULL);
}
