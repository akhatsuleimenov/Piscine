/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aksuleim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 21:57:42 by aksuleim          #+#    #+#             */
/*   Updated: 2019/07/14 22:03:22 by aksuleim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
 
void	rush(int x, int y)
{
	char array[y][x];
	int row;
	int column;

	row = 0;
	while (row < y)
	{
		column = 0;
		while (column < x)
		{
			if ((row == 0 && column == 0) || (row == y - 1 && column == 0))
				array[row][column] = 'A';
			else if ((row == 0 && column == x - 1) || (row == y - 1 && column == x - 1))
				array[row][column] = 'C';
			else if (row == 0 || row == y - 1 || column == 0 || column == x - 1)
				array[row][column] = 'B';
			else
				array[row][column] = ' ';
			write(1, &array[row][column], 1);
			column++;
		}
		row++;
		write(1, "\n", 1);
	}
}

int	main(void)
{
	rush(5, 3);
	rush(2, 8);
	rush(1, 3);
	rush(5, 1);
	rush(1, 1);

}
