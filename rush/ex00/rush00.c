/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpastukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 16:29:10 by kpastukh          #+#    #+#             */
/*   Updated: 2019/07/14 22:46:02 by aksuleim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	print_ln(char left_corner, char middle, char right_corner, int width);

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
		return ;
	if (x > 1 || y > 1)
	{
		print_ln('o', '-', 'o', x);
		while (y > 2)
		{
			print_ln('|', ' ', '|', x);
			y--;
		}
		if (y != 1)
			print_ln('o', '-', 'o', x);
	}
	else if (!(x <= 0) && !(y <= 0))
		print_ln('o', '-', 'o', x);
}

void	print_ln(char left_corner, char middle, char right_corner, int width)
{
	if (width == 1)
	{
		ft_putchar(left_corner);
		ft_putchar('\n');
	}
	else
	{
		ft_putchar(left_corner);
		while (width-- > 2)
			ft_putchar(middle);
		ft_putchar(right_corner);
		ft_putchar('\n');
	}
}
