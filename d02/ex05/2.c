/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aksuleim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 17:33:14 by aksuleim          #+#    #+#             */
/*   Updated: 2019/07/11 17:38:24 by aksuleim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int a;

	a = 0;
	while (a <= 9899)
	{
		ft_putchar((a / 100) + '0');
		ft_putchar(' ');
		ft_putchar((a % 100) + '0');
		ft_putchar(',');
		ft_putchar(' ');
		a++;
	}
}

int		main(void)
{
	ft_print_comb2();
	return (0);
}
