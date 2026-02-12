/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   btree_search_item.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/11 17:27:34 by mmelo         #+#    #+#                 */
/*   Updated: 2026/02/11 17:37:25 by mmelo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
int (*cmpf)(void *, void *))
{
	void	*left;
	void	*right;
	
	if (!root)
		return (0);
	left = btree_search_item(root->left, data_ref, cmpf);
	if (left)
		return (left);
	if (!cmpf(root->item, data_ref))
		return (root->item);
	right = btree_search_item(root->right, data_ref, cmpf);
	if (right)
		return (right);
	return (0);
}