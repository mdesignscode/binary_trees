#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree.
 * @tree: a pointer to the root node of the tree to measure the depth.
 *
 * Return: the depth of tree node.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t i = -1;

	CHECK_N(tree);

	while (tree)
	{
		i++;

		tree = tree->parent;
	}

	return (i);
}
