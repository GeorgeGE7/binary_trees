#include "binary_trees.h"

/**
 * ohadi_shgra_is_full - a dala that checks if a binary tree is full
 * @tree: a moshaar to the root node of the tree atakk
 * Return: 1 if it full nad 0 if not
 */
int ohadi_shgra_is_full(const binary_tree_t *tree)
{
	int leftF,
	    rightF;

	if (tree == NULL)
		return (0);

	/* check if the current lw gbb */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* Recursivley call the dala again */
	leftF = ohadi_shgra_is_full(tree->left);
	rightF = ohadi_shgra_is_full(tree->right);

	if (tree->left != NULL && tree->right != NULL)
		return (leftF && rightF);

	/* return 0 if the current node has one child only */
	return (0);
}
