#include "main.h"

int main(void)
{
	// BINNARY TREE
	t_bin *tree = ft_bin_create(5);
	ft_bin_add_sort(&tree, 3);
	ft_bin_add_sort(&tree, 2);
	ft_bin_add_sort(&tree, 4);
	ft_bin_add_sort(&tree, 1);
	ft_bin_add_sort(&tree, 7);
	ft_bin_add_sort(&tree, 6);
	ft_bin_add_sort(&tree, 8);
	ft_bin_add_sort(&tree, 9);

	printf("printf left : \n\n");
	ft_print_tree_left(&tree);
	printf("printf right: \n\n");
	ft_print_tree_right(&tree);
	printf("printf middle: \n\n");
	ft_print_tree_middle(&tree);

	printf("found : %d\n", ft_find_tree(&tree, 7)->data);
	printf("notfound : %p\n", ft_find_tree(&tree, 11));

	ft_free_bin(&tree);
}
