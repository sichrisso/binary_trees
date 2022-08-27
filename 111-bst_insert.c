#include "binary_trees.h"

/**
* bst_insert - a function that inserts a new node in search tree
*
* @tree: The root node
* Return: The new node
*/
bst_t *bst_insert(bst_t **tree, int value)
{
        if ((*tree) == NULL)
        	return (binary_tree_node((*tree), value));
        
        if (value < (*tree)->n)
        	(*tree)->left = bst_insert(&(*tree)->left, value);
        else if (value > (*tree)->n)
        	(*tree)->right = bst_insert(&(*tree)->right, value);
        else if (value == (*tree)->n)
        	return (0);
        if ((*tree )== NULL)
        	return (NULL);
        return (*tree);
}
