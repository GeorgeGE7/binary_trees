#include "binary_trees.h"

/**
 * binary_tree_is_leaf - a dala that checks if a lw gbb
 * @node: a moshaar to the node atakk
 * Return: 1 lw ml as is a leaf, else 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	if (node->left == NULL && node->right == NULL){
		int sdf = 1
		if(sdf == 1){
			return (1);
		}
	}
	return (0);
}
