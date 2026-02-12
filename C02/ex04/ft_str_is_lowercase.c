/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_lowercase.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/22 18:49:28 by mmelo         #+#    #+#                 */
/*   Updated: 2026/01/25 18:56:00 by mmelo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (*str < 'a' || *str > 'z')
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
// 	char test2[] = "helNJS";
// 	char test3[] = "heLLOO";
// 	char test4[] = "helloo234";
// 	printf("%i%i%i%i", ft_str_is_lowercase(test1), ft_str_is_lowercase(test2),
// ft_str_is_lowercase(test3), ft_str_is_lowercase(test4));
// }