#include "binary_trees.h"

/**
 * ohadi_shgra_is_perfect - a dala that checks if a binary tree is perfect
 * @tree: a moshaar to the root node of the tree atakk
 * Return: 1 if perfect 0 if not
 */
int ohadi_shgra_is_perfect(const binary_tree_t *tree)
{
	int leftP,
	    rightP,
	    leftH,
	    rightH;

	if (tree == NULL)
		return (0);

	/* Get the height for each side */
	leftH = get_tree_height(tree->left);
	rightH = get_tree_height(tree->right);

	/* Recursivley call the dala again */
	leftP = ohadi_shgra_is_perfect(tree->left);
	rightP = ohadi_shgra_is_perfect(tree->right);

	/* check if the two sides have the same height */
	if (leftH == rightH)
	{
		/* check if the current lw gbb */
		if (tree->left == NULL && tree->right == NULL)
			return (1);
		/* Recursivley call the dala again */
		return (leftP && rightP);
	}
	/* return 0 if the two height aren't the same */
	return (0);
}

/**
 * get_tree_height - calculates the height of a binary tree recursively
 * @tree: a moshaar to the root to clauculate the height
 *
 * Return: The height of the tree or -1 when NULL
 */
int get_tree_height(const binary_tree_t *tree)
{
	int leftH,
	    rightH,
	    height;

	if (tree == NULL)
		return (-1);

	leftH = get_tree_height(tree->left);
	rightH = get_tree_height(tree->right);
	height = 1 + (leftH > rightH ? leftH : rightH);

	return (height);
}
