#include "binary_trees.h"

/**
 * height - measures the height of a node.
 * @node: the node to be measured.
 *
 * Return: the height of a node.
 */
int height(const binary_tree_t *node)
{
	int lHeight, rHeight;
	CHECK_N(node);

	lHeight = height(node->left);
	rHeight = height(node->right);

	return (1 + ((lHeight > rHeight) ? lHeight : rHeight));
}

/**
 * node_count - counts the number of nodes in a tree.
 * @tree: the tree to be counted.
 *
 * Return: the number of node.
 */
int node_count(const binary_tree_t *tree)
{
	CHECK_N(tree);

	return (1 + node_count(tree->left) + node_count(tree->right));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect.
 * @tree: a pointer to the root node of the tree to check.
 *
 * Return: 0 if tree is not perfect, or 1 if tree is perfect.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int lHeight, rHeight;

	CHECK_N(tree);

	if (!tree->left || !tree->right)
		return (0);

	lHeight = height(tree->left);
	rHeight = height(tree->right);

	if (lHeight == rHeight)
		return (1);

	return (0);
}
