/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aksuleim <aksuleim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 16:08:41 by aksuleim          #+#    #+#             */
/*   Updated: 2019/07/25 17:20:29 by aksuleim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

int		ft_strlen(char *str);

void	display(int count, char *files[])
{
	int		file;
	char	buffer[30720];
	int		i;
	ssize_t	bytes;
	char	*filename;

	i = 0;
	while (++i <= count)
	{
		filename = files[i];
		file = open(filename, O_RDWR);
		if (file < 0)
		{
			write(2, "cat: ", 5);
			write(2, filename, ft_strlen(filename));
			if (errno == EISDIR)
				write(1, ": Is a directory\n", 17);
			else if (errno == ENOENT || errno == ENOTDIR)
				write(1, ": No such file or directory\n", 28);
			continue;
		}
		while ((bytes = read(file, &buffer, 30720)))
			write(1, &buffer, bytes);
		close(file);
	}
}

void	empty(void)
{
	char	c;

	while (read(STDIN_FILENO, &c, 1) > 0)
		write(1, &c, 1);
}

int		main(int argc, char *argv[])
{
	if (argc == 1 || argv[1][0] == '-')
		empty();
	else
		display(argc - 1, argv);
	return (0);
}
