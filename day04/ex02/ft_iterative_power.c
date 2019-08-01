/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aksuleim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 09:07:15 by aksuleim          #+#    #+#             */
/*   Updated: 2019/07/13 19:26:20 by aksuleim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int constant;

	constant = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		while (power > 1)
		{
			nb = constant * nb;
			power--;
		}
	return (nb);
}
