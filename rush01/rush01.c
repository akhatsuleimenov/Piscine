/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aksuleim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 15:17:46 by aksuleim          #+#    #+#             */
/*   Updated: 2019/07/13 16:50:53 by aksuleim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
}

int rush(int x, int y)
{
	int count;
	int count2;

	count = x - 1;
	count2 = y - 1;
	ft_putchar(47);
	while (--count > 0)
		ft_putchar(42);
	ft_putchar(92);
	ft_putchar('\n');
	ft_putchar(42);
	while (count > 0)
		ft_putchar(32);
	ft_putchar(92);
}



int 	main()
{
	printf("%d", rush(5,3));
}
