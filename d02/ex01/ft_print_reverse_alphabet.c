/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aksuleim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 16:14:32 by aksuleim          #+#    #+#             */
/*   Updated: 2019/07/11 21:02:22 by aksuleim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char ch;
	int i;

	ch = 'z';
	i = 0;
	while (i < 26)
	{
		ft_putchar(ch);
		ch--;
		i++;
	}
}

int		main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}:
