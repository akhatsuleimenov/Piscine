/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aksuleim <aksuleim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 15:10:26 by aksuleim          #+#    #+#             */
/*   Updated: 2019/07/29 12:47:58 by aksuleim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		prime(char **argv)
{
	int i;

	i = 3;
	if (*argv[1] < '2')
		return (0);
	if (*argv[1] == '2')
		return (1);
	if ((*argv[1] % 2) == 0)
		return (0);
	while (i < (*argv[1] / 2))
	{
		if (*argv[1] % i == 0)
			return (0);
		i++;
	}
}


int		main(int argc, char **argv)
{
	if (argc == 2)
		printf("%d", prime(argv));
	write (1, "\n", 1);
	return (0);
}