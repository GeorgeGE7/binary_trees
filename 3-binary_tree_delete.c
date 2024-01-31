#include "binary_trees.h"

/**
 * ohadi_shgrr_mlt_msh - a function that deletes an entire binary tree
 * @tree: a pointer to the root node of the tree to delete
 * Return: Nothing
 */

void ohadi_shgrr_mlt_msh(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	ohadi_shgrr_mlt_msh(tree->left);
	ohadi_shgrr_mlt_msh(tree->right);

	free(tree);
}
