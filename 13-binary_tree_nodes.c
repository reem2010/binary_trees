#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with 
 * at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: counter or 0.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t L = 0, R = 0;

	if (!tree)
		return (0);
	L = binary_tree_nodes(tree->left) + 1;
	R = binary_tree_nodes(tree->right) + 1;
	printf("%lu %lu\n", L, R);
	return (L + R - 1);
/*	if (!tree)
		return (0);
	if (tree->left || tree->right)
	{
		L = binary_tree_nodes(tree->left) + 1;
		R = binary_tree_nodes(tree->right) + 1;
		printf("%lu %lu\n", L, R);
	}
	return (L + R - 1);*/
}
