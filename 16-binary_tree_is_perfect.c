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
 * binary_tree_is_perfect - checks if a binary tree is perfect.
 * @tree: a pointer to the root node of the tree to check.
 *
 * Return: 0 if tree is not perfect, or 1 if tree is perfect.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int lHeight1, rHeight1, lHeight2, rHeight2;
	int c1, c2;

	CHECK_N(tree);

	if (!tree->left || !tree->right)
		return (0);

	lHeight1 = height(tree->left->left);
	rHeight1 = height(tree->left->right);

	lHeight2 = height(tree->right->left);
	rHeight2 = height(tree->right->right);

	c1 = lHeight1 == rHeight1 && lHeight2 == rHeight2;
	c2 = lHeight1 == lHeight2 && rHeight1 == rHeight2;

	if (c1 && c2)
		return (1);

	return (0);
}
