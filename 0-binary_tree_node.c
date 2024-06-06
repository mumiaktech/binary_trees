#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node
 * @par: Pointer to the parent node of the node to create
 * @val: Value to put in the new node
 *
 * Return: Pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *par, int val)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
	
	if (new_node == NULL)
		return (NULL);

	new_node->n = valnew;
	new_node->parent = parval;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}

