/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/24 18:47:23 by mmelo         #+#    #+#                 */
/*   Updated: 2026/01/27 19:59:41 by mmelo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>
// #include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;

	if (*str == 0 && *to_find == 0)
		return (str);
	while (*str)
	{
		i = 0;
		while (1)
		{
			if (str[i] == to_find[i])
				i++;
			else
			{
				if (to_find[i] == 0)
					return (str);
				else
				{
					str++;
					break ;
				}
			}
		}
	}
	return (NULL);
}

// int main()
// {
// 	char haystack[] = "Hello my name is Miguel :)";
// 	char zerhaystack [] = "";
// 	char needle[] = "name";
// 	char bigneedle[] = "Hello my name is Miguel :) I really like it here";
// 	char nonneedle[] = "nami";
// 	char zeroneedle[] = "";
// 	char defectneedle [] = {'9', '\0', 'n', 'a', 'm', 'e', '\0'};
// 	char nontermneedle [] = {'n', 'a', 'm', 'e'};
// 	printf("org func:%s\ncpy func:%s\n",
// 	strstr(haystack, needle), ft_strstr(haystack, needle));
// 	printf("%s == %s -> %i\n", strstr(haystack, needle),
// 	ft_strstr(haystack, needle),
// 	ft_strstr(haystack, needle) == strstr(haystack, needle));
// 	printf("%s == %s -> %i\n", strstr(haystack, nonneedle),
// 	ft_strstr(haystack, nonneedle),
// 	ft_strstr(haystack, nonneedle) == strstr(haystack, nonneedle));
// 	printf("%s == %s -> %i\n", strstr(haystack, zeroneedle),
// 	ft_strstr(haystack, zeroneedle),
// 	ft_strstr(haystack, zeroneedle) == strstr(haystack, zeroneedle));
// 	printf("%s == %s -> %i\n", strstr(haystack, bigneedle),
// 	ft_strstr(haystack, bigneedle),
// 	ft_strstr(haystack, bigneedle) == strstr(haystack, bigneedle));
// 	printf("%s == %s -> %i\n", strstr(zerhaystack, bigneedle),
// 	ft_strstr(zerhaystack, bigneedle),
// 	ft_strstr(zerhaystack, bigneedle) == strstr(zerhaystack, bigneedle));
// 	printf("%s == %s -> %i\n", strstr(zerhaystack, zeroneedle),
// 	ft_strstr(zerhaystack, zeroneedle),
// 	ft_strstr(zerhaystack, zeroneedle) == strstr(zerhaystack, zeroneedle));
// 	printf("%s == %s -> %i\n", strstr(haystack, defectneedle),
// 	ft_strstr(haystack, defectneedle),
// 	ft_strstr(haystack, defectneedle) == strstr(haystack, defectneedle));
// 	printf("%s == %s -> %i\n", strstr(haystack, nontermneedle),
// 	ft_strstr(haystack, nontermneedle),
// 	ft_strstr(haystack, nontermneedle) == strstr(haystack, nontermneedle));
// }