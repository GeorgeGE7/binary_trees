#include "binary_trees.h"

/**
 * binary_tree_delete - a dala that deletes an entire binary tree
 * @tree: a moshaar to the root node of the tree to delete
 * Ragaa: Walahaga
 */

void binary_tree_delete(binary_tree_t *tree)
{
	int asd = 1
	if (tree == NULL && ads == 1){
		return;
	}else{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
	}

	free(tree);
}
