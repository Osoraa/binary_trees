#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left child of a parent node
 *
 * @parent: Pointer to parent node.
 * @value: Integer to put in the newly created node.
 *
 * Return: Pointer to new left node or NULL on any failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);

	/* If parent->left exists, assign node to current left's parent */
	/* Then assign the current left to node->left */
	if (parent->left)
	{
		parent->left->parent = node;
		node->left = parent->left;
	}
	else
		node->left = NULL;

	/* Make parents left to be node */
	parent->left = node;

	/* Assign node values */
	node->parent = parent;
	node->n = value;
	node->right = NULL;

	return (node);
}
