#pragma once

// INCLUDES
#include <stdlib.h>
#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

// LINKED LIST
typedef struct s_list
{
	void *data;
	struct s_list *next;
	struct s_list *prev;
} t_list;

// BINNARY TREE
typedef struct s_bin
{
	struct s_bin *left;
	struct s_bin *right;
	int data;
} t_bin;

// FUNCTIONS STACK (PILE) LINKED LIST

/**
 * Crée un nouveau nœud de liste chaînée avec les données fournies
 * @param data Pointeur vers les données à stocker dans le nœud
 * @return Pointeur vers le nouveau nœud, ou NULL si allocation échoue ou data est NULL
 */
t_list	*ft_lst_create(void *data);

/**
 * Ajoute un nouvel élément au sommet de la pile (LIFO)
 * @param lst Double pointeur vers la tête de la pile
 * @param data Pointeur vers les données à empiler
 */
void	push(t_list **lst, void *data);

/**
 * Retire l'élément du sommet de la pile
 * @param lst Double pointeur vers la tête de la pile
 * @return Pointeur vers le nœud retiré, ou NULL si la pile est vide
 */
t_list	*pop(t_list **lst);

// FUNCTIONS QUEUE (FILE) LINKED LIST

/**
 * Ajoute un élément à la fin de la file (FIFO)
 * @param lst Double pointeur vers la tête de la file
 * @param data Pointeur vers les données à ajouter
 */
void	add(t_list **lst, void *data);

// FUNCTIONS BINNARY TREE

/**
 * Crée un nouveau nœud d'arbre binaire avec la valeur entière donnée
 * @param data Valeur entière à stocker dans le nœud
 * @return Pointeur vers le nouveau nœud, ou NULL si allocation échoue
 */
t_bin	*ft_bin_create(int data);

/**
 * Ajoute un entier à l'arbre binaire de recherche en ordre trié
 * @param tree Double pointeur vers la racine de l'arbre
 * @param data Valeur entière à ajouter à l'arbre
 */
void	ft_bin_add_sort(t_bin **tree, int data);

/**
 * Recherche une valeur dans l'arbre binaire de recherche
 * @param tree Double pointeur vers la racine de l'arbre
 * @param info Valeur entière à rechercher
 * @return Pointeur vers le nœud contenant la valeur, ou NULL si non trouvé
 */
t_bin	*ft_find_tree(t_bin **tree, int info);

/**
 * Affiche les nœuds en parcours infixe (gauche, racine, droite) - ordre trié
 * @param tree Double pointeur vers la racine de l'arbre
 */
void	ft_print_tree_prefixe(t_bin **tree);

/**
 * Affiche les nœuds en parcours infixe inversé (droite, racine, gauche)
 * @param tree Double pointeur vers la racine de l'arbre
 */
void	ft_print_tree_postfixe(t_bin **tree);

/**
 * Affiche les nœuds en parcours préfixe (racine, droite, gauche)
 * @param tree Double pointeur vers la racine de l'arbre
 */
void	ft_print_tree_infixe(t_bin **tree);

/**
 * Libère récursivement tous les nœuds de l'arbre binaire
 * @param tree Double pointeur vers la racine (mis à NULL après libération)
 */
void	ft_free_bin(t_bin **tree);
