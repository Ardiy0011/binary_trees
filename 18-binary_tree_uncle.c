#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: Pointer to the node to find the uncle
 * Return: Pointer to the uncle node, or NULL if not found
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    binary_tree_t *grand_parent = NULL;

    if (!node || !node->parent)
    {
        return (NULL);
    }

    grand_parent = node->parent->parent;
    if (!grand_parent)
    {
        return (NULL);
    }
    else
    {
        if (grand_parent->left == node->parent)
        {
            return grand_parent->right;
        }
        else if (grand_parent->right == node->parent)
        {
            return grand_parent->left;
        }
    }

    return (NULL);
}
