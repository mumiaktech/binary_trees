#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: Pointer to the node to find the uncle
 *
 * Return: Pointer to the uncle node, or NULL if none exists
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
        return NULL;  // Return NULL if node, parent, or grandparent is NULL

    // Use the binary_tree_sibling function to find the sibling of the parent
    return binary_tree_sibling(node->parent);
}

