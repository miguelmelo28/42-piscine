/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_numeric.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/22 18:46:44 by mmelo         #+#    #+#                 */
/*   Updated: 2026/01/25 18:56:04 by mmelo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
		{
			return (0);
		}
		str++;
	}
	return (1);
}

// int main(void)
// {
// 	char test1[] = "54356";
// 	char test2[] = "436 56";
// 	char test3[] = "hell34oo:)";
// 	char test4[] = "helloo234";
// 	printf("%i%i%i%i", ft_str_is_numeric(test1), ft_str_is_numeric(test2),
// ft_str_is_numeric(test3), ft_str_is_numeric(test4));
// }