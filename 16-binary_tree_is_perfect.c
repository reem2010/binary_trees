#include "binary_trees.h"
#include "11-binary_tree_size.c"
#include "9-binary_tree_height.c"
/**
 * p - calculate the power
 * @x: the number
 * @y: exponent
 * Return: the value of x raised to the power of y
 */
size_t p(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	if (y > 1)
		x = x * p(x, y - 1);
	return (x);
}
/**
 * binary_tree_is_perfect -  checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: 1 if perfect 0 if not.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (binary_tree_size(tree) == p(2, binary_tree_height(tree) + 1) - 1)
		return (1);
	return (0);
}
