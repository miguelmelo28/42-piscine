/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list_last.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/08 18:54:16 by mmelo         #+#    #+#                 */
/*   Updated: 2026/02/11 14:25:10 by mmelo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	while (begin_list->next)
		begin_list = begin_list->next;
	return (begin_list);
}

// #include <stdio.h>
// int main()
// {
// 	int one_ = 1;
// 	int two_ = 2;
// 	int three_ = 3;	
// 	t_list *one = ft_create_elem(&one_);
// 	t_list *two = ft_create_elem(&two_);
// 	t_list *three = ft_create_elem(&three_);
// 	one->next = two;
// 	two->next = three;
// 	printf("%i\n",*(int*)((ft_list_last(one)->data)));
// }