#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree node
 * @parent: the parent node
 * @value: the value
 * Return: pointer to node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	new->n = value;
	if (parent)
	{
		new->parent = parent;
		/**if (!(parent->left))
		*	new->parent = parent;
		*else
		*	parent->right = new;*/
	}
	return (new);
}
