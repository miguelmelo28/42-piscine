/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/28 14:34:34 by mmelo         #+#    #+#                 */
/*   Updated: 2026/01/30 17:28:58 by mmelo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int		value;
	int		sign;

	value = 0;
	sign = 1;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		value = 10 * value + *str - '0';
		str++;
	}
	return (value * sign);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char	string[20][30];
// 	int			i;
// 	strcpy(string[0], "  542bd");
// 	strcpy(string[1], "\n\r\f-0897  ");
// 	strcpy(string[2], "gsfd+35");
// 	strcpy(string[3], "+000000485fg");
// 	strcpy(string[4],  "---+--+1234ab567");
// 	strcpy(string[5],  "");
// 	strcpy(string[6],  "+++--354200");
// 	strcpy(string[7],  "345-223");
// 	for(i = 0; i <= 7; i++)
// 		printf("%i\n", ft_atoi(string[i]));
// }