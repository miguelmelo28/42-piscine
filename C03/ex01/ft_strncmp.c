/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/24 15:18:43 by mmelo         #+#    #+#                 */
/*   Updated: 2026/01/29 11:46:03 by mmelo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				answer;

	i = 0;
	answer = 0;
	while (i < n)
	{
		answer = s1[i] - s2[i];
		if (answer != 0)
		{
			break ;
		}
		if (s1[i] == 0 && s2[i] == 0)
		{
			break ;
		}
		i++;
	}
	return (answer);
}

// #include <unistd.h>
// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char a[] = "";
// 	char b[] = "";
// 	char c[] = "AABG";
// 	printf("%i == %i -> %i\n",strncmp(a, b, 2), ft_strncmp(a,b, 2), 
// 	ft_strncmp(a,b, 2) == strncmp(a, b, 2));
// 	printf("%i == %i -> %i\n",strncmp(a, c, 7), ft_strncmp(a,c, 7),
// 	ft_strncmp(a,c, 7) == strncmp(a, c, 7));
// 	printf("%i == %i -> %i\n",strncmp(c, b, 0), ft_strncmp(c,b, 0),
// 	ft_strncmp(c,b, 0) == strncmp(c, b, 0));
// }