/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/02 13:14:24 by mmelo         #+#    #+#                 */
/*   Updated: 2026/02/07 14:31:11 by mmelo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int		n;

	n = 0;
	while (*str)
	{
		str++;
		n++;
	}
	return (n);
}

void	join(char *str, char *sep)
{
	int		i;

	i = 0;
	while (*str)
		str++;
	while (sep[i])
	{
		str[i] = sep[i];
		i++;
	}
	str[i] = sep[i];
}

int	arr_str_len(int size, char **strs)
{
	int	len;
	int	i;

	i = -1;
	len = 0;
	while (++i < size)
		len += ft_strlen(strs[i]);
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;

	if (size <= 0)
	{
		str = malloc(1);
		*str = '\0';
		return (str);
	}
	str = malloc(arr_str_len(size, strs) + (size - 1) * ft_strlen(sep) + 1);
	str[0] = '\0';
	join(str, strs[0]);
	i = 0;
	while (++i < size)
	{
		join(str, sep);
		join(str, strs[i]);
	}
	return (str);
}

// #include <string.h>
// #include <stdio.h>
// int main()
// {
// 	char	*strs[5] = {"Hey", "Hi", "Hello", "Yo", "What's up"};
// 	char	sep[] = " <---> ";
// 	char	*final;

// 	final = ft_strjoin(5, strs, sep);
// 	printf("%s\n", final);
// }