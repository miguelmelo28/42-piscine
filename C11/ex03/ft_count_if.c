/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_count_if.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/07 19:50:25 by mmelo         #+#    #+#                 */
/*   Updated: 2026/02/09 14:47:43 by mmelo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	count;

	i = -1;
	count = 0;
	while (++i < length)
	{
		if (f(tab[i]))
			count++;
	}
	return (count);
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
// 	char *strs[5] = {"crazy", "klazy", "mazy", "krazy", "kazy"};
// 	char *strs_[5] = {"crazy", "lazy", "mazy", "razy", "wazy"};

// 	printf("%i\n", ft_count_if(strs, 5, starts_with_k));
// 	printf("%i\n", ft_count_if(strs_, 5, starts_with_k));
// }