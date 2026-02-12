/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sort_params.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/28 16:05:11 by mmelo         #+#    #+#                 */
/*   Updated: 2026/01/29 11:16:15 by mmelo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int		i;
	int		n;

	i = 0;
	while (1)
	{
		n = s1[i] - s2[i];
		if (n != 0)
		{
			break ;
		}
		if (s1[i] == 0 && s2[i] == 0)
		{
			break ;
		}
		i++;
	}
	return (n);
}

void	ft_sort_str_tab(char **argv, int size)
{
	char	*n;
	int		i;

	while (size - 1 > 0)
	{
		i = 1;
		while (i < size - 1)
		{
			n = argv[i];
			if (ft_strcmp(n, argv[i + 1]) > 0)
			{
				argv[i] = argv[i + 1];
				argv[i + 1] = n;
			}
			i++;
		}
		size--;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	ft_sort_str_tab(argv, argc);
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
