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
    int scenario3 = tree->left || !tree->right;


    if (scenario3 && scenario4)
    {
        return (0);
    }

    if (scenario1 || scenario2)
    {
        return (1);
    }

    return (0);
}