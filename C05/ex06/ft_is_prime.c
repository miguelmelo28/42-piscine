/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_is_prime.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/28 13:37:34 by mmelo         #+#    #+#                 */
/*   Updated: 2026/01/28 14:27:56 by mmelo         ########   odam.nl         */
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
// #include <stdio.h>
// int main()
// {
// 	int	i;
// 	int	n_prime;
// 	n_prime = 1;
// 	for (i = -10; i <= 7920; i++)
// 		{
// 			if (ft_is_prime(i))
// 				{
// 					printf("%i ", i);
// 					if (n_prime % 20 == 0)
// 						printf("\n");
// 					n_prime++;
// 				}
// 		}
// }