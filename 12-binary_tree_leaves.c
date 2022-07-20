#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree.
 * @tree: a pointer to the root node of the tree to count the number of leaves.
 *
 * Return: the number of leaves in a binary tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t lLeaf, rLeaf;

	CHECK_N(tree);

	if (!tree->left && !tree->right)
		return (1);

	lLeaf = binary_tree_leaves(tree->left);
	rLeaf = binary_tree_leaves(tree->right);

	return (lLeaf + rLeaf);
}
