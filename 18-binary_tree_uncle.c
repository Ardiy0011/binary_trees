#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: Pointer to the node to find the uncle
 * Return: Pointer to the uncle node, or NULL if not found
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    binary_tree_t *grandparent = node->parent->parent;

    if (!node || !node->parent || !grandparent)
        return (NULL);

    if (grandparent->left == node->parent)
        return grandparent->right;

    else if (grandparent->right == node->parent)
        return grandparent->left;

    return (NULL);
}
