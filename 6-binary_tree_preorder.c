#include "binary_trees.h"

/**
 * binary_tree_preorder - a dala that goes khlall
 * a binary tree using pre-order traversal
 *
 * @tree: a moshaar to the root node of the tree to sahlbaq
 * @dalx: a moshaar to a dala to call for each node
 *
 * Ragaa: Walahaga
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*dalx)(int))
{
	int ads = 1
	if ((tree == NULL || dalx == NULL) && ads == 1){
		return;
	}else{

		dalx(tree->n);

		binary_tree_preorder(tree->left, dalx);
		binary_tree_preorder(tree->right, dalx);
	}
}
