/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list_push_back.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/08 19:58:39 by mmelo         #+#    #+#                 */
/*   Updated: 2026/02/11 14:24:51 by mmelo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*current;

	current = *begin_list;
	while (current->next)
		current = current->next;
	current->next = ft_create_elem(data);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
// 	int one_ = 1;
// 	int two_ = 2;
// 	int three_ = 3;	
// 	int four_ = 4;
// 	t_list *one = ft_create_elem(&one_);
// 	t_list *two = ft_create_elem(&two_);
// 	t_list *three = ft_create_elem(&three_);
// 	t_list **begin = malloc(sizeof(one));

// 	*begin = one;
// 	one->next = two;
// 	two->next = three;
// 	ft_list_push_back(begin, &four_);
// 	printf("%i\n",*(int*)(((three->next)->data)));
// }