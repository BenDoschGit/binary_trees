#include "binary_trees.h"

/**
* binary_tree_nodes - function that measures the nodes of a binary tree.
* @tree: Pointer to the tree to check
* Return: nodes
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t total = 0;

	if (tree)
	{
		if (!binary_tree_is_leaf(tree))
			total += 1;
		if (tree->left)
			total += binary_tree_nodes(tree->left);
		if (tree->right)
			total += binary_tree_nodes(tree->right);
		return (total);
	}
	return (0);
}

/**
* binary_tree_is_leaf - function that checks if a node is a leaf
* @node: pointer to the node to check
*
* Return: 1 if node is a leaf, otherwise 0
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
