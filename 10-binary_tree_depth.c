#include "binary_trees.h"

/**
 * binary_tree_depth - It determines a node's depth in a binary tree
 * @tree: Pointer pointing to the depth-measuring node
 * Return: Node's depth, or 0 if the tree is NULL
 */


size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t tree_depth = 0;

if (tree == NULL)
return (0);

while (tree->parent != NULL)
{
tree_depth++;
tree = tree->parent;
}

return (tree_depth);

}
