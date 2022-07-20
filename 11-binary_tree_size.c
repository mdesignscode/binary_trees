#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree.
 * @tree: a pointer to the root node of the tree to measure the size.
 *
 * Return: the size of the tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t lSize, rSize;
	CHECK_N(tree);

	if (!tree->left && !tree->right)
		return (1);

	lSize = binary_tree_size(tree->left);
	rSize = binary_tree_size(tree->right);

	return (lSize + rSize + 1);
}
