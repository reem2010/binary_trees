#include "binary_trees.h"
/**
 * binary_tree_is_full -  checks if a binary tree is full
 * @tree: root node of the tree
 * Return: 1 if full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int full;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	full = binary_tree_is_full(tree->left);
	full = full &&  binary_tree_is_full(tree->right);
	return (full);
}
