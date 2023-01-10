#include "binary_trees.h"
/**
 * binary_tree_insert_left - Funciton that inserts a node as a left-child of
 *                           another node.
 * @parent:                  Pointer to the node to insert the left-child in.
 * @value:                   Value to store in the new node.
 *
 * Return:                   Pointer to the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = NULL;

	if (parent == NULL)
		return (NULL);

	newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;

	if (parent->left != NULL)
	{
		newNode->left = parent->left;
		parent->left->parent = newNode;
	}
	parent->left = newNode;
	return (newNode);
}
