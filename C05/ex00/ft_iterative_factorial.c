/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/27 14:22:59 by mmelo         #+#    #+#                 */
/*   Updated: 2026/01/28 12:06:00 by mmelo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int		factorial;

	if (nb < 0)
		return (0);
	factorial = 1;
	while (nb)
	{
		factorial *= nb;
		nb--;
	}
	return (factorial);
}

// #include <stdio.h>
// #include <math.h>
// int	main()
// {	
// 	printf("Test 1:\n");
// 	printf("%i! = %i -> %i\n\n", -3, ft_iterative_factorial(-3),
// 	ft_iterative_factorial(-3) == 0);
// 	int	i;
// 	for (i = 0; i < 12; i++)
// 	{
// 		printf("Test %i:\n", i + 2);
// 		printf("%i! = %i -> %i\n\n", i, ft_iterative_factorial(i),
// 		ft_iterative_factorial(i) == tgamma(i + 1));
// 	}
// }