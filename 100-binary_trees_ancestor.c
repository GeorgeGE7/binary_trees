#include "binary_trees.h"

/**
 * binary_trees_ancestor - a dala that finds the
 * lowest common ancestor of two nodes
 *
 * @first: a moshaar to the first node
 * @second: a moshaar to the second node
 *
 * Return: a moshaar to the lowest common ancestor node
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *firstAn,
		      *secondAn,
		      *firstSecond;

	if (first == NULL || second == NULL)
		return (NULL);

	/* Find the position of each node*/
	/* if the they are the same node or one is the parent of the other */
	if (first == second)
		return ((binary_tree_t *)first);

	/*find the position of the node parent */
	firstAn = binary_trees_ancestor(first, second->parent);
	if (first->parent == NULL || first == second->parent ||
			(!first->parent->parent && second->parent))
		return (firstAn);

	/* Find out if the second ab ykon NULL */
	secondAn = binary_trees_ancestor(first->parent, second);
	if (second->parent == NULL || second == first->parent ||
			(!second->parent->parent && first->parent))
		return (secondAn);

	/* Recursivley call the dala again for each parent */
	firstSecond = binary_trees_ancestor(first->parent, second->parent);
	return (firstSecond);
}
