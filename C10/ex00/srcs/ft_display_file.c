/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_display_file.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmelo <mmelo@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/07 18:12:26 by mmelo         #+#    #+#                 */
/*   Updated: 2026/02/10 16:35:46 by mmelo         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int	is_error(int argc)
{
	if (argc <= 1)
	{
		ft_putstr("File name missing.\n");
		return (1);
	}
	else if (argc != 2)
	{
		ft_putstr("Too many arguments.\n");
		return (1);
	}
	return (0);
}


int main(int argc, char **argv)
{
	int fd;
	char	buf[1000];
	int n;
	
	n = 1;
	if (is_error(argc))
		return (0);
	fd = open(argv[1], O_RDONLY);
	while (n)
	{
		n = read(fd, buf, 999);
		buf[n] = '\0';
		ft_putstr(buf);
	}
}