#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree.
 * @tree: a pointer to the root node of the tree to count the number of nodes.
 *
 * Return: the number of nodes with at least one child.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t lNodes, rNodes;

	CHECK_N(tree);

	if (!tree->left && !tree->right)
		return (0);

	lNodes = binary_tree_nodes(tree->left);
	rNodes = binary_tree_nodes(tree->right);

	return (lNodes + rNodes + 1);
}
