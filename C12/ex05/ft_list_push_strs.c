/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list_push_strs.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/08 20:20:57 by mmelo         #+#    #+#                 */
/*   Updated: 2026/02/11 17:16:20 by mmelo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*new;

	new = ft_create_elem(data);
	new->next = *begin_list;
	*begin_list = new;
}

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*begin;
	int		i;

	begin = ft_create_elem(strs[0]);
	i = 0;
	while (++i < size)
		ft_list_push_front(&begin, strs[i]);
	return (begin);
}

// #include <stdio.h>
// int main()
// {
// 	char	*strs[5] = {"Hey", "Hi", "Hello", "Yo", "What's up"};
// 	t_list	*begin;

// 	begin = ft_list_push_strs(5, strs);
// 	while (begin->next)
// 	{
// 		printf("%s\n", (char *)begin->data);
// 		begin = begin->next;
// 	}
// 	printf("%s\n", (char *)begin->data);
// }