/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aksuleim <aksuleim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 18:54:16 by aksuleim          #+#    #+#             */
/*   Updated: 2019/08/01 14:34:55 by aksuleim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int		ft_putnbr(int nb)
{
	int nbr;

	nbr = nb;
	if (nbr >= 16)
		ft_putnbr(nbr / 16);
	if (nbr % 16 >= 10)
		ft_putchar(nbr % 16 - 10 + 97);
	else 
		ft_putchar (nbr % 16 + 48);
}

int ft_atoi(char *str)
{
	int i;
	int nbr;
	int sign;

	i = 0;
	nbr = 0;
	sign = 1;
	if (!str[i])
		return (0);
	while (str[i] == ' ' || (*str >= 9 && *str <= 13))
		i += 1;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign *= -1;
	while (str[i] && (str[i] >= '0' && '9' >= str[i]))
		nbr = (nbr * 10) + str[i++] - '0';
	return (nbr * sign);
}

int main(int argc, char *argv[])
{
	ft_putnbr(5156454);
	write(1, "\n", 1);
	return (0);
}
