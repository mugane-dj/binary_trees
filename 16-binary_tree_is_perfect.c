#include <stdlib.h>
#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a binary tree.
 *
 * @tree: a pointer to the root node of the tree.
 * Return: depth of tree, O if tree is NULL.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	if (tree->parent)
		depth = 1 + binary_tree_depth(tree->parent);

	return (depth);
}

/**
 * is_perfect - checks if a binary tree is perfect based on depth and level.
 *
 * @tree: a pointer to a tree to check.
 * @depth: depth of the tree.
 * @level: level of current tree node.
 * Return: 1 if tree is perfect, 0 otherwise.
 */

int is_perfect(const binary_tree_t *tree, size_t depth, size_t level)
{
	int left_sub;
	int right_sub;

	/* All leaf nodes must be on the same level */
	if (tree->left == NULL && tree->right == NULL)
		return (depth == level + 1);

	/* if internal node has <2 children */
	if (tree->left == NULL || tree->right == NULL)
		return (1);

	/* Check if left and right subtrees are perfect */
	left_sub = is_perfect(tree->left, depth, level + 1);
	right_sub = is_perfect(tree->right, depth, level + 1);

	return (left_sub && right_sub);
}

/**
 * binary_tree_is_perfect - checks if binary tree is perfect.
 *
 * @tree: a pointer to the tree to check.
 * Return: 1 if binary tree is perfect, 0 if otherwise.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	depth = binary_tree_depth(tree);

	return (is_perfect(tree, depth, 0));
}
