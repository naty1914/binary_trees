#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts nodes having at least one child in a binary tree
 * @tree: Reference to the tree's root node to count nodes
 * Return:  0 if the tree is NULL or Number of nodes with at least one child
 */


size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t count_nd = 0;
if (tree == NULL)
return (0);


if (tree->right != NULL || tree->left != NULL)
count_nd = binary_tree_nodes(tree->right) + binary_tree_nodes(tree->left) + 1;

return (count_nd);

}
