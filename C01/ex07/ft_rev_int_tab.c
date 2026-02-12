/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_rev_int_tab.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/21 20:33:43 by mmelo         #+#    #+#                 */
/*   Updated: 2026/01/22 14:09:33 by mmelo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		n;
	int		i;

	i = 0;
	while (i < size / 2)
	{
		n = tab[i];
		tab[i] = tab[size - i -1];
		tab[size - i -1] = n;
		i++;
	}
}
