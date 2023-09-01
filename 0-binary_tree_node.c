#include "binary_trees.h"
/**
 * binary_tree_node - function that creates new empty node
 * @parent: pointer pointer to the parent of the new node created.
 * @value: value stored in new node.
 * return: pointer to the newly created node or null upon failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{

  binary_tree_t *newNode = malloc(sizeof(binary_tree_t));
	if (!newNode)
	{
		return (NULL);
	}

	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;
	newNode->parent = parent;

	return (newNode);
}
