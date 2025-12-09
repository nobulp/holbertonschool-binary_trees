
#include <stdlib.h>
#include "binary_trees.h"


/**
 * binary_tree_nodes - Counts the nodes with at least one child in a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Description: Traverses the tree recursively and returns the number of
 * nodes that have at least one child (non-leaf nodes). If `tree` is NULL,
 * the function returns 0.
 *
 * Return: The count of nodes with at least one child as a `size_t`.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)

{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		count = 1;

	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);

	return (count);
}
