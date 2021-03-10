#include "binary_trees.h"

/**
* binary_tree_uncle - function that finds the uncle of a node.
* @node:  pointer to the node to find the uncle
* Return: pointer to uncle of node/ NULL on fail
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node && node->parent)
	{
		return (binary_tree_sibling(node->parent));
	}
	return (NULL);
}


/**
* binary_tree_sibling - function that finds the sibling of a node.
* @node:  pointer to the node to find the sibling
* Return: pointer to sibling of node/ NULL on fail
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node && node->parent)
	{
		if (node->parent->left == node)
			return (node->parent->right);
		if (node->parent->right == node)
			return (node->parent->left);
	}
	return (NULL);
}
