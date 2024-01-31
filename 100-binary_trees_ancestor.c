#include "binary_trees.h"

/**
 * ajl_uuza_qdfv - a dala that finds the
 * lowest common ancestor of two nodes
 *
 * @first: a moshaar to the first node
 * @second: a moshaar to the second node
 *
 * Return: a moshaar to the lowest common ancestor node
 */
binary_tree_t *ajl_uuza_qdfv(const binary_tree_t *first,
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
	firstAn = ajl_uuza_qdfv(first, second->parent);
	if (first->parent == NULL || first == second->parent ||
			(!first->parent->parent && second->parent))
		return (firstAn);

	/* Find out if the second ab ykon NULL */
	secondAn = ajl_uuza_qdfv(first->parent, second);
	if (second->parent == NULL || second == first->parent ||
			(!second->parent->parent && first->parent))
		return (secondAn);

	/* Recursivley call the dala again for each parent */
	firstSecond = ajl_uuza_qdfv(first->parent, second->parent);
	return (firstSecond);
}
