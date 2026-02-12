/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_non_printable.c                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/25 19:05:52 by mmelo         #+#    #+#                 */
/*   Updated: 2026/01/26 17:27:17 by mmelo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*hexadecimal(char c, char *hexa)
{
	char	remainder;

	remainder = c % 16;
	hexa[0] = '\\';
	hexa[1] = c / 16 + '0';
	if (remainder < 10)
	{
		hexa[2] = remainder + '0';
	}
	else
	{
		hexa[2] = remainder - 10 + 'a';
	}
	return (hexa);
}

int	ft_char_is_printable(char c)
{
	if (c < ' ' || c > '~')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	char	hexa[3];

	while (*str)
	{
		if (ft_char_is_printable(*str))
			write(1, str, 1);
		else
			write(1, hexadecimal(*str, hexa), 3);
		str++;
	}
}

// int main()
// {
// 	char	string[] = "Hello\rHow are you?";
// 	string[9] = 29;
// 	ft_putstr_non_printable(string);
// }