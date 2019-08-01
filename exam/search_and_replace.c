/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aksuleim <aksuleim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 15:17:19 by aksuleim          #+#    #+#             */
/*   Updated: 2019/07/19 15:30:57 by aksuleim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_replace(char *str, char a, char b)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		{
			if (str[i] == a)
				ft_putchar(b);
			else
				ft_putchar(str[i]);
			i++;
		}
}

int		main(int argc, char **argv)
{
	if (argc == 4)
	{
		if(!(argv[2][1] != '\0' || argv[3][1] != '\0'))
			ft_replace(argv[1], argv[2][0], argv[3][0]);
	}
	ft_putchar('\n');
	return (0);
}
