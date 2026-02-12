/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcat.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/24 15:40:18 by mmelo         #+#    #+#                 */
/*   Updated: 2026/01/29 11:48:47 by mmelo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>
// #include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int		i;

	i = 0;
	while (dest[i])
		i++;
	while (*src)
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
	return (dest);
}

// int main()
// {
// 	char	dest[26] = {'H', 'e', 'l', 'l', 'o', ',', '9','9','9','\0','9',
// 					'9','9','9','9','9','9','9','9','\0'};
// 	char	dest2[26] = {'H', 'e', 'l', 'l', 'o', ',', '9','9','9','\0','9',
// 					'9','9','9','9','9','9','9','9','\0'};
// 	char	dest3[7] = "";
// 	char	dest4[7] = "";
// 	char	src[] = "world!";
// 	char *a = strcat(dest,src);
// 	char *b = ft_strcat(dest2, src);
// 	char *c = strcat(dest3,src);
// 	char *d = ft_strcat(dest4, src);
// 	printf("%c == %c -> %i\n", a[18], b[18], a[18] == b[18]);
// 	printf("%s\n%s\n\n", a, b);
// 	printf("%s\n%s\n", c, d);
// }