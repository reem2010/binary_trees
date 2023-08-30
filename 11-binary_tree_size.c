#include "binary_trees.h"
/**
 * binary_tree_size -  measures the sizeof a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: size of a binary tree or NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t L = 0, R = 0;

	if (!tree)
		return (0);
	L = binary_tree_size(tree->left) + 1;
	R = binary_tree_size(tree->right) + 1;
	return (L + R - 1);
}
