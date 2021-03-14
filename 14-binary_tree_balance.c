#include "binary_trees.h"

/**
 * binary_tree_8 - height of a binary tree
 * @tree: a node
 * Return: count or 0
 */

size_t binary_tree_8(const binary_tree_t *tree)
{
	size_t count_left = 0;
	size_t count_right = 0;

	if (tree && (tree->right || tree->left))
	{
		count_left = binary_tree_8(tree->left);
		count_right = binary_tree_8(tree->right);
		if (count_left >= count_right)
		{
			return (count_left + 1);
		}
		else
		{
			return (count_right + 1);
		}
	}
	else
	{
			return (0);
	}
}

/**
 * binary_tree_balance - height left minus right
 * @tree: a started node
 * Return: balance between left and right
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree != NULL && tree->left != NULL)
	{
		count = binary_tree_8(tree->left) + 1;
	}
	if (tree != NULL && tree->right != NULL)
	{
		count = count - (binary_tree_8(tree->right) + 1);
	}
	return (count);
}
