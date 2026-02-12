/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   btree_create_node.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/11 16:08:15 by mmelo         #+#    #+#                 */
/*   Updated: 2026/02/11 16:12:24 by mmelo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

t_btree	*btree_create_node(void *item)
{
	t_btree *new;

	new = malloc(sizeof(t_btree *));
	if (new == 0)
		return (0);
	new->left = 0;
	new->right = 0;
	new->item = item;
	return (new);
}

// int main()
// {
// 	t_btree *new;
// 	int	i = 2;
	
// 	new = btree_create_node(&i);
// }
