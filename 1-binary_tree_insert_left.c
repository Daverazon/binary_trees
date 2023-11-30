#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: pointer to the created node, or NULL on failure
 *         or if parent is NULL
 * If parent already has a left-child, the new node will take its place,
 * and the old left-child will be set as the left-child of the new node.
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newL;

	if (!parent)
		return (NULL);

	newL = malloc(sizeof(binary_tree_t));
	if (!newL)
		return (NULL);
	newL->n = value;
	newL->parent = parent;
	newL->right = NULL;
	newL->left = parent->left;
	if (parent->left != NULL)
		parent->left->parent = newL;
	parent->left = newL;
	return (newL);
}
