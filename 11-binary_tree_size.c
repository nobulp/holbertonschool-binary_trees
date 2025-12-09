#include <stdlib.h>
#include "binary_trees.h"


/**
 * binary_tree_size - Counts the number of nodes in a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Description: Performs a full traversal of the tree (recursively) and
 * returns the total number of nodes. If `tree` is NULL the function
 * should return 0.
 *
 * Return: The total number of nodes as a `size_t`.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
