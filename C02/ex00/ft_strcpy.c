/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/22 15:51:24 by mmelo         #+#    #+#                 */
/*   Updated: 2026/01/25 18:56:16 by mmelo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>
// #include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

// int main(void)
// {
// 	char src[] = "Hi there :)";
// 	char dest[12];
// 	char dest2[12];
// 	ft_strcpy(dest, src);
// 	strcpy(dest2, src);
// 	printf("%s\n%s\n%s\n", src, dest2, dest);
// }