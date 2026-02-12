/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_advanced_sort_string_tab.c                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/07 21:58:06 by mmelo         #+#    #+#                 */
/*   Updated: 2026/02/09 15:59:17 by mmelo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	char	*n;
	int		i;
	int		j;

	j = -1;
	while (tab[++j])
	{
		i = 0;
		while (tab[i] && tab[i + 1])
		{
			n = tab[i];
			if (cmp(n, tab[i + 1]) > 0)
			{
				tab[i] = tab[i + 1];
				tab[i + 1] = n;
			}
			i++;
		}
	}
}

// #include <stdio.h>
// int	ft_strcmp(char *s1, char *s2)
// {
// 	int		i;
// 	int		n;

// 	i = 0;
// 	while (1)
// 	{
// 		n = s1[i] - s2[i];
// 		if (n != 0)
// 		{
// 			break ;
// 		}
// 		if (s1[i] == 0 && s2[i] == 0)
// 		{
// 			break ;
// 		}
// 		i++;
// 	}
// 	return (n);
// }

// int main()
// {
// 	char *strs[6] = {"Hey", "hi", "Hello", "Yo" , "What's up", 0};
// 	ft_advanced_sort_string_tab(strs, ft_strcmp);
// 	int i = -1;
// 	while (strs[++i])
// 		printf("%s\n",strs[i]);
// }
