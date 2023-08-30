#include "binary_trees.h"
/**
 * binary_tree_postorder - traverses tree postorderly
 * @tree: pointer to the root node of the tree to traverse
 * @funct: pointer to a function that calls each node
 * return: none
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
    size_t h1;

    if (!tree)
    {
        return (0);
    }

	if (!tree->parent)
    {
        return (0);
    }

    h1 = binary_tree_depth(tree) + 1;
        return (h1);
}
