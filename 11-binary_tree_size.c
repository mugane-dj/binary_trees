#include <stdlib.h>
#include <stddef.h>
#include "binary_trees.h"


/**
 * binary_tree_size - measures the size of a binary tree.
 *
 * @tree: a pointer to the root node of the tree.
 * Return: size of tree, O if tree is NULL.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_nodes = 0;
	size_t right_nodes = 0;

	if (tree == NULL)
		return (0);

	left_nodes = binary_tree_size(tree->left);
	right_nodes = binary_tree_size(tree->right);

	return (left_nodes + right_nodes + 1);
}
