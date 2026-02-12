/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sort_int_tab.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/22 13:39:07 by mmelo         #+#    #+#                 */
/*   Updated: 2026/01/22 14:10:02 by mmelo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int		n;
	int		i;

	while (size > 0)
	{
		i = 0;
		while (i < size - 1)
		{
			n = tab[i];
			if (n > tab[i + 1])
			{
				tab[i] = tab[i + 1];
				tab[i + 1] = n;
			}
			i++;
		}
		size--;
	}
}
