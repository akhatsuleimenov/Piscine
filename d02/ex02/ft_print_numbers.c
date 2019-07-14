/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aksuleim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 10:52:31 by aksuleim          #+#    #+#             */
/*   Updated: 2019/07/11 12:49:14 by aksuleim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int a;

	a = 0;
	while (a <= 9)
	{
		ft_putchar(a + '0');
		a++;
	}
}

int		main(void)
{
	ft_print_numbers();
	return (0);
}
