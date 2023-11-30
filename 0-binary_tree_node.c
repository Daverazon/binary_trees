#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to parent node of the node to create
 * @value: value to put in the new node
 * Return: pointer to the new node, or NULL on failure
 *
 * When created, a node does not have any child
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/*if parent == NULL you're creating the root node*/
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (!new)
		return (NULL);
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
