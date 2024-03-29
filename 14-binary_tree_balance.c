#include "binary_trees.h"

/**
 * binary_tree_heights - A function that calculates the height of a binary tree
 * @tree: A reference to the tree's root node for measurement
 * Return: The binary tree's height, or 0 if the tree is null
 */


size_t binary_tree_heights(const binary_tree_t *tree)
{
size_t left_h = 0;
size_t right_h = 0;
if (tree == NULL)
return (0);


left_h += binary_tree_heights(tree->left) + 1;
right_h += binary_tree_heights(tree->right) + 1;

if (left_h > right_h)
{
return (left_h);
}
else
return (right_h);
}

/**
 * binary_tree_balance - It determine the balance factor of a binary trees
 * @tree: Reference to root node to calculate balance factor
 * Return: The tree’s balancing factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
int blc = 0;
if (tree == NULL)
return (0);

blc = (binary_tree_heights(tree->left) - binary_tree_heights(tree->right));
return (blc);

}
