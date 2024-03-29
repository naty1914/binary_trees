#include "binary_trees.h"

/**
 * binary_tree_is_full - Determines whether a binary tree is a full tree or not
 * @tree: A reference to the root node of the binary tree
 * Return: 1 if the binary tree is full, 0 otherwise
 */


int binary_tree_is_full(const binary_tree_t *tree)
{
int full;

if (tree == NULL)
return (0);

if (tree->right  == NULL && tree->left == NULL)
return (1);

if (tree->right && tree->right)
{
full = binary_tree_is_full(tree->right) && binary_tree_is_full(tree->left);
return (full);
}
return (0);

}
