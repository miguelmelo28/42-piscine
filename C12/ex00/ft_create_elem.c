/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_create_elem.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/08 15:21:52 by mmelo         #+#    #+#                 */
/*   Updated: 2026/02/11 14:18:39 by mmelo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_create_elem(void *data)
{
	t_list	*list;

	list = malloc(sizeof(t_list));
	if (list == 0)
		return (0);
	list->data = data;
	list->next = NULL;
	return (list);
}

// #include <stdio.h>
// int main()
// {
// 	int arr[6] = {1, 2, 3, 4, 5, 0};
// 	t_list *list;
// 	int i;

// 	list = ft_create_elem(arr);
// 	i = -1;
// 	while (((int*)list->data)[++i])
// 	{
// 		printf("%i ", ((int*)list->data)[i]);
// 	}
// }