/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ultimate_range.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/02 17:24:55 by mmelo         #+#    #+#                 */
/*   Updated: 2026/02/03 15:01:10 by mmelo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc((max - min) * sizeof(int));
	i = -1;
	while (min + ++i < max)
		(*range)[i] = min + i;
	return (max - min);
}

// int main()
// {
// 	int *range;
// 	int max = 20;
// 	int min = 23;
// 	int arr = ft_ultimate_range(&range, min, max);
// 	int i = -1;
// 	printf("%i\n", arr);
// 	while (++i < max - min)
// 		printf("%i ", range[i]);
// }