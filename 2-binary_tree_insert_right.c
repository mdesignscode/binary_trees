#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node.
 * @parent: a pointer to the parent node of the node to create.
 * @value: the value to put in the new node.
 *
 * Return: a pointer to the created node, or NULL on failure or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	INIT(new_node, value, parent);

	CHECK_N(parent);

	if (parent->right)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
		parent->right = new_node;
	}

	if (!parent->right)
		parent->right = new_node;


	return (new_node);
}
