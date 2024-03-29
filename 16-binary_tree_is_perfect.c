#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks whether a binary tree is perfect or not
 * @tree: reference  to the root node of the tree to check
 * Return: If the tree is perfect retuns 1 ,  otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
int left_h, right_h;
int n;

if (tree == NULL)
return (0);

left_h = binary_tree_height(tree->left);
right_h = binary_tree_height(tree->right);

if (left_h == right_h)
{
if (tree->left == NULL && tree->right == NULL)
return (1);
n = binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right);
return (n);
}

return (0);
}

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


left_h += binary_tree_height(tree->left) + 1;
right_h += binary_tree_height(tree->right) + 1;

if (left_h > right_h)
{
return (left_h);
}
else
return (right_h);

}
