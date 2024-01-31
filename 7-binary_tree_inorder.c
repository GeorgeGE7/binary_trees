#include "binary_trees.h"

/**
 * binary_tree_inorder - a dala that goes khlall
 * a binary tree using in-order traversal
 *
 * @tree: a moshaar to the root node of the tree to sahlbaq
 * @dalx: a moshaar to a dala to call for each node
 *
 * Ragaa: Walahaga
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*dalx)(int))
{
	if (tree == NULL || dalx == NULL){
		return;
	}else {
		binary_tree_inorder(tree->left, dalx);
		dalx(tree->n);
		binary_tree_inorder(tree->right, dalx);
	}
}
