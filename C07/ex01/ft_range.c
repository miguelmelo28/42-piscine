/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_range.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/02 12:39:15 by mmelo         #+#    #+#                 */
/*   Updated: 2026/02/02 17:59:02 by mmelo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	if (min >= max)
		return (NULL);
	arr = malloc((max - min) * sizeof(int));
	i = -1;
	while (min + ++i < max)
		arr[i] = min + i;
	return (arr);
}

// int main()
// {
// 	int max = 3;
// 	int min = -20;
// 	int *arr = ft_range(min, max);
// 	int i = -1;
// 	printf("%p\n", arr);
// 	while (++i < max - min)
// 		printf("%i ", arr[i]);
// }