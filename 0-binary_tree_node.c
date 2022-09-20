#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node.
 *
 * @parent: Pointer to parent node.
 * @value: Integer to put in the newly created node.
 *
 * Return: NULL on node creation failure else a pointer to new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	node->n = value;
	node->left = NULL;
	node->right = NULL;

	if (!parent)
		node->parent = NULL;
	else
		node->parent = parent;

	return (node);
}
