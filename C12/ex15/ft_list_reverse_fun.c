/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list_reverse_fun.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/11 15:02:12 by mmelo         #+#    #+#                 */
/*   Updated: 2026/02/11 15:16:57 by mmelo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int	n;

	n = 1;
	while (begin_list->next)
	{
		n++;
		begin_list = begin_list->next;
	}
	return (n);
}

t_list	*list_i(t_list *begin_list, unsigned int nbr)
{
	if (!nbr)
		return (begin_list);
	if (begin_list == 0)
		return (0);
	return (list_i(begin_list->next, nbr - 1));
}

void	ft_list_reverse_fun(t_list *begin_list)
{
	int		size;
	int		i;
	void	*tmp;

	size = ft_list_size(begin_list);
	i = -1;
	while (++i < size / 2)
	{
		tmp = list_i(begin_list, i)->data;
		list_i(begin_list, i)->data = list_i(begin_list, size - i - 1)->data;
		list_i(begin_list, size - i - 1)->data = tmp;
	}
}

// #include <stdio.h>
// #include <stdlib.h>
// t_list *ft_list_at(t_list *begin_list, unsigned int nbr)
// {
// 	while (nbr--)
// 	{
// 		begin_list = begin_list->next;
// 		if (begin_list == 0)
// 			return (0);
// 	}
// 	return (begin_list);
// }

// void	ft_list_push_back(t_list **begin_list, void *data)
// {
// 	t_list *current;

// 	current = *begin_list;
// 	while (current->next)
// 		current = current->next;
// 	current->next = ft_create_elem(data);
// }
// int main()
// {
// 	int one_ = 1;
// 	int two_ = 2;
// 	int three_ = 3;	
// 	int four_ = 4;
// 	int i = 0;

// 	t_list	**begin = malloc(sizeof(t_list *));
// 	*begin = ft_create_elem(&one_);
// 	ft_list_push_back(begin, &two_);
// 	ft_list_push_back(begin, &three_);
// 	ft_list_push_back(begin, &four_);

// 	while (1)
// 	{
// 		printf("%i ", *(int*)ft_list_at(*begin, i)->data);
// 		if (ft_list_at(*begin, i)->next == 0)
// 			break;
// 		i++;
// 	}
// 	printf("\n");
// 	ft_list_reverse_fun(*begin);
// 	i = 0;
// 	while (1)
// 	{
// 		printf("%i ", *(int*)ft_list_at(*begin, i)->data);
// 		if (ft_list_at(*begin, i)->next == 0)
// 			break;
// 		i++;
// 	}
// 	printf("\n");
// }