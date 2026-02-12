/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list_remove_if.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/09 19:16:23 by mmelo         #+#    #+#                 */
/*   Updated: 2026/02/11 14:23:11 by mmelo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	remove_from_list(t_list **begin_list, t_list *previous, t_list *list,
void (*free_fct)(void *))
{
	if (previous == 0)
		*begin_list = list->next;
	else
		previous->next = list->next;
	free_fct(list->data);
	free(list);
}

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(),
void (*free_fct)(void *))
{
	t_list	*current;
	t_list	*previous;

	current = *begin_list;
	previous = 0;
	while (current)
	{
		if (!cmp(current->data, data_ref))
		{
			remove_from_list(begin_list, previous, current, free_fct);
			if (previous == 0)
				current = *begin_list;
			else
				current = previous->next;
		}
		else
		{
			previous = current;
			current = current->next;
		}
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
// int	subtraction(void *a, void *b)
// {
// 	return (*(int *)a - *(int *)b);
// }

// void free(void *data)
// {
// 	void *d;

// 	d = data;
// 	return ;
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
// 	ft_list_remove_if(begin, &one__, subtraction, free);
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