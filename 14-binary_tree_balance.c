#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: The height of the tree
 */
static int binary_tree_height(const binary_tree_t *tree)
{
    if (tree == NULL)
        return 0;

    int left_height = binary_tree_height(tree->left);
    int right_height = binary_tree_height(tree->right);

    // Height of the tree is 1 + max of left and right heights
    return 1 + (left_height > right_height ? left_height : right_height);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the balance factor
 *
 * Return: The balance factor of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
    if (tree == NULL)
        return 0;

    int left_height = binary_tree_height(tree->left);
    int right_height = binary_tree_height(tree->right);

    // Calculate balance factor
    return left_height - right_height;
}

