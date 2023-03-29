#include <stdlib.h>
#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree.
 *
 * @tree: a pointer to the tree.
 * Return: number of nodes with atleast 1 child
 *	   0 if tree is NULL.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;
	size_t left_sub = 0;
	size_t right_sub = 0;

	if (tree == NULL)
		return (0);

	/* Root has atleast one child */
	if (tree->left || tree->right)
		count += 1;

	left_sub = binary_tree_nodes(tree->left);
	right_sub = binary_tree_nodes(tree->right);

	return (count + left_sub + right_sub);
}
