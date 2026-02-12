/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_fibonacci.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/28 12:48:44 by mmelo         #+#    #+#                 */
/*   Updated: 2026/01/28 14:27:15 by mmelo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
// #include <stdio.h>
// int main()
// {
// 	int fibonacci[] = {0,1,1,2,3,5,8,13,21,34,55,89,144,233,377,
// 		610,987,1597,2584,4181};
// 	int	i;
// 	int	my_fib;
// 	for (i = -5; i < 20; i++)
// 	{
// 		my_fib = ft_fibonacci(i);
// 		if (i >= 0)
// 			printf("F_%i: %i -> %i\n", i, my_fib, my_fib == fibonacci[i]);
// 		else
// 			printf("F_%i: %i -> %i\n", i, my_fib, my_fib == -1);
// 	}
// }