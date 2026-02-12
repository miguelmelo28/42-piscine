/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/26 16:04:51 by mmelo         #+#    #+#                 */
/*   Updated: 2026/01/26 17:26:27 by mmelo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <bsd/string.h>
// #include <stdio.h>

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

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	answer;

	answer = ft_strlen(src);
	while (size)
	{
		if (size == 1)
			*dest = '\0';
		else
		{
			*dest = *src;
			if (*src != 0)
				src++;
		}
		dest++;
		size--;
	}
	return (answer);
}

// int main(void)
// {
// 	char	dest[] = "999999999";
// 	char	dest2[] = "999999999";
// 	char	src[] = "Hello Hi:)";
// 	printf("%lu\n%s\n", strlcpy(dest, src, 10), dest);
// 	printf("%u\n%s\n", ft_strlcpy(dest2, src, 10), dest2);

// 	char	dest_[] = "999999999";
// 	char	dest2_[] = "999999999";
// 	char	src_[] = "Hello";
// 	printf("%lu\n%s\n%c\n", strlcpy(dest_, src_, 10), dest_, dest_[9]);
// 	printf("%u\n%s\n%c\n", ft_strlcpy(dest2_, src_, 10), dest2_, dest2_[9]);
// }
