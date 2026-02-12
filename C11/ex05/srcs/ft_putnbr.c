/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/21 16:48:03 by mmelo         #+#    #+#                 */
/*   Updated: 2026/01/28 15:08:09 by mmelo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	last_digit;
	int		division;
	long	n;

	n = nb;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	division = n / 10;
	last_digit = n % 10 + '0';
	if (n >= 10)
	{
		ft_putnbr(division);
	}
	write(1, &last_digit, 1);
}

// #include <limits.h>
// int main()
// {
// 	int	n = -420;
// 	int	n1 = 12039;
// 	int	n2 = 9;
// 	ft_putnbr(n);
// 	ft_putnbr(n1);
// 	ft_putnbr(n2);
// 	ft_putnbr(INT_MAX);
// 	ft_putnbr(INT_MIN);
// }