#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
int binary_tree_is_leaf(binary_tree_t *);

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	binary_tree_t *root;
	int ret;

	root = binary_tree_node(NULL, 98);
	root->left = binary_tree_node(root, 12);
	root->right = binary_tree_node(root, 402);
	binary_tree_insert_left(root->left, 54);
	binary_tree_insert_left(root, 128);
	binary_tree_print(root);

	ret = binary_tree_is_leaf(root);
	printf("Is %d a leaf: %d\n", root->n, ret);
	ret = binary_tree_is_leaf(root->left);
	printf("Is %d a leaf: %d\n", root->left->n, ret);
	ret = binary_tree_is_leaf(root->left->left);
	printf("Is %d a leaf: %d\n", root->left->left->n, ret);
	ret = binary_tree_is_leaf(root->left->left->left);
	printf("Is %d a leaf: %d\n", root->left->left->left->n, ret);

	return (0);
}
