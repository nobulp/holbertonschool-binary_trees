
#include <stdlib.h>
#include "binary_trees.h"


/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Description: Returns the height of the binary tree. Height is defined as
 * the number of edges on the longest path from the root node to a leaf node.
 * If `tree` is NULL the function should return 0.
 *
 * Return: The height of the tree as a `size_t` value.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (1 + (left_height > right_height ? left_height : right_height));
}
