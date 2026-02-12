/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/22 16:30:25 by mmelo         #+#    #+#                 */
/*   Updated: 2026/01/26 17:58:49 by mmelo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>
// #include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (n)
	{
		dest[j] = src[i];
		if (src[i] != 0)
			i++;
		n--;
		j++;
	}
	return (dest);
}

// int main(void)
// {
// 	char src[] = "Hi there :)";
// 	char dest[] = "99999999999999";
// 	char dest2[] = "99999999999999";
// 	char *a = ft_strncpy(dest, src, 5);
// 	char *b = strncpy(dest2, src, 5);
// 	printf("%s\n%s\n%s\n", src, b, a);
// 	char src_[] = {'H', 'e', 'l', 'l', 'o', '\0', 'H'};
// 	char dest_[] = "99999999999999";
// 	char dest2_[] = "99999999999999";
// 	char *a_ = ft_strncpy(dest_, src_, 9);
// 	char *b_ = strncpy(dest2_, src_, 9);
// 	printf("%s\n%s\n%s\n%c\n%c\n", src_, b_, a_, b_[6], a_[6]);
// }