#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree.
 * @tree: a pointer to the root node of the tree to measure the height.
 *
 * Return: 0 if tree is empty.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lDepth, rDepth;

	CHECK_N(tree);

	if (!tree->left && !tree->right)
		return (0);

	lDepth = binary_tree_height(tree->left);
	rDepth = binary_tree_height(tree->right);


	if (lDepth > rDepth)
		return (lDepth + 1);
	else
		return (rDepth + 1);
}
