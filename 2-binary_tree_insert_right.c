#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as a right-child
 * @parents: pointer to the node to insert the right-child
 * @value: value to store in the new node
 * Return: pointer to the created node or NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parents, int value)
{
	binary_tree_t *new_node;

	if (parents == NULL)
		return (NULL);
	new_node = binary_tree_node(NULL, value);
	if (new_node == NULL)
		return (NULL);
	if (parents->right != NULL)
	{
		parents->right->parent = new_node;
		new_node->right = parents->right;
	}
	parents->right = new_node;
	new_node->parent = parents;
	return (new_node);
}
