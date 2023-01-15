#include "binary_trees.h"

/**
 * binary_tree_levelorder - Function that goes through a binary tree using
 * level-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Return: Nothing
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t *queue[1024], *temp;
	int front = 0, rear = -1;

	if (tree == NULL || func == NULL)
		return;

	queue[++rear] = (binary_tree_t *)tree;

	while (rear >= front)
	{
		temp = queue[front++];
		func(temp->n);
		if (temp->left != NULL)
			queue[++rear] = temp->left;
		if (temp->right != NULL)
			queue[++rear] = temp->right;
	}
}
