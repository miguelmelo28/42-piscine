/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_base.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/29 16:04:32 by mmelo         #+#    #+#                 */
/*   Updated: 2026/01/29 17:08:36 by mmelo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_valid_base(char *str)
{
	int		n;
	int		i;

	n = 0;
	while (*str)
	{
		if (*str == '+' || *str == '-')
			return (0);
		i = 0;
		while (str[++i])
		{
			if (str[i] == *str)
				return (0);
		}
		str++;
		n++;
	}
	return (n);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	last_digit;
	int		division;
	int		base_number;
	long	n;

	base_number = ft_valid_base(base);
	if (base_number > 1)
	{
		n = nbr;
		if (n < 0)
		{
			write(1, "-", 1);
			n = -n;
		}
		division = n / base_number;
		last_digit = base[n % base_number];
		if (n >= base_number)
			ft_putnbr_base(division, base);
		write(1, &last_digit, 1);
	}
}

// #include <stdio.h>
// #include <limits.h>
// int main()
// {	
// 	char	hexadecimal[] = "0123456789ABCDEF";
// 	//char	decimal[] = "0123456789";
// 	// char	binary[] = "01";
// 	printf("Decimal = 15 -> Hexa = %i\n", INT_MIN);
// 	ft_putnbr_base(INT_MIN, hexadecimal);
// 	// printf(" == F\n");
// 	// printf("Decimal = 65235 -> Binary = ");
// 	// ft_putnbr_base(65235, binary);
// 	// printf(" == 1111111011010011\n");
// }