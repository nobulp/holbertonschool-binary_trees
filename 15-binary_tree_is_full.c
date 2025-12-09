#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 *
 * Description: A full binary tree is a tree where every node has either
 * 0 or 2 children. The function returns 1 if the tree is full, otherwise 0.
 * If `tree` is NULL the function should return 0.
 *
 * Return: 1 if the tree is full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    if ((tree->left == NULL) && (tree->right == NULL))
        return (1);

    if ((tree->left == NULL) || (tree->right == NULL))
        return (0);

    if (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right))
        return (1);

    return (0);
}
