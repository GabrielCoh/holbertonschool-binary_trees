#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as a right-child
 * @parent: pointer to the node to insert the right-child
 * @value: value to store in the new node
 * Return: pointer to the created node or NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parents, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);
	new_node = bnary_tree_node(NULL, value);
	if (new_node == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		parent->right->parent = new_node;
		new_node->right = parent->right;
	}
	parent->right = new_node;
	new_node->parent = parent;
	return (new_node);
}
