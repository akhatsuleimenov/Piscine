/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aksuleim <aksuleim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 18:45:27 by aksuleim          #+#    #+#             */
/*   Updated: 2019/07/25 18:50:59 by aksuleim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc < 2)
		write(1,"\n", 1);
	else
	{
		while (argv[1][i])
		{
			write(1, &argv[1][i], 1);
			i++;
		}
		write(1,"\n", 1);
	}
	return (0);
}

