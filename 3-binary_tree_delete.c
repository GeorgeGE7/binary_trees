#include "binary_trees.h"

/**
 * binary_tree_node_msh - a function that deletes an entire binary tree
 * @tree: a pointer to the root node of the tree to delete
 * Return: Nothing
 */

void binary_tree_node_msh(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_node_msh(tree->left);
	binary_tree_node_msh(tree->right);

	free(tree);
}
