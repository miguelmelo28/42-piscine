/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_recursive_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/28 12:05:52 by mmelo         #+#    #+#                 */
/*   Updated: 2026/01/28 14:25:33 by mmelo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == (1))
		return (1);
	else
		return (nb * (ft_recursive_factorial(nb - 1)));
}

// #include <stdio.h>
// #include <math.h>
// int	main()
// {	
// 	printf("Test 1:\n");
// 	printf("%i! = %i -> %i\n\n", -3, ft_recursive_factorial(-3),
// 	ft_recursive_factorial(-3) == 0);
// 	int	i;
// 	for (i = 0; i < 12; i++)
// 	{
// 		printf("Test %i:\n", i + 2);
// 		printf("%i! = %i -> %i\n\n", i, ft_recursive_factorial(i),
// 		ft_recursive_factorial(i) == tgamma(i + 1));
// 	}
// }