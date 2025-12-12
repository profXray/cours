#include "main.h"

/*
 * PREMIERE PARTIE
 * LINKED LIST
 * STACK
 * */
t_list *ft_lst_create(void *data)
{
	t_list *new_node;

	if (!data)
		return NULL;
	new_node = malloc(sizeof(t_list)); // 16
	if (!new_node)
		return NULL;
	new_node->data = data;
	new_node->next = NULL;
	return new_node;
}

void push(t_list **lst, void *data)
{
	if (!lst || !*lst)
		return ;
	t_list *to_add = ft_lst_create(data);
	if (!to_add)
		return ;
	to_add->next = *lst;
	*lst = to_add;
}

void add(t_list **lst, void *data)
{
	if (!lst || !*lst)
		return ;

	t_list *tmp = *lst;
	t_list *to_add = ft_lst_create(data);
	if (!to_add)
		return ;

	while (tmp->next)
		tmp = tmp->next;
	tmp->next = to_add;
}

/*
 * SECONDE PARTIE
 * LINKED LIST
 * QUEUE
 * */
t_list *pop(t_list **lst)
{
	t_list *tmp;

	if (!lst || !*lst)
		return NULL;
	tmp = *lst;
	*lst = (*lst)->next;
	return tmp;
}

/*
 * TROISIEME PARTIE
 * BINNARY TREE
 * */
t_bin	*ft_bin_create(int data)
{
	t_bin *new_node = malloc(sizeof(t_bin)); // 24
	if (!new_node)
		return NULL;
	new_node->data = data;
	new_node->left = NULL;
	new_node->right = NULL;
	return new_node;
}

void ft_bin_add_sort(t_bin **tree, int data)
{
	if (!tree)
		return ;
	if (!*tree)
	{
		t_bin *to_add = ft_bin_create(data);
		if (!to_add)
			return ;
		*tree = to_add;
		return ;
	}
	if (data < (*tree)->data)
		ft_bin_add_sort(&((*tree)->left), data);
	else
		ft_bin_add_sort(&((*tree)->right), data);
}

t_bin *ft_find_tree(t_bin **tree, int info)
{
	if (!tree || !*tree)
		return NULL;
	if (info < (*tree)->data)
		return (ft_find_tree(&((*tree)->left), info));
	else if (info > (*tree)->data)
		return (ft_find_tree(&((*tree)->right), info));
	else
		return *tree;
}

void ft_print_tree_prefix(t_bin **tree)
{
	if (!tree || !*tree)
		return ;
	ft_print_tree_prefix(&((*tree)->left));
	printf("%d\n", (*tree)->data);
	ft_print_tree_prefix(&((*tree)->right));
}

void ft_print_tree_postfix(t_bin **tree)
{
	if (!tree || !*tree)
		return ;
	ft_print_tree_postfix(&((*tree)->right));
	printf("%d\n", (*tree)->data);
	ft_print_tree_postfix(&((*tree)->left));
}

void ft_print_tree_infixe(t_bin **tree)
{
	if (!tree || !*tree)
		return ;
	printf("%d\n", (*tree)->data);
	ft_print_tree_infixe(&((*tree)->right));
	ft_print_tree_infixe(&((*tree)->left));
}

void ft_free_bin(t_bin **tree)
{
    if (!tree || !*tree)
            return ;
	ft_free_bin(&((*tree)->left));
	ft_free_bin(&((*tree)->right));
	free(*tree);
	*tree = NULL;
}
