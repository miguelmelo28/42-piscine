/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list_push_front.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/08 15:35:23 by mmelo         #+#    #+#                 */
/*   Updated: 2026/02/11 14:25:53 by mmelo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*new;

	new = ft_create_elem(data);
	new->next = *begin_list;
	*begin_list = new;
}

// #include <stdio.h>
// int main()
// {
// 	int arr2[6] = {1, 2, 3, 4, 5, 0};
// 	int arr[6] = {6, 7, 8, 9, 10, 0};

// 	t_list *list;
// 	t_list **begin;
// 	int i;

// 	list = ft_create_elem(arr);
// 	begin = malloc(sizeof(list));
// 	*begin = list;
// 	i = -1;
// 	printf("%p\n", *begin);
// 	while (((int*)(*begin)->data)[++i])
// 	{
// 		printf("%i ", ((int*)(*begin)->data)[i]);
// 	}
// 	printf("\n");
// 	ft_list_push_front(begin, arr2);
// 	printf("%p\n", *begin);
// 	printf("%p\n", (*begin)->next);
// 	i = -1;
// 	while (((int*)(*begin)->data)[++i])
// 	{
// 		printf("%i ", ((int*)(*begin)->data)[i]);
// 	}
// 	i = -1;
// 	while (((int*)((*begin)->next)->data)[++i])
// 	{
// 		printf("%i ", ((int*)((*begin)->next)->data)[i]);
// 	}
// 	printf("\n");
// }