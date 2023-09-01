#include "binary_trees.h"
/**
 * binary_tree_insert_right - function that creates node on right
 * @parent: pointer pointer to the parent of the new node created.
 * @value: value stored in new node.
 * Return: newnode
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (!parent)
	{
		return (NULL);
	}

	binary_tree_t *newNode = binary_tree_node(parent, value);

	if (!parent->right)
	{
	parent->right = newNode;
	}
	else
	{
	newNode->right = parent->right;
	parent->right->parent = newNode;
	parent->right = newNode;
	}

	return (newNode);
}
