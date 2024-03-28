#include "binary_trees.h"
/**
 * binary_tree_height - A function that calculates the height of a binary tree
 * @tree: A reference to the tree's root node for measurement
 * Return: The binary tree's height, or 0 if the tree is null
 */



size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_h = 0;
size_t right_h = 0;
if (tree == NULL)
return (0);

if (tree->left)
left_h += binary_tree_height(tree->left) + 1;

if (tree->right)
right_h += binary_tree_height(tree->right) + 1;

if (left_h > right_h)
{
return (left_h);
}
else
return (right_h);
}
