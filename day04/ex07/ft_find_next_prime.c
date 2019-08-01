/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aksuleim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 13:05:24 by aksuleim          #+#    #+#             */
/*   Updated: 2019/07/13 19:53:19 by aksuleim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;

	if (nb == 2 || nb % 2 == 0 || nb <= 1)
		return (nb == 2 ? 1 : 0);
	i = nb / 2 + 1;
	while (--i > 1)
		if (nb % i == 0)
			return (0);
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int i;

	if (nb < 2)
		nb = 2;
	i = nb;
	while (i < nb * 2)
	{
		if (ft_is_prime(i))
			return (i);
		i++;
	}
	return (0);
}
