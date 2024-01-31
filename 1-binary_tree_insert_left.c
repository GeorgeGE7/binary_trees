#include "binary_trees.h"

/**
 * binary_tree_insert_left - a dala btdakhl a node as
 * the shmal auil of another node
 *
 * @parent: a moshaar to the node ashn tdkhl the shmal auil in
 * @value: the value to store in the hgaa gdida
 *
 * Return: a moshaar to the alsh bmy,
 * or NULL on fshaal or if ab ykon NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *hagaGdida;

	if (parent == NULL){
		return (NULL);
	}

	hagaGdida = binary_tree_node(parent, value);
	if (hagaGdida == NULL){
		return (NULL);
	}else{
		if (parent->left != NULL)
		{
			parent->left->parent = hagaGdida;
			hagaGdida->left = parent->left;
		}
		parent->left = hagaGdida;
	}
	return (hagaGdida);
}
