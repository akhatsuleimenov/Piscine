/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aksuleim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 08:22:54 by aksuleim          #+#    #+#             */
/*   Updated: 2019/07/11 23:34:50 by aksuleim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int comb[3];

	comb[0] = '0';
	while (comb[0] <= '7')
	{
		comb[1] = comb[0] + 1;
		while (comb[1] <= '8')
		{
			comb[2] = comb[1] + 1;
			while (comb[2] <= '9')
			{
				ft_putchar(comb[0]);
				ft_putchar(comb[1]);
				ft_putchar(comb[2]++);
				if (comb[0] != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				comb[1]++;
			}
			comb[0]++;
		}
	}
}

int		main(void)
{
	ft_print_comb();
	return (0);
}
