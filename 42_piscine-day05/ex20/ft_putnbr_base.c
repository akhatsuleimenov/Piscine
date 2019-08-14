/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aksuleim <aksuleim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 22:35:09 by aksuleim          #+#    #+#             */
/*   Updated: 2019/07/18 12:58:43 by aksuleim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c)
{
	write(1, &c, 1);
}

int		base_system(char *base)
{
	int i;
	int z;

	i = 0;
	z = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		z = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		while (base[z])
		{
			if (base[i] == base[z])
				return (0);
			z++;
		}
		i++;
	}
	return (1);
}

int		ft_putnbr_base(int nbr, char *base)
{
	int n;
	int base_size;
	int new_number[100];

	n = 0;
	base_size = 0;
	if (base_system(base))
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr = -nbr;
		}
		while (base[base_size])
			base_size++;
		while (nbr)
		{
			new_number[n] = nbr % base_size;
			nbr = nbr / base_size;
			n++;
		}
		while (--n >= 0)
			ft_putchar(base[new_number[n]]);
	}
	return (0);
}

int main()
{
	ft_putnbr_base(40, "0123456789abcdef");
}