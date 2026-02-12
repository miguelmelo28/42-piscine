/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_is_negative.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.42.fr>                  +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/20 17:55:30 by mmelo         #+#    #+#                 */
/*   Updated: 2026/01/21 14:07:05 by mmelo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	neg;
	char	pos;

	neg = 78;
	pos = 80;
	if (n < 0)
	{
		write(1, &neg, 1);
	}
	else
	{
		write(1, &pos, 1);
	}
}
