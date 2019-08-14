/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aksuleim <aksuleim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 16:53:26 by aksuleim          #+#    #+#             */
/*   Updated: 2019/07/23 19:36:41 by aksuleim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
int		ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_strlen(char *str);

int		ft_atoi(char *str)
{
	int res;
	int i;
	int s;

	res = 0;
	i = 0;
	s = 1;
	while (*str && (str[i] == ' ' || str[i] == '+' ||
				str[i] < 32 || str[i] > 126))
		i++;
	if (str[i] == '-')
	{
		s *= -1;
		i++;
	}
	while (str[i] != '\0' && (str[i] >= 48 && str[i] <= 57))
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * s);
}

int		main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (ft_strlen(argv[2]) != 1)
			return (ft_putstr("0\n"));
		else if (argv[2][0] == '/' && argv[3][0] == '0')
			return (ft_putstr("Stop : division by zero\n"));
		else if (argv[2][0] == '%' && argv[3][0] == '0')
			return (ft_putstr("Stop : modulus by zero\n"));
		else if (argv[2][0] == '+')
			ft_putnbr(ft_atoi(&argv[1][0]) + ft_atoi(&argv[3][0]));
		else if (argv[2][0] == '-')
			ft_putnbr(ft_atoi(&argv[1][0]) - ft_atoi(&argv[3][0]));
		else if (argv[2][0] == '/')
			ft_putnbr(ft_atoi(&argv[1][0]) / ft_atoi(&argv[3][0]));
		else if (argv[2][0] == '*')
			ft_putnbr(ft_atoi(&argv[1][0]) * ft_atoi(&argv[3][0]));
		else if (argv[2][0] == '%')
			ft_putnbr(ft_atoi(&argv[1][0]) % ft_atoi(&argv[3][0]));
		else
			ft_putchar('0');
	}
	else
		return (0);
	ft_putchar('\n');
}
