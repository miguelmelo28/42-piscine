/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_any.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/07 19:46:35 by mmelo         #+#    #+#                 */
/*   Updated: 2026/02/09 14:47:50 by mmelo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = -1;
	while (tab[++i])
	{
		if (f(tab[i]))
			return (1);
	}
	return (0);
}

// #include <stdio.h>
// int starts_with_k(char *strs)
// {
// 	if (*strs == 'k')
// 		return (1);
// 	else
// 		return (0);
// }

// int main()
// {
// 	char *strs[6] = {"crazy", "lazy", "mazy", "krazy", "wazy", 0};
// 	char *strs_[6] = {"crazy", "lazy", "mazy", "razy", "wazy", 0};

// 	printf("%i\n", ft_any(strs, starts_with_k));
// 	printf("%i\n", ft_any(strs_, starts_with_k));
// }