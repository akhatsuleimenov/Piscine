/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aksuleim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 16:14:32 by aksuleim          #+#    #+#             */
/*   Updated: 2019/07/11 23:03:35 by aksuleim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	int		i;
	char	ch;

	i = 0;
	ch = 'z';
	while (i < 26)
	{
		ft_putchar(ch);
		ch--;
		i++;
	}
}
