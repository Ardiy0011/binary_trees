#include "binary_trees.h"
/**
 * binary_tree_inorder - traverse tree inorderly
 * @tree: pointer to the root node of the tree to traverse
 * @funct: pointer to a function that calls each node
 * return: none
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{

  if (!tree || !func)
  {
    return;
  }

  binary_tree_inorder(tree->left, func);
  func(tree->n);
  binary_tree_inorder(tree->right, func);
}