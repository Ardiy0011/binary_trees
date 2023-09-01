#include "binary_trees.h"
/**
 * binary_tree_height - provides each tree childs height
 * @tree: pointer to the root node of the tree to traverse
 * Return: none
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t h1;
    size_t h2;

    if (!tree)
    {
        return (-1);
    }

	if (!tree->right && !tree->left)
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

/**
 * binary_tree_balance - measures the balance factor of tree
 * @tree: pointer to the root node of the tree to measure
 * Return: balance factor of the tree, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
    if (!tree)
        return (0);

    int h1 = binary_tree_height(tree->left);
    int h2 = binary_tree_height(tree->right);

    return (h1 - h2);
}
