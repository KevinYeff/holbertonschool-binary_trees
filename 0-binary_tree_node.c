#include "binary_trees.h"

/**
 * binary_tree_node - Function that creates a tree node.
 * @parent:           Pointer to the parent node of the node to create.
 * @value:            Value to put in the new node.
 * Return:            Pointer to the new node, or NULL on failure.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = NULL;

	newNode = malloc(sizeof(binary_tree_t));
	if (!newNode)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;

	return (newNode);
}
