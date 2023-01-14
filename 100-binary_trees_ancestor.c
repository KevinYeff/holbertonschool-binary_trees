#include "binary_trees.h"

/**
 * binary_trees_ancestor - Function that finds the lowest common ancestor
 * of two nodes
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 *
 * Return: Pointer to the lowest common ancestor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	size_t first_depth, second_depth, i;

	if (first == NULL || second == NULL)
		return (NULL);

	first_depth = binary_tree_depth(first);
	second_depth = binary_tree_depth(second);

	if (first_depth > second_depth)
	{
		for (i = 0; i < first_depth - second_depth; i++)
			first = first->parent;
	}
	else if (second_depth > first_depth)
	{
		for (i = 0; i < second_depth - first_depth; i++)
			second = second->parent;
	}

	while (first != NULL && second != NULL)
	{
		if (first == second)
			return ((binary_tree_t *)first);

		first = first->parent;
		second = second->parent;
	}

	return (NULL);
}

/**
 * binary_tree_depth - Function that measures the depth of a node in a binary
 *                     tree.
 * @tree:              Pointer to the node to measure the depth.
 * Return:             If tree is NULL, return 0.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->parent != NULL)
		return (1 + binary_tree_depth(tree->parent));

	return (0);
}
