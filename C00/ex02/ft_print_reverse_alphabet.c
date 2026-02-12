/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*    ft_print_reverse_alphabet.c                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.42.fr>                  +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/20 17:24:10 by mmelo         #+#    #+#                 */
/*   Updated: 2026/01/21 14:04:01 by mmelo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	c;

	c = 122;
	while (c >= 97)
	{
		write(1, &c, 1);
		c--;
	}
}
