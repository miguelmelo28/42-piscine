/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi_base.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/29 17:47:58 by mmelo         #+#    #+#                 */
/*   Updated: 2026/01/30 17:27:17 by mmelo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	is_in_base(char d, char *base)
{
	int		i;

	i = 0;
	while (base[i])
	{
		if (base[i] == d)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_valid_base(char *str)
{
	int		n;
	int		i;

	n = 0;
	while (*str)
	{
		if (*str == '+' || *str == '-')
			return (0);
		i = 0;
		while (str[++i])
		{
			if (str[i] == *str)
				return (0);
		}
		str++;
		n++;
	}
	return (n);
}

int	ft_atoi_base(char *str, char *base)
{
	int		value;
	int		sign;
	int		base_number;

	base_number = ft_valid_base(base);
	if (base_number <= 1)
		return (0);
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
	while (is_in_base(*str, base) >= 0)
	{
		value = base_number * value + is_in_base(*str, base);
		str++;
	}
	return (value * sign);
}
//#include <stdio.h>
// #include <string.h>
// int main()
// {	char	hexadecimal[] = "0123456789ABCDEF";
// 	//char	decimal[] = "0123456789";
// 	char	string[20][30];
// 	int		i;
// 	strcpy(string[0], "  542bd");
// 	strcpy(string[1], "\n\r\f-0897  ");
// 	strcpy(string[2], "gsfd+35");
// 	strcpy(string[3], "+000000485fg");
// 	strcpy(string[4],  "---+--+ABCD67");
// 	strcpy(string[5],  "");
// 	strcpy(string[6],  "+++--354200");
// 	strcpy(string[7],  "345-223");
// 	for(i = 0; i <= 7; i++)
// 		printf("%i\n", ft_atoi_base(string[i], hexadecimal));
// }