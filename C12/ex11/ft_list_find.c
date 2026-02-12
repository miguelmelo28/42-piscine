/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list_find.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/09 19:09:16 by mmelo         #+#    #+#                 */
/*   Updated: 2026/02/11 14:37:03 by mmelo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	if (!begin_list)
		return (0);
	if (!cmp(begin_list->data, data_ref))
		return (begin_list);
	return (ft_list_find(begin_list->next, data_ref, cmp));
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

// int	subtraction(void *a, void *b)
// {
// 	return (*(int *)a - *(int *)b);
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
// 		printf("%p: %i \n",ft_list_at(*begin, i),
// 		 *(int*)ft_list_at(*begin, i)->data);
// 		if (ft_list_at(*begin, i)->next == 0)
// 			break;
// 		i++;
// 	}
// 	printf("%i : %p\n", 2, ft_list_find(*begin, &two, subtraction));
// }