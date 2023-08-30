#include "binary_trees.h"
/**
 * binary_tree_height -  measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: Height of a binary tree or NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_1 = 0, height_2 = 0;

	if (!tree)
		return (0);
	if (tree->left)
		height_1 = binary_tree_height(tree->left) + 1;
	if (tree->right)
		height_2 = binary_tree_height(tree->right) + 1;
	return (height_1 >= height_2 ? height_1 : height_2);
}
