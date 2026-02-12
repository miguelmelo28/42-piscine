/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list_foreach_if.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/09 17:50:04 by mmelo         #+#    #+#                 */
/*   Updated: 2026/02/11 14:23:45 by mmelo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void
*data_ref, int (*cmp)())
{
	if (!begin_list)
		return ;
	ft_list_foreach(begin_list->next, f);
	if (!cmp(begin_list->data, data_ref))
		f(begin_list->data);
}
