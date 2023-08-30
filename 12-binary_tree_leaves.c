#include "binary_trees.h"
/**
 * binary_tree_leaves -  measures the leaves of a binary tree
 * @tree: pointer to the root node of the tree to measeight.
 * Return: leaves of a binary tree or NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (!tree)
		return (0);
	if (!tree->right && !tree->left)
		leaves += 1;
	leaves += binary_tree_leaves(tree->right);
	leaves += binary_tree_leaves(tree->left);
	return (leaves);
}
