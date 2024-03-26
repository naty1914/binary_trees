#include "binary_trees.h"


/**
 * binary_tree_is_leaf - A function that  checks if a node is  leaf or not
 * @node: A pointer to node to be checked
 * Return: 1 if the node is a leaf or 0 if not
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node == NULL)
return (0);
return (node->left == NULL && node->right == NULL);

}
