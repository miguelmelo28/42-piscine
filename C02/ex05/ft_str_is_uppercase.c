/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_uppercase.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/22 19:25:23 by mmelo         #+#    #+#                 */
/*   Updated: 2026/01/25 18:55:57 by mmelo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (*str < 'A' || *str > 'Z')
		{
			return (0);
		}
		str++;
	}
	return (1);
}

// int main(void)
// {
// 	char test1[] = "HELO";
// 	char test2[] = "HEL OO";
// 	char test3[] = "Helloo:)";
// 	char test4[] = "HELOOO234";
// 	printf("%i%i%i%i", ft_str_is_uppercase(test1), ft_str_is_uppercase(test2),
// ft_str_is_uppercase(test3), ft_str_is_uppercase(test4));
// }