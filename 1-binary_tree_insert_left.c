#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: A pointer to the node to insert the left-child
 * @value: The value to store in the new node
 * Return: It return a pointer to the created node or NULL if it fails
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *node;
if (parent == NULL)
return (NULL);

node = binary_tree_node(parent, value);
if (node == NULL)
return (NULL);
if (parent->left != NULL)
{
node->left = parent->left;
parent->left->parent = node;
}

parent->left = node;

return (node);

}
