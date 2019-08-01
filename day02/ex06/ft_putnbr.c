/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aksuleim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 16:44:34 by aksuleim          #+#    #+#             */
/*   Updated: 2019/07/11 23:24:03 by aksuleim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int i;

	i = nb;
	if (i == -2147483648)
	{
		ft_putnbr('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	if (i < 0)
	{
		ft_putchar('-');
		i = i * (-1);
	}
	if (i >= 10)
	{
		ft_putnbr(i / 10);
		ft_putnbr(i % 10);
	}
	else
	{
		ft_putchar(i + '0');
	}
}
