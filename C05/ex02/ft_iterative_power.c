/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_power.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/28 12:15:03 by mmelo         #+#    #+#                 */
/*   Updated: 2026/01/28 14:25:55 by mmelo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int		n;

	n = 1;
	if (power < 0)
		return (0);
	while (power)
	{
		n *= nb;
		power--;
	}
	return (n);
}

// #include <stdio.h>
// #include <math.h>
// int main()
// {
// 	int	i;
// 	int j;
// 	int	mine;
// 	int actual;
// 	for(i = - 8; i <= 8; i++)
// 	{
// 		for (j = -3; j <= 8; j++)
// 		{
// 			mine = ft_iterative_power(i,j);
// 			actual = pow(i, j);
// 			if (j >= 0)
// 				printf("%i^%i = %i -> %i\n",i ,j,  mine, mine == actual);
// 			else
// 				printf("%i^%i = %i -> %i\n",i, j, mine, mine == 0);
// 		}
// 	}
// }