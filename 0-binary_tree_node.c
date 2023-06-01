#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"


/**
* binary_tree_node - creates a binary tree node
* @parent: Pointer to the parent node of the created node
* @value: Value to store in new node
* Return: Pointer to new node or NULL on failure
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);

	node->n = value;

	if (parent == NULL)
	{
		/* Create a root node */
		node->parent = NULL;
	}
	else
	{
		/* Create a leaf node */
		node->parent = parent;
	}
	return (node);
}
