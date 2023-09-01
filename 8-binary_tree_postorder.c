#include "binary_trees.h"
/**
 * binary_tree_postorder - traverses tree postorderly
 * @tree: pointer to the root node of the tree to traverse
 * @funct: pointer to a function that calls each node
 * return: none
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{

  if (!tree || !func)
  {
    return;
  }

  binary_tree_postorder(tree->left, func);
  binary_tree_postorder(tree->right, func);
  func(tree->n);
}
