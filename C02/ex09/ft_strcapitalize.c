/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcapitalize.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/24 13:22:13 by mmelo         #+#    #+#                 */
/*   Updated: 2026/01/26 17:25:52 by mmelo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

int	ft_char_is_numeric(char c)
{
	if (c < '0' || c > '9')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

int	ft_char_is_alpha(char c)
{
	if ((c < 'a' || c > 'z') && (c < 'A' || c > 'Z'))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

int	ft_char_is_uppercase(char c)
{
	if (c < 'A' || c > 'Z')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

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

char	*ft_strcapitalize(char *str)
{
	char	last_char;
	int		i;

	last_char = ' ';
	i = 0;
	while (str[i])
	{
		if (!(ft_char_is_alpha(last_char) || ft_char_is_numeric(last_char)))
		{
			if (ft_char_is_lowercase(str[i]))
			{
				str[i] -= 32;
			}
		}
		else
		{
			if (ft_char_is_uppercase(str[i]))
			{
				str[i] += 32;
			}
		}
		last_char = str[i];
		i++;
	}
	return (str);
}

// int main()
// {
// 	char string[] = "hi, how are you? 42words forty-two; fifty+and+one";
// 	char *a;
// 	printf("%s\n", string);
// 	a = ft_strcapitalize(string);
// 	printf("%s\n", a);
// }