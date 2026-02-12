/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_is_sort.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/07 19:52:58 by mmelo         #+#    #+#                 */
/*   Updated: 2026/02/10 14:50:25 by mmelo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	d;

	i = -1;
	d = 1;
	while (++i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
		{
			d = -1;
			break ;
		}
		if (f(tab[i], tab[i + 1]) < 0)
		{
			d = 1;
			break ;
		}
	}
	while (++i < length - 1)
	{
		if (d * f(tab[i], tab[i + 1]) > 0)
			return (0);
	}
	return (1);
}

// #include <stdio.h>
// int	subtraction(int a, int b)
// {
// 	return (a - b);
// }

// int main()
// {
// 	int arr1[] = {4, 6, 2, 7, 2, 5, 3};
// 	int arr2[] = {4, 6, 10, 7, 8, 9, 10};
// 	int arr3[] = {9, 6, 6, 7, 8, 9, 10};
// 	int arr4[] = {4, 6, 6, 7, 8, 9, 8};
// 	int arr5[] = {4, 6, 6, 9, 8, 9, 10};
// 	int arr6[] = {7, 7, 7, 7, 6, 6, 6, 6,
// 	 5, 5, 4, 3, 3, 3, 3, 3, 3, 3, 4, 2, 2, 2, 2, 1, 1, 1};
// 	int arr7[] = {-4};

// 	printf("%i\n", ft_is_sort(arr1, 7, subtraction));
// 	printf("%i\n", ft_is_sort(arr2, 7, subtraction));
// 	printf("%i\n", ft_is_sort(arr3, 7, subtraction));
// 	printf("%i\n", ft_is_sort(arr4, 7, subtraction));
// 	printf("%i\n", ft_is_sort(arr5, 7, subtraction));
// 	printf("%i\n", ft_is_sort(arr6, 26, subtraction));
// 	printf("%i\n", ft_is_sort(arr7, 1, subtraction));
// }