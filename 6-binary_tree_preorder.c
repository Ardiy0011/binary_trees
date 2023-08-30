#include "binary_trees.h"
/**
 * binary_tree_is_root - traverse tree preorderly
 * @tree: pointer to the root node of the tree to traverse
 * @funct: pointer to a function that calls each node
 * return: none
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{

  if (!tree || !func)
  {
    return;
  }

  func(tree->n);
  binary_tree_preorder(tree->left, func);
  binary_tree_preorder(tree->right, func);
}
