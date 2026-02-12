/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/25 17:39:17 by mmelo         #+#    #+#                 */
/*   Updated: 2026/01/28 15:07:37 by mmelo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int		n;

	n = 0;
	while (*str)
	{
		str++;
		n++;
	}
	return (n);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	a[] = "hello";
// 	printf("%i", ft_strlen(a));
// }