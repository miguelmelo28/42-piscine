/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_recursive_power.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/28 12:40:43 by mmelo         #+#    #+#                 */
/*   Updated: 2026/01/28 14:29:58 by mmelo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
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
// 			mine = ft_recursive_power(i,j);
// 			actual = pow(i, j);
// 			if (j >= 0)
// 				printf("%i^%i = %i -> %i\n",i ,j,  mine, mine == actual);
// 			else
// 				printf("%i^%i = %i -> %i\n",i, j, mine, mine == 0);
// 		}
// 	}
// }