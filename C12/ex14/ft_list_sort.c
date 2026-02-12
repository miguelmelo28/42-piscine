/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list_sort.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/09 19:54:26 by mmelo         #+#    #+#                 */
/*   Updated: 2026/02/11 14:22:07 by mmelo         ########   odam.nl         */
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

t_list	*ft_switch(t_list **begin_list, t_list *previous_list, t_list *list1)
{
	t_list	*list2;

	list2 = list1->next;
	if (previous_list == 0)
		*begin_list = list2;
	else
		previous_list->next = list2;
	list1->next = list2->next;
	list2->next = list1;
	return (list2);
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	int		n;
	t_list	*current;
	t_list	*previous;

	n = ft_list_size(*begin_list);
	while (--n)
	{
		previous = 0;
		current = *begin_list;
		while (current->next)
		{
			if (cmp(current->data, (current->next)->data) > 0)
				previous = ft_switch(begin_list, previous, current);
			else
			{
				previous = current;
				current = current->next;
			}
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
// 	int one = 1;
// 	int two = 2;
// 	int three = 3;	
// 	int four = 4;
// 	int i = 0;

// 	t_list	**begin = malloc(sizeof(t_list *));
// 	*begin = ft_create_elem(&four);
// 	// ft_list_push_back(begin, &four);
// 	// ft_list_push_back(begin, &three);
// 	// ft_list_push_back(begin, &one);

// 	while (1)
// 	{
// 		printf("%i ", *(int*)ft_list_at(*begin, i)->data);
// 		if (ft_list_at(*begin, i)->next == 0)
// 			break;
// 		i++;
// 	}
// 	printf("\n");
// 	ft_list_sort(begin, subtraction);
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