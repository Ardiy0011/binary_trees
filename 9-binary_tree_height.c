#include "binary_trees.h"
/**
 * binary_tree_postorder - traverses tree postorderly
 * @tree: pointer to the root node of the tree to traverse
 * @funct: pointer to a function that calls each node
 * return: none
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t h1;
    size_t h2;

    if (!tree)
    {
        return (0);
    }

	if (tree->right == NULL && tree->left == NULL)
		return (0);

    h1 = binary_tree_height(tree->left);
    h2 = binary_tree_height(tree->right);

    if (h1 > h2)
    {
        return (h1 + 1);
    }
    else
    {
        return (h2 + 1);
    }


}
