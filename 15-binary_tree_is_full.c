#include <stdlib.h>
#include "binary_trees.h"


/**
 * binary_tree_is_full - checks if a binary tree is full.
 *
 * @tree: a pointer to a tree to check.
 * Return: 1 if full, 0 is tree is NULL.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_sub;
	int right_sub;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_sub = binary_tree_is_full(tree->left);
	right_sub = binary_tree_is_full(tree->right);

	return (left_sub && right_sub);
}
