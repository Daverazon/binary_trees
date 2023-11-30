#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 * Return: pointer to the created node, or NULL on failure
 *         or if parent is NULL
 * If parent already has a right-child, the new node will take its place,
 * and the old right-child will be set as the right-child of the new node.
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newR;

	if (!parent)
		return (NULL);

	newR = malloc(sizeof(binary_tree_t));
	if (!newR)
		return (NULL);
	newR->n = value;
	newR->parent = parent;
	newR->left = NULL;
	newR->right = parent->right;
	if (parent->right != NULL)
		parent->right->parent = newR;
	parent->right = newR;
	return (newR);
}
