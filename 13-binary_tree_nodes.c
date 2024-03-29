#include "binary_trees.h"
/**
 * binary_tree_nodes - Function that counts the nodes with at least 1 child in
 *                     a binary tree.
 * @tree:              Pointer to the root node of the tree to count the number
 *                     of nodes.
 * Return:             Number of the nodes with at least 1 child in a tree or,
 *                     0 if tree is NULL.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else if (tree->left == NULL && tree->right == NULL)
		return (0);
	else
		return (binary_tree_nodes(tree->left) + 1 +
			binary_tree_nodes(tree->right));
}
