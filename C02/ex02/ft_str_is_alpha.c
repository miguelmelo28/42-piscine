/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_alpha.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/22 17:24:43 by mmelo         #+#    #+#                 */
/*   Updated: 2026/01/25 18:56:07 by mmelo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if ((*str < 'a' || *str > 'z') && (*str < 'A' || *str > 'Z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

// int main(void)
// {
// 	char test1[] = "helloo";
// 	char test2[] = "hel loo";
// 	char test3[] = "helloo:)";
// 	char test4[] = "helloo234";
// 	printf("%i%i%i%i", ft_str_is_alpha(test1), ft_str_is_alpha(test2),
// ft_str_is_alpha(test3), ft_str_is_alpha(test4));
// }