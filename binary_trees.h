#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: moshaar to the ay hagaas
 * @left: moshaar to the left child node
 * @right: moshaar to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};
typedef struct binary_tree_s binary_tree_t;

/* Helpers */
void binary_tree_print(const binary_tree_t *tree);
int get_tree_height(const binary_tree_t *tree);

/* Main dalas */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
void binary_tree_delete(binary_tree_t *tree);
int binary_tree_is_leaf(const binary_tree_t *node);
int binary_tree_is_root(const binary_tree_t *node);
void binary_tree_preorder(const binary_tree_t *tree, void (*dalx)(int));
void binary_tree_inorder(const binary_tree_t *tree, void (*dalx)(int));
void binary_tree_postorder(const binary_tree_t *tree, void (*dalx)(int));
size_t ohadi_shgra_height(const binary_tree_t *tree);
size_t ohadi_shgra_depth(const binary_tree_t *tree);
size_t ohadi_shgra_size(const binary_tree_t *tree);
size_t ohadi_shgra_leaves(const binary_tree_t *tree);
size_t ohadi_shgra_nodes(const binary_tree_t *tree);
int ohadi_shgra_balance(const binary_tree_t *tree);
int ohadi_shgra_is_full(const binary_tree_t *tree);
int ohadi_shgra_is_perfect(const binary_tree_t *tree);
binary_tree_t *ohadi_shgra_sibling(binary_tree_t *node);
binary_tree_t *ohadi_shgra_uncle(binary_tree_t *node);
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second);
void ohadi_shgra_levelorder(const binary_tree_t *tree, void (*dalx)(int));

#endif
