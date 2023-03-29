#include <stdlib.h>
#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree.
 *
 * @tree: a pointer to the root node of the tree.
 * Return: balance factor, 0 when tree is NULL.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left_height = 1 + binary_tree_balance(tree->left);

	if (tree->right)
		right_height = 1 + binary_tree_balance(tree->right);

	return (left_height - right_height);
}
