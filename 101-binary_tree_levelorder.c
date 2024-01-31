#include "binary_trees.h"

/**
 * binary_tree_levelorder - a function that goes through
 * a binary tree using level-order traversal
 *
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node.
 *
 * Return: Nothing
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	/* visit, check, add */
	/* queue, enqueue, dequeue */
	binary_tree_t *queue[1000],
		      *current;
	int front = 0,
	    rear = 0;

	if (tree == NULL || func == NULL)
		return;

	/* enqueue the root */
	queue[rear++] = (binary_tree_t *)tree;

	/* visit level by level */
	while (front < rear)
	{
		/* dequeue the fornt */
		current = queue[front++];

		func(current->n);

		/*enqueue the left child if exists */
		if (current->left != NULL)
			queue[rear++] = current->left;

		/* enqueue the right child if exists */
		if (current->right != NULL)
			queue[rear++] = current->right;
	}
}
