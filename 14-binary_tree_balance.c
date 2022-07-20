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

	lDepth = binary_tree_height(tree->left);
	rDepth = binary_tree_height(tree->right);


	if (lDepth > rDepth)
		return (lDepth + 1);
	else
		return (rDepth + 1);
}


/**
 * binary_tree_balance - measures the balance factor of a binary tree.
 * @tree: a pointer to the root node of the tree to measure the balance factor.
 *
 * Return: the balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int lHeight, rHeight, factor;

	CHECK_N(tree);

	lHeight = binary_tree_height(tree->left);
	rHeight = binary_tree_height(tree->right);

	factor = lHeight - rHeight;

	return (factor);
}
