/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aksuleim <aksuleim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 11:19:31 by aksuleim          #+#    #+#             */
/*   Updated: 2019/07/25 13:14:49 by aksuleim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);

int		main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[255];

	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
		{
			ft_putstr("open() error\n");
			return (1);
		}
		ret = read(fd, buf, 255);
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	else if (argc > 2)
		ft_putstr("Too many arguments.\n");
	else
		ft_putstr("File name missing.\n");
	return (0);
}
