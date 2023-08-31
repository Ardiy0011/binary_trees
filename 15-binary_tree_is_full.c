#include "binary_trees.h"
/**
 * binary_tree_is_full - validate if tree is full
 * @tree: pointer to the root node of the tree to traverse
 * @funct: pointer to a function that calls each node
 * return: 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{

    int scenario1 = tree->left && tree->right;
    int scenario2 = !tree->left && !tree->right;
    int scenario3 = !tree->left || !tree->right;


    if (tree == NULL)
    {
        return (1);
    }

    if (scenario3)
    {
        return (0);
    }

    if (scenario2)
    {
        return (1);
    }

    if (scenario1)
    {
        int traverse_lft = binary_tree_is_full(tree->left);
        int traverse_rgt = binary_tree_is_full(tree->right);
        return (traverse_lft && traverse_rgt);
    }
    return (0);
}
