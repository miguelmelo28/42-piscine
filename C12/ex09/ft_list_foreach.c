/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list_foreach.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/09 17:40:26 by mmelo         #+#    #+#                 */
/*   Updated: 2026/02/11 14:20:59 by mmelo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	if (!begin_list)
		return ;
	ft_list_foreach(begin_list->next, f);
	f(begin_list->data);
}

// #include <stdio.h>
// #include <unistd.h>
// void	ft_putnbr(void *nb)
// {
// 	char	last_digit;
// 	int		division;
// 	long	n;

// 	n = *(int*) nb;
// 	if (n < 0)
// 	{
// 		write(1, "-", 1);
// 		n = -n;
// 	}
// 	division = n / 10;
// 	last_digit = n % 10 + '0';
// 	if (n >= 10)
// 	{
// 		ft_putnbr(&division);
// 	}
// 	write(1, &last_digit, 1);
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

// 	t_list	*begin;
// 	begin = ft_create_elem(&four);
// 	ft_list_push_back(begin, &four);
// 	ft_list_push_back(begin, &three);
// 	ft_list_push_back(begin, &one);
// 	ft_list_foreach(begin, ft_putnbr);
// }