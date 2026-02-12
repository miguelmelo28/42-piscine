/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   do-op.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/07 20:24:13 by mmelo         #+#    #+#                 */
/*   Updated: 2026/02/09 14:56:39 by mmelo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	func_array(int (*arr[5])(int, int))
{
	arr[0] = &sum;
	arr[1] = &subtraction;
	arr[2] = &division;
	arr[3] = &multiplication;
	arr[4] = &modulo;
}

int	operator(char	*op)
{
	if (op[1])
		return (-1);
	if (*op == '+')
		return (0);
	if (*op == '-')
		return (1);
	if (*op == '/')
		return (2);
	if (*op == '*')
		return (3);
	if (*op == '%')
		return (4);
	return (-1);
}

int	is_division_error(int op_index)
{
	if (op_index == 2)
	{
		ft_putstr("Stop : division by zero\n");
		return (1);
	}
	if (op_index == 4)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	(*arr[5])(int, int);
	int	result;
	int	n1;
	int	n2;
	int	op_index;

	if (argc != 4)
		return (0);
	n1 = ft_atoi(argv[1]);
	n2 = ft_atoi(argv[3]);
	func_array(arr);
	op_index = operator(argv[2]);
	if (op_index == -1)
	{
		ft_putstr("0\n");
		return (0);
	}
	if (n2 == 0 && (is_division_error(op_index)))
		return (0);
	result = (*(arr[op_index]))(n1, n2);
	ft_putnbr(result);
	ft_putstr("\n");
	return (0);
}
