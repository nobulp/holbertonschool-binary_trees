#include "binary_trees.h"

/**
 * height - Helper to compute height of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Height of the tree.
 * NULL tree has height 0.
 * A leaf has height 1.
 */
static size_t height(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (tree == NULL)
		return (0);

	left_h = height(tree->left);
	right_h = height(tree->right);

	return (1 + (left_h > right_h ? left_h : right_h));
}

/**
 * binary_tree_size - Counts the number of nodes in a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: The total number of nodes in the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 *         If tree is NULL, return 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t h, size, expected_nodes;

	if (tree == NULL)
		return (0);

	h = height(tree);
	size = binary_tree_size(tree);
	expected_nodes = (1 << h) - 1;

	return (size == expected_nodes);
}
