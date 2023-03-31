#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_uncle - checks if current node has an uncle.
 *
 * @node: current node.
 * Return: A pointer t the uncle node, otherwise NULL.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);

	if (node->parent->parent->left == node->parent &&
			node->parent->parent->right)
		return (node->parent->parent->right);

	if (node->parent->parent->right == node->parent &&
			node->parent->parent->left)
		return (node->parent->parent->left);

	return (NULL);
}
