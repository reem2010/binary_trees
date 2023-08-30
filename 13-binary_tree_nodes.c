#include "binary_trees.h"
#include "11-binary_tree_size.c"
#include "12-binary_tree_leaves.c"
/**
 * binary_tree_nodes - counts the nodes with
 * at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: counter or 0.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	return (binary_tree_size(tree) - binary_tree_leaves(tree));
}
