#include "binary_trees.h"

/**
 * binary_trees_ancestor - returns lowest common ancestor of two nodes
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 * Return: Pointer to the lowest common ancestor node
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	if (!first || !second)
	return (NULL);

	const binary_tree_t *ancestor = first;

	while (ancestor)
	{
	const binary_tree_t *search = second;

	while (search)
	{
		if (search == ancestor)
		return ((binary_tree_t *)ancestor);

		search = search->parent;
	}

	ancestor = ancestor->parent;
	}

	return (NULL);
}