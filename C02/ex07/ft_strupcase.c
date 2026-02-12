/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strupcase.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/22 19:28:26 by mmelo         #+#    #+#                 */
/*   Updated: 2026/01/25 18:55:53 by mmelo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

int	ft_char_is_lowercase(char c)
{
	if (c < 'a' || c > 'z')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

char	*ft_strupcase(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (ft_char_is_lowercase(str[i]))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

// int main(void)
// {
// 	char	c[] = "heLLlo?? idk sJKa to wirtte :) but yeah";
// 	char	*a;
// 	printf("%s\n", c);
// 	a = ft_strupcase(c);
// 	printf("%s\n", a);
// }