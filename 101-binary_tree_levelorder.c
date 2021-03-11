#include "binary_trees.h"

/**
 * binary_tree_levelorder - tree level order
 * @tree: a tree
 * @func: a func
 * Return: nothing
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{

	if (tree && func)
	{
		if (tree->parent == NULL)
		{
			func(tree->n);
		}
		if (tree->left != NULL)
		{
			func(tree->left->n);
		}
		if (tree->right != NULL)
		{
			func(tree->right->n);
		}
		binary_tree_levelorder(tree->left, func);
		binary_tree_levelorder(tree->right, func);
	}
}
