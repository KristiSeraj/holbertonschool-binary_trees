#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: the number of height or 0 if tree is NULL
 */
size_t max_height(size_t a, size_t b)
{
	if (a > b)
		return (a);
	else
		return (b);
}
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t r, l;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	else
	{
		l = binary_tree_height(tree->left);
		r = binary_tree_height(tree->right);
		return (max_height(l, r) + 1);
	}
}
