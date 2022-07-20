#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * b_tree_delete - deletes an entire binary tree.
 * @tree: a pointer to the root node of the tree to delete.
 *
 * Return: nothing.
 */
void b_tree_delete(binary_tree_t *tree)
{
	CHECK(tree);

	b_tree_delete(tree->left);
	free(tree->left);
	tree->left = NULL;

	b_tree_delete(tree->right);
	free(tree->right);
	tree->right = NULL;
}

/**
 * binary_tree_delete - deletes an entire binary tree.
 * @tree: a pointer to the root node of the tree to delete.
 *
 * Return: nothing.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	CHECK(tree);

	b_tree_delete(tree);

	free(tree);
	tree = NULL;
}
