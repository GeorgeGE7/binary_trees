#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};
typedef struct binary_tree_s binary_tree_t;

/* mosaad */
void binary_tree_print(const binary_tree_t *tree);
int get_tree_height(const binary_tree_t *tree);

/* ssaass */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_node_shml(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_node_ymn(binary_tree_t *parent, int value);
void binary_tree_node_msh(binary_tree_t *tree);
int ohadi_shgr_mlt_ghsn(const binary_tree_t *node);
int ohadi_shgr_mlt_gzr(const binary_tree_t *node);
void ohadi_shgr_mlt_ghztrt(const binary_tree_t *tree, void (*func)(int));
void ohadi_shgr_mlt_fetrt(const binary_tree_t *tree, void (*func)(int));
void ohadi_shgr_mlt_odmtrt(const binary_tree_t *tree, void (*func)(int));
size_t ohadi_shgr_mlt_artfa(const binary_tree_t *tree);
size_t ohadi_shgr_mlt_omk(const binary_tree_t *tree);
size_t ohadi_shgr_mlt_hgm(const binary_tree_t *tree);
size_t binary_tree_leaves(const binary_tree_t *tree);
size_t binary_tree_nodes(const binary_tree_t *tree);
int binary_tree_balance(const binary_tree_t *tree);
int binary_tree_is_full(const binary_tree_t *tree);
int binary_tree_is_perfect(const binary_tree_t *tree);
binary_tree_t *binary_tree_sibling(binary_tree_t *node);
binary_tree_t *binary_tree_uncle(binary_tree_t *node);
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second);
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));

#endif
