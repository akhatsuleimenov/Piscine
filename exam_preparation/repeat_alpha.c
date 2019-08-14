/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aksuleim <aksuleim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 19:21:15 by aksuleim          #+#    #+#             */
/*   Updated: 2019/07/25 19:34:58 by aksuleim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;
	int j;
	int n;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				n = argv[1][i] - 64;
			else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				n = argv[1][i] - 96;
			else
				write(1, &argv[1][i], 1);
			while (n > 0)
			{
				write(1, &argv[1][i], 1);
				n--;
			}
			i++;
		}
		write (1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}
