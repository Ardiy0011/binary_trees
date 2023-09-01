#include "binary_trees.h"
/**
 * binary_tree_insert_left - function that creates node on left
 * @parent: pointer pointer to the parent of the new node created.
 * @value: value stored in new node.
 * Return: new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (!parent)
	{
		return (NULL);

	}

	node = binary_tree_node(parent, value);
	if (!node)
	{
		return (NULL);
	}

	if (parent->left)
	{
		parent->left->parent = node;
	}
	node->left = parent->left;
	parent->left = node;

	return (node);
}
