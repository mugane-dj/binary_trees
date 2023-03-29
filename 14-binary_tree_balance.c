#include <stdlib.h>
#include <stddef.h>
#include "binary_trees.h"


/**
 * binary_tree_height - measures the height of a binary tree.
 *
 * @tree: a pointer to the root node of the tree.
 * Return: height of tree, O if tree is NULL.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
		return (0);

	/* Only make recursive calls if left or right subtree exists*/
	if (tree->left)
		left_height = 1 + binary_tree_height(tree->left);
	else
		left_height = 1;
	if (tree->right)
		right_height = 1 + binary_tree_height(tree->right);
	else
		right_height = 1;

	if (left_height > right_height)
		return (left_height);
	else
		return (right_height);
}


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

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (left_height - right_height);
}
