/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sqrt.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/28 13:11:01 by mmelo         #+#    #+#                 */
/*   Updated: 2026/01/28 14:27:23 by mmelo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int		n;

	n = 0;
	if (nb < 0)
		return (0);
	while (n * n < nb)
		n++;
	if (n * n == nb)
		return (n);
	else
		return (0);
}

// #include <stdio.h>
// #include <math.h>
// int main()
// {
// 	int	i;
// 	double	root;
// 	int root_mine;

// 	for(i = -9; i <= 100; i++)
// 	{
// 		root_mine = ft_sqrt(i);
// 		root = sqrt(i);
// 		if (root - (int)root == 0 && i >= 0)
// 			printf("√%i = %i == %f -> %i\n",i,root_mine,root,root_mine==root);
// 		else
// 			printf("√%i = %i == %i -> %i\n", i, root_mine, 0, root_mine==0);
// 	}
// }