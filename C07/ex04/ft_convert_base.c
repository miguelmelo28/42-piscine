/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_convert_base.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/04 12:27:22 by mmelo         #+#    #+#                 */
/*   Updated: 2026/02/07 14:29:59 by mmelo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi_base(char *str, char *base);
int	ft_valid_base(char *str);

char	*ft_char_nbr_base(long nbr, char *base, int size)
{
	int		base_number;
	char	*dest;
	long	n;

	if (nbr < 0)
		n = -nbr;
	else
		n = nbr;
	dest = malloc(size + 1);
	dest[size] = '\0';
	base_number = ft_valid_base(base);
	size--;
	while (size)
	{
		dest[size] = base[n % base_number];
		n = n / base_number;
		size--;
	}
	if (nbr < 0)
		dest[size] = '-';
	else
		dest[size] = base[n];
	return (dest);
}

int	char_size(int nbr, int base_number)
{
	int	size;

	if (nbr == 0)
		return (1);
	size = 0;
	if (nbr < 0)
		size++;
	while (nbr != 0)
	{
		nbr = nbr / base_number;
		size++;
	}
	return (size);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		n;
	int		i;
	char	*str;
	int		size;

	if (ft_valid_base(base_from) < 2 || ft_valid_base(base_to) < 2)
		return (0);
	i = 0;
	n = ft_atoi_base(nbr, base_from);
	if (n > 2147483647 || n < -2147483648)
		return (0);
	size = char_size(n, ft_valid_base(base_to));
	str = ft_char_nbr_base(n, base_to, size);
	return (str);
}

// int main()
// {
// 	char decimal[] = "0123456789";
// 	char hexadecimal[] = "0123456789ABCDEF";
// 	char base_5[] = "01234";
// 	char binary[] = "01";

// 	char nbr[] = "-1423442";
// 	char *dest;

// 	dest = ft_convert_base(nbr, base_5, hexadecimal);
// 	printf("%s\n", dest);
// }