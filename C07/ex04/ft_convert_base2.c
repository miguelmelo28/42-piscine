/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_convert_base2.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/04 13:30:25 by mmelo         #+#    #+#                 */
/*   Updated: 2026/02/07 14:23:53 by mmelo         ########   odam.nl         */
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

long	ft_atoi_base(char *str, char *base)
{
	long	value;
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
