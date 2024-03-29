#include "binary_trees.h"

/**
 * binary_tree_sibling - Identifies the sibling of a node in a binary tree
 * @node: A reference to the node to locate the sibling
 * Return: A reference to the sibling node, or NULL if the node is empty
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL)
return (NULL);

if (node->parent->right == node)
return (node->parent->left);
else
return (node->parent->right);

}
