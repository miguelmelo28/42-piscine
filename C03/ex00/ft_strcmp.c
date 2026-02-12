/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/24 14:56:43 by mmelo         #+#    #+#                 */
/*   Updated: 2026/01/29 11:46:08 by mmelo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int		i;
	int		n;

	i = 0;
	while (1)
	{
		n = s1[i] - s2[i];
		if (n != 0)
		{
			break ;
		}
		if (s1[i] == 0 && s2[i] == 0)
		{
			break ;
		}
		i++;
	}
	return (n);
}

// #include <unistd.h>
// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char a[] = "AB";
// 	char b[] = "AA";
// 	char c[] = "AABG";
// 	printf("%i == %i -> %i\n",strcmp(a, b), ft_strcmp(a,b), 
// 	ft_strcmp(a,b) == strcmp(a, b));
// 	printf("%i == %i -> %i\n",strcmp(a, c), ft_strcmp(a,c),
// 	ft_strcmp(a,c) == strcmp(a, c));
// 	printf("%i == %i -> %i\n",strcmp(c, b), ft_strcmp(c,b),
// 	ft_strcmp(c,b) == strcmp(c, b));
// }