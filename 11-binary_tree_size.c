#include "binary_trees.h"

/**
 * binary_tree_size - calculates a binary tree's size
 * @tree: Reference to the tree's root node so that the size can be determined
 * Return: The binary tree's size, or 0 if the tree is NULL
 */


size_t binary_tree_size(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

return (binary_tree_size(tree->right) + binary_tree_size(tree->left) + 1);

}
