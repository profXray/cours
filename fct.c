#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

t_bin *ft_bin_create(int data)
{
	t_bin *new_elem = malloc(sizeof(t_bin));
	if (!new_elem)
		return NULL;

	new_elem->left = NULL;
	new_elem->right = NULL;
	new_elem->data = data;
	return new_elem;
}

void	ft_bin_add_sort(t_bin **tree, int data)
{
	if (!tree)
	{
		t_bin *new_elem = ft_bin_create(data);
		if (!new_elem)
			return ;
		*tree = new_elem;
		return ;
	}
	if (*tree == NULL)
	{
		t_bin *new_elem = ft_bin_create(data);
		if (!new_elem)
			return ;
		*tree = new_elem;
		return ;
	}
	if ((*tree)->data > data)
		ft_bin_add_sort(&(*tree)->left, data);
	else
		ft_bin_add_sort(&(*tree)->right, data);
}

void ft_print_tree_infixe(t_bin **tree)
{
	if (!tree || !*tree)
		return ;
	
	ft_print_tree_infixe(&(*tree)->left);
	printf("%d ", (*tree)->data);
	ft_print_tree_infixe(&(*tree)->right);
}

void ft_print_tree_postfixe(t_bin **tree)
{	
	if (!tree || !*tree)
		return ;

	ft_print_tree_postfixe(&((*tree)->left));
	ft_print_tree_postfixe(&((*tree)->right));
	printf("%d ", (*tree)->data);
}
void ft_print_tree_prefixe(t_bin **tree)
{	
	if (!tree || !*tree)
		return ;

	printf("%d ", (*tree)->data);
	ft_print_tree_prefixe(&((*tree)->left));
	ft_print_tree_prefixe(&((*tree)->right));
}


void	ft_free_bin(t_bin **tree)
{
	if (!tree || !*tree)
		return ;

	ft_free_bin((&(*tree)->left));
	ft_free_bin((&(*tree)->right));
	free(*tree);
}



int main(void)
{
	t_bin *tree = NULL;

	ft_bin_add_sort(&tree, 5);
	ft_bin_add_sort(&tree, 3);
	ft_bin_add_sort(&tree, 7);
	ft_bin_add_sort(&tree, 2);
	ft_bin_add_sort(&tree, 4);
	ft_bin_add_sort(&tree, 6);
	ft_bin_add_sort(&tree, 8);

	ft_print_tree_infixe(&tree);
	printf("\n");
	ft_print_tree_postfixe(&tree);
	printf("\n");
	ft_print_tree_prefixe(&tree);
	printf("\n");

	ft_free_bin(&tree);
}
