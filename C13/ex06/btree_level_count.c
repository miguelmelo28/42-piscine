/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   btree_level_count.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/11 19:10:40 by mmelo         #+#    #+#                 */
/*   Updated: 2026/02/12 11:31:12 by mmelo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	btree_level_count(t_btree *root)
{
	int	left;
	int	right;

	if (!root)
		return (0);
	left = btree_level_count(root->left) + 1;
	right = btree_create_node(root->right) + 1;
	if (left > right)
		return (left);
	return (right);
}