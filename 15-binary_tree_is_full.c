#include "binary_trees.h"

/**
 * binary_tree_is_full - a function that checks if a binary tree is full
 * @tree: a pointer to the root node of the tree to check
 * Return: 1 if it full nad 0 if not
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int leftF,
	    rightF;

	if (tree == NULL)
		return (0);

	/* check if the current node is a leaf */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* Recursivley call the function again */
	leftF = binary_tree_is_full(tree->left);
	rightF = binary_tree_is_full(tree->right);

	if (tree->left != NULL && tree->right != NULL)
		return (leftF && rightF);

	/* return 0 if the current node has one child only */
	return (0);
}
