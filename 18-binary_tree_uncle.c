#include "binary_trees.h"

/**
 * binary_tree_uncle - Identifies the uncle of a node in a binary tree
 * @node: A Reference to the node to locate the  uncle
 * Return: A reference to the uncle node, or NULL if the node is empty
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
return (NULL);

if (node->parent->parent->right == node->parent)
return (node->parent->parent->left);

return (node->parent->parent->right);
}
