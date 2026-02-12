/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list_merge.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/09 19:51:03 by mmelo         #+#    #+#                 */
/*   Updated: 2026/02/11 14:22:20 by mmelo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*current;

	current = *begin_list1;
	while (current->next)
		current = current->next;
	current->next = begin_list2;
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
// 	int one__ = 1;
// 	int two_ = 2;
// 	int three_ = 3;	
// 	int three__ = 3;
// 	int four_ = 4;
// 	int four__ = 4;
// 	int i = 0;

// 	t_list	**begin = malloc(sizeof(t_list *));
// 	*begin = ft_create_elem(&one_);
// 	ft_list_push_back(begin, &four_);
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
// 	ft_list_merge()
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