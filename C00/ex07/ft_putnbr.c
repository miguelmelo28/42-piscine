/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/21 16:48:03 by mmelo         #+#    #+#                 */
/*   Updated: 2026/01/23 10:39:40 by mmelo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	last_digit;
	int		division;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	division = nb / 10;
	last_digit = nb % 10 + '0';
	if (nb >= 10)
	{
		ft_putnbr(division);
	}
	write(1, &last_digit, 1);
}
