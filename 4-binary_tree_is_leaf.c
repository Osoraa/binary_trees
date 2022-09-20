#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks is a node is a leaf.
 * @node: Node to ckeck whether leaf or not.
 *
 * Return: 1 if the node is a leaf, 0 otherwise.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!(node->left) & !(node->right))
		return (1);

	return (0);
}
