#include <stdlib.h>
#include "binary_trees.h"


/**
 * binary_tree_insert_right - inserts a node as the right-child.
 *
 * @parent: pointer to the parent node of the node to create.
 * @value: data value to put in the new node.
 * Return: Pointer to the new node or NULL on failure.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;
	binary_tree_t *tmp_node = NULL;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;

	if (parent->right)
	{
		tmp_node = parent->right;
		new_node->right = tmp_node;
		parent->right = new_node;
		tmp_node->parent = new_node;
	}
	else
	{
		new_node->right = NULL;
		parent->right = new_node;
	}
	return (new_node);
}
