/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aksuleim <aksuleim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 14:53:43 by aksuleim          #+#    #+#             */
/*   Updated: 2019/07/29 12:48:01 by aksuleim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putnbr(int nb)
{
	int i;

	i = 1;
	if (nb < 0)
	{
		ft_putchar('-');
		i = -1;
	}
	if (nb / 10 != 0)
		ft_putnbr(nb / 10 * i);
	ft_putchar(nb % 10 * i + '0');
}


char	*ft_itoa(int nbr)
{

}