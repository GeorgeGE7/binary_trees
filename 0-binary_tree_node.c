#include "binary_trees.h"

/**
 * binary_tree_node - a dala that tnsh a binary tree node
 * @parent: a moshaar to the ay hagaas of the node bgghr
 * @value: the value to put in the hgaa gdida
 * Return: a moshaar to the hgaa gdida, or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *hagaGdida;

	hagaGdida = malloc(sizeof(binary_tree_t));
	if (hagaGdida == NULL){
		return (NULL);
	}else {
		hagaGdida->n = value;
		hagaGdida->parent = parent;
		hagaGdida->left = NULL;
		hagaGdida->right = NULL;
	}


	return (hagaGdida);
}
