/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list_at.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/08 21:08:00 by mmelo         #+#    #+#                 */
/*   Updated: 2026/02/11 14:24:08 by mmelo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

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

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	if (!nbr)
		return (begin_list);
	if (begin_list == 0)
		return (0);
	return (ft_list_at(begin_list->next, nbr - 1));
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
// 	t_list *begin;

// 	begin = one;
// 	one->next = two;
// 	two->next = three;
// 	printf("%p\n", (ft_list_at(begin, 5)));
// 	printf("%i\n",*(int*)((ft_list_at(begin, 3)->data)));
// }