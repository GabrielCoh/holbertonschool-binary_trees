#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that insert le left branch of a tree.
 * @parent: the parent node
 * @value: idk
 *
 * Return: return null if theres no parent,if theres no left branch,return left
 *
 *
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_n;

	if (!parent)
		return (NULL);

	left_n = binary_tree_node(NULL, value);

	if (!left_n)
		return (NULL);

	if (parent->left)
	{
		parent->left->parent = left_n;
		left_n->left = parent->left;
	}

	parent->left = left_n;
	left_n->parent = parent;

	return (left_n);
}
