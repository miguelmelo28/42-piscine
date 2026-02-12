/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list_size.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/08 18:50:09 by mmelo         #+#    #+#                 */
/*   Updated: 2026/02/11 14:30:55 by mmelo         ########   odam.nl         */
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

// int	ft_list_size(t_list *begin_list)
// {
// 	if (!begin_list)
// 		return (0);
// 	return (ft_list_size(begin_list->next) + 1);
// }
//
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
// 	int one = 1;
// 	int two = 2;
// 	int three = 3;	
// 	int four = 4;
// 	int i = 0;

// 	t_list	**begin = malloc(sizeof(t_list *));
// 	*begin = ft_create_elem(&one);
// 	ft_list_push_back(begin, &two);
// 	ft_list_push_back(begin, &three);
// 	ft_list_push_back(begin, &four);

// 	while (1)
// 	{
// 		printf("%i ", *(int*)ft_list_at(*begin, i)->data);
// 		if (ft_list_at(*begin, i)->next == 0)
// 			break;
// 		i++;
// 	}
// 	printf("\nsize : %i\n", ft_list_size(*begin));
// }