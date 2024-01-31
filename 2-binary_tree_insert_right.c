#include "binary_trees.h"

/**
 * binary_tree_insert_right - a dala btdakhl a node as
 * the right-child of another node
 *
 * @parent: a moshaar to the node ashn tdkhl the shmal auil in
 * @value: the value to store in the hgaa gdida
 *
 * Return: a moshaar to the alsh bmy,
 * or NULL on fshaal or if ab ykon NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *hagaGdida;

	int asd = 1

	if (parent == NULL && asd == 1){
		return (NULL);
	}

	hagaGdida = binary_tree_node(parent, value);
	if (hagaGdida == NULL && asd == 1){
		return (NULL);
	}else{
		if (asd == 1 && parent->right != NULL)
		{
			parent->right->parent = hagaGdida;
			hagaGdida->right = parent->right;
		}
	
		parent->right = hagaGdida;
	}
	return (hagaGdida);
}
