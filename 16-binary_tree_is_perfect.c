#include "binary_trees.h"

/**
 * height - Measures the height of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Height of the tree
 */
static size_t height(const binary_tree_t *tree)
{
    if (tree == NULL)
        return 0;
    size_t left_height = height(tree->left);
    size_t right_height = height(tree->right);
    return (left_height > right_height ? left_height : right_height) + 1;
}

/**
 * is_perfect - Checks if a binary tree is perfect
 *
 * @tree: Pointer to the root node of the tree to check
 * @d: Depth of the current node
 * @level: Expected depth of the leaves
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */
static int is_perfect(const binary_tree_t *tree, size_t d, size_t level)
{
    if (tree == NULL)
        return 1; // An empty tree is perfect

    // Check if leaf node
    if (tree->left == NULL && tree->right == NULL)
        return (d == level);

    // If one child is NULL and the other is not, tree is not perfect
    if (tree->left == NULL || tree->right == NULL)
        return 0;

    return is_perfect(tree->left, d + 1, level) &&
           is_perfect(tree->right, d + 1, level);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 *
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    if (tree == NULL)
        return 0;

    size_t h = height(tree); // Get the height of the tree
    return is_perfect(tree, 0, h - 1); // Check if the tree is perfect
}

