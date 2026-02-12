/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_find_next_prime.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/28 14:17:27 by mmelo         #+#    #+#                 */
/*   Updated: 2026/01/28 14:28:31 by mmelo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	n;

	if (nb <= 1)
		return (0);
	n = nb - 1;
	while (n - 1)
	{
		if (nb % n == 0)
			return (0);
		n--;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

// #include <stdio.h>
// int main()
// {
// 	int n;
// 	n = ft_find_next_prime(5783);
// 	printf("%i\n", n);
// }