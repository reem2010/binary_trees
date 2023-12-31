#include "binary_trees.h"
/**
 * binary_tree_depth -  measures the depth of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: Depth of a binary tree or NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);
	if (tree->parent)
		depth = binary_tree_depth(tree->parent) + 1;
	return (depth);
}
