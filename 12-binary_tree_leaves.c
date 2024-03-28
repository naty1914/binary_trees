#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves of a binary tree
 * @tree: Refernce to the root node of the tree to count leaves
 * Return: Number of leaves, or zero if the tree is NULL.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
if (tree->right == NULL && tree->left == NULL)
return (1);

return (binary_tree_leaves(tree->right)  + binary_tree_leaves(tree->left));

}
