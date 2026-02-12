/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/04 21:42:44 by mmelo         #+#    #+#                 */
/*   Updated: 2026/02/07 17:31:28 by mmelo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	n_strings(char *str, char *charset)
{
	int	n;
	int	i;

	n = 0;
	i = 0;
	if (!is_sep(str[i], charset))
	{
		i++;
		n++;
	}
	else
	{
		while (is_sep(str[i], charset))
			i++;
	}
	while (str[i])
	{
		if (is_sep(str[i - 1], charset) && !is_sep(str[i], charset))
			n++;
		i++;
	}
	return (n);
}

int	*len_strs(char *str, char *charset, int size)
{
	int	*len;
	int	i;
	int	j;
	int	length;

	j = -1;
	i = -1;
	if (size <= 0)
		return (0);
	len = malloc(sizeof(int) * size);
	length = 0;
	while (str[++i])
	{
		if (!is_sep(str[i], charset))
		{
			length++;
			if (is_sep(str[i + 1], charset))
				len[++j] = length;
		}
		else
			length = 0;
	}
	if (!is_sep(str[i - 1], charset))
		len[++j] = length;
	return (len);
}

char	*str_alloc(char *str, int i, int size)
{
	char	*string;
	int		j;

	string = malloc(size + 1);
	j = -1;
	while (++j < size)
	{
		string[j] = str[i + j];
	}
	string[j] = '\0';
	return (string);
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		*len_str;
	int		i;
	int		j;

	arr = malloc(sizeof(arr) * (n_strings(str, charset) + 1));
	len_str = len_strs(str, charset, n_strings(str, charset));
	j = -1;
	i = 0;
	if (!is_sep(str[i], charset) && str[i] != '\0')
	{
		j++;
		arr[j] = str_alloc(str, i, len_str[j]);
	}
	while (str[++i])
	{
		if (is_sep(str[i - 1], charset) && !is_sep(str[i], charset))
		{
			j++;
			arr[j] = str_alloc(str, i, len_str[j]);
		}
	}
	arr[++j] = 0;
	return (arr);
}

// #include <stdio.h>
// int main()
// {
// 	char s[] = ";;;df.. ..;dfg;.  .adf;. ";
// 	char **split;
// 	split = ft_split(s, " ;.");
// 	int i;

// 	i = 0;
// 	while(split[i])
// 	{
// 		printf("%p\n", split[i]);
// 		printf("%s\n", split[i]);
// 		i++;
// 	}
// }