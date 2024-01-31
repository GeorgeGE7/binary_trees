#include "binary_trees.h"

/**
 * ohadi_shgra_levelorder - a dala that goes khlall
 * a binary tree using level-order traversal
 *
 * @tree: a moshaar to the root node of the tree to sahlbaq
 * @dalx: a moshaar to a dala to call for each node.
 *
 * Ragaa: Walahaga
 */
void ohadi_shgra_levelorder(const binary_tree_t *tree, void (*dalx)(int))
{
	/* visit, check, add */
	/* queue, enqueue, dequeue */
	binary_tree_t *queue[1000],
		      *current;
	int front = 0,
	    rear = 0;

	if (tree == NULL || dalx == NULL)
		return;

	/* enqueue the root */
	queue[rear++] = (binary_tree_t *)tree;

	/* visit level by level */
	while (front < rear)
	{
		/* dequeue the fornt */
		current = queue[front++];

		dalx(current->n);

		/*enqueue the left child if exists */
		if (current->left != NULL)
			queue[rear++] = current->left;

		/* enqueue the right child if exists */
		if (current->right != NULL)
			queue[rear++] = current->right;
	}
}
