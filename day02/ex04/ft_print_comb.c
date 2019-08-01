/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aksuleim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 08:22:54 by aksuleim          #+#    #+#             */
/*   Updated: 2019/07/12 11:22:47 by aksuleim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	int comb[3];

	comb[0] = 48;
	while (comb[0] <= 57)
	{
		comb[1] = comb[0] + 1;
		while (comb[1] <= 57)
		{
			comb[2] = comb[1] + 1;
			while (comb[2] <= 57)
			{
				ft_putchar(comb[0]);
				ft_putchar(comb[1]);
				ft_putchar(comb[2]);
				if (!(comb[0] == 55 && comb[1] == 56 && comb[2] ==57))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				comb[2]++;
			}
			comb[1]++;
		}
		comb[0]++;
	}
}
