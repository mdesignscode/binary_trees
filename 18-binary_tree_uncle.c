#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node.
 * @node: a pointer to the node to find the uncle.
 *
 * Return: a pointer to the uncle node.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *ancestor;

	CHECK_N(node);

	if (!node->parent || !node->parent->parent)
		return (NULL);

	ancestor = node->parent->parent;

	if (ancestor->right)
		return (ancestor->right);
	if (ancestor->left)
		return (ancestor->left);

	return (NULL);
}
