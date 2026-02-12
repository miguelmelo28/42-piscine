/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/30 17:38:59 by mmelo         #+#    #+#                 */
/*   Updated: 2026/02/07 14:31:52 by mmelo         ########   odam.nl         */
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

char	*ft_strdup(char *src)
{
	int		size;
	char	*dest;
	int		i;

	size = ft_strlen(src);
	dest = malloc(size + 1);
	i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char	src[] = "Hi there";
// 	char	src2[] = "jfk lds\0fsjk";
// 	char	*dest = ft_strdup(src);
// 	char	*dest_ = strdup(src);
// 	printf("og func:%s\nmy func:%s\n", dest_, dest);
// 	char	*dest2 = ft_strdup(src2);
// 	char	*dest2_ = strdup(src2);
// 	printf("og func:%s\nmy func:%s\n", dest2_, dest2);
// 	printf("%c == %c -> %i\n", dest2[10], dest2_[10], dest2[10] == dest2_[10]);
// }