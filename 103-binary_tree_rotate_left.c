#include "binary_trees.h"

/**
 * binary_tree_rotate_left - switch node to the left,
 * the right child become the parent and the switch node
 * his right child become the left child of the original right child
 * @tree: a tree
 * Return: root or NULL
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{

	binary_tree_t *tmp_r, *save_root = tree;

	if (tree != NULL)
	{
		if (tree->right != NULL)
		{
			tree->right->parent = tree->parent;
			tree->parent = tree->right;
			tmp_r = tree->right;
			tree->right = tree->right->left;
			tmp_r->left = save_root;
			return (tmp_r);
		}
	}
	return (NULL);
}
