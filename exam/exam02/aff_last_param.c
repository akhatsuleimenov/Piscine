/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aksuleim <aksuleim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 18:52:04 by aksuleim          #+#    #+#             */
/*   Updated: 2019/07/25 18:59:34 by aksuleim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int	i;
	int j;

	j = 0;
	i = 0;
	while (j < argc)
		j++;
	if (argc < 2)
		write(1,"\n", 1);
	else
	{
		while (argv[j - 1][i])
		{
			write(1, &argv[j - 1][i], 1);
			i++;
		}
		write(1,"\n", 1);
	}
	return (0);
}
