/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/24 15:57:39 by mmelo         #+#    #+#                 */
/*   Updated: 2026/01/29 11:48:59 by mmelo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>
// #include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	while (*src && nb)
	{
		dest[i] = *src;
		src++;
		nb--;
		i++;
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
// 	char	dest5[10] = "999999999";
// 	char	dest6[10] = "999999999";
// 	char	src[] = "world!";
// 	char *a = strncat(dest,src, 14);
// 	char *b = ft_strncat(dest2, src, 14);
// 	char *c = strncat(dest3,src, 3);
// 	char *d = ft_strncat(dest4, src, 3);
// 	char *e = strncat(dest5, src, 0);
// 	char *f = ft_strncat(dest6, src, 0);
// 	printf("%c == %c -> %i\n", a[18], b[18], a[18] == b[18]);
// 	printf("orgn function: %s\ncopy funciton: %s\n", a, b);
// 	printf("orgn function: %s\ncopy funciton: %s\n", c, d);
// 	printf("orgn function: %s\ncopy funciton: %s\n", e, f);
// }