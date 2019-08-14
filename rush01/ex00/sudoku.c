/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aksuleim <aksuleim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 22:50:31 by aksuleim          #+#    #+#             */
/*   Updated: 2019/07/21 23:20:50 by aksuleim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	g_sudoku[9][9];
char	winning_board[9][9];
int		g_error;

int		sme_column(int y, int num);
int		sme_row(int x, int num);
int		sme_box(int y, int x, int num);
int		solve_sudoku(int y, int x, int temp_x, int temp_y);
int		put_sudoku(char **input);
int		print_sudoku(int forced);
int		solve_sudoku_2(int y, int x);

int		main(int argc, char **argv)
{
	if (argc == 10)
	{
		if (put_sudoku(argv) == 1)
		{
			solve_sudoku(0, 0, 0, 0);
			if (g_error != 1)
				write(1, "Error\n", 6);
			else
				print_sudoku(2);
		}
		else
		{
			write(1, "Error\n", 6);
			return (0);
		}
	}
	return (0);
}

int		print_sudoku(int forced)
{
	int i;
	int	j;
	int line;

	i = -1;
	g_error++;
	if (!forced && g_error == 0)
	{
		while (++i < 9)
		{
			j = -1;
			while (++j < 9)
				winning_board[i][j] = g_sudoku[i][j];
		}
	}
	else if (forced)
	{
		while (++i < 9)
		{
			j = -1;
			line = -1;
			while (++j < 9)
			{
				write(1, &g_sudoku[i][j], 1);
				if (++line < 8)
					write(1, " ", 1);
			}
			write(1, "\n", 1);
		}
	}
	return (1);
}

int		put_sudoku(char **input)
{
	int	x;
	int y;
	int count;

	count = 0;
	y = 1;
	while (y < 10)
	{
		x = 0;
		while (x < 9)
		{
			if (input[y][x] > 47 && input[y][x] < 58)
				count++;
			g_sudoku[y - 1][x] = input[y][x];
			x++;	
		}
		y++;
	}
	if (count < 17)
		return (0);
	else
		return (1);
}

int		solve_sudoku(int y, int x, int temp_y, int temp_x)
{
	int num;

	num = 0;
	solve_sudoku_2(y, x);
	if (g_sudoku[y][x] == '.')
	{
		while (++num < 10)
		{
			if (!sme_box(y, x, num) && !sme_row(x, num) && !sme_column(y, num))
			{
				g_sudoku[y][x] = num + '0';
				if (x == 8 && y == 8)
					return (print_sudoku(0));
				if (x < 8)
					temp_x = x + 1;
				else if (y < 8 && (temp_x = 0))
					temp_y = y + 1;
				if (solve_sudoku(temp_y, temp_x, 0, 0))
					return (1);
			}
		}
		g_sudoku[y][x] = '.';
	}
	return (0);
}

int		solve_sudoku_2(int y, int x)
{
	if (g_sudoku[y][x] != '.')
	{
		if (x == 8 && y == 8)
			return (print_sudoku(0));
		if (x < 8)
			x++;
		else if (y++ < 8)
			x = 0;
		if (solve_sudoku(y, x, 0, 0))
			return (1);
		else
			return (0);
	}
	return (0);
}