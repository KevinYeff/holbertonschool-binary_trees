#include "binary_trees.h"

/**
 * binary_tree_balance - function that measures the balance factor of a
 *                       binary tree.
 * @tree:                Pointer to the root node of the tree to measure the
 *                       balance factor.
 * Return:               0 if tree is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;
	size_t balance = 0;

	if (tree == NULL)
		return (0);


	else
	{
		if (tree->left != NULL)
			left_height = 1 + binary_tree_height(tree->left);

		if (tree->right != NULL)
			right_height = 1 + binary_tree_height(tree->right);

		balance = left_height - right_height;

		return (balance);
	}
}

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: height of the given binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree->left != NULL)
			left_height = 1 + binary_tree_height(tree->left);

		if (tree->right != NULL)
			right_height = 1 + binary_tree_height(tree->right);

		if (left_height > right_height)
			return (left_height);

		return (right_height);
	}
}
