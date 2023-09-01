#include "binary_trees.h"
/**
 * binary_tree_insert_left - function that creates node on left
 * @parent: pointer pointer to the parent of the new node created.
 * @value: value stored in new node.
 * Return: new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    if (!parent)
	{
		return (NULL);
	}

    binary_tree_t *newNode = binary_tree_node(parent, value);


    if (!parent->left)
    {
        parent->left = newNode;
    }
    else
    {
        newNode->left = parent->left;
        parent->left->parent = newNode;
        parent->left = newNode;
    }
    return (newNode);
}
