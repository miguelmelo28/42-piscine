/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_map.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/07 19:43:49 by mmelo         #+#    #+#                 */
/*   Updated: 2026/02/09 14:34:44 by mmelo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*arr;

	i = -1;
	arr = malloc(sizeof(int) * length);
	while (++i < length)
		arr[i] = f(tab[i]);
	return (arr);
}

// #include <stdio.h>
// int square(int n)
// {
// 	return n*n;
// }

// int main()
// {
// 	int arr[] = {1, 2, 3, 4, 5, 6, 0};
// 	int *arr_ = ft_map(arr, 6, square);
// 	int i = -1;
// 	while (arr[++i])
// 	{
// 		printf("%i ", arr_[i]);
// 	}
// }
