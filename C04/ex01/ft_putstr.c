/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/25 17:45:58 by mmelo         #+#    #+#                 */
/*   Updated: 2026/01/28 15:07:17 by mmelo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	a[] = "Hello, world, 42 :)";
// 	ft_putstr(a);
// }