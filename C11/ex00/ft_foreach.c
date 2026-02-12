/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_foreach.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/07 19:40:43 by mmelo         #+#    #+#                 */
/*   Updated: 2026/02/09 14:08:52 by mmelo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = -1;
	while (++i < length)
		f(tab[i]);
}

// #include <unistd.h>
// void	ft_putnbr(int nb)
// {
// 	char	last_digit;
// 	int		division;
// 	long	n;

// 	n = nb;
// 	if (n < 0)
// 	{
// 		write(1, "-", 1);
// 		n = -n;
// 	}
// 	division = n / 10;
// 	last_digit = n % 10 + '0';
// 	if (n >= 10)
// 	{
// 		ft_putnbr(division);
// 	}
// 	write(1, &last_digit, 1);
// }

// int main()
// {
// 	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

// 	ft_foreach(arr, 10, ft_putnbr);
// }