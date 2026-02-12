/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/25 16:03:56 by mmelo         #+#    #+#                 */
/*   Updated: 2026/01/29 11:49:25 by mmelo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	int				answer;

	if ((unsigned int)ft_strlen(dest) < size)
		answer = ft_strlen(dest) + ft_strlen(src);
	else
		answer = size + ft_strlen(src);
	i = ft_strlen(dest);
	j = 0;
	while (i < size)
	{
		if (i == size - 1)
			dest[i] = '\0';
		else
		{
			dest[i] = src[j];
		}
		if (src[j] != 0)
			j++;
		i++;
	}
	return (answer);
}

// #include <unistd.h>
// #include <stdio.h>
// #include <bsd/string.h>
// int main()
// {
// 	char src[] = "world!";
// 	char src2[] = {'w', 'o', 'r', 'l', 'd', '\0', 'H', 'i', '\0'};
// 	char dest[10] = "Hello, ";
// 	char dest2[10] = "Hello, ";
// 	printf("Test 1:\n");
// 	int				b = ft_strlcat(dest2,src, 10);
// 	unsigned long	a = strlcat(dest,src, 10);
// 	printf("%zu == %u -> %i\n", a, b, (int)a == b);
// 	printf("org func:%s\ncpy func:%s\n\n", dest, dest2);
// 	char dest3[16] = "Hello, ";
// 	char dest4[16] = "Hello, ";
// 	printf("Test 2:\n");
// 	b = ft_strlcat(dest3,src2, 16);
// 	a = strlcat(dest4,src2, 16);
// 	printf("%zu == %u -> %i\n", a, b, (int)a == b);
// 	printf("%c == %c -> %i\n", dest3[14],
// 	dest4[14], dest3[14] == dest4[14]);
// 	printf("org func:%s\ncpy func:%s\n\n", dest3, dest4);
// 	char dest5[16] = "Hello, ";
// 	char dest6[16] = "Hello, ";
// 	printf("Test 3:\n");
// 	b = ft_strlcat(dest6,src, 2);
// 	a = strlcat(dest5,src, 2);
// 	printf("%zu == %u -> %i\n", a, b, (int)a == b);
// 	printf("%c == %c -> %i\n", dest5[4],
// 	dest6[4], dest5[4] == dest6[4]);
// 	printf("org func:%s\ncpy func:%s\n\n", dest5, dest6);
// }