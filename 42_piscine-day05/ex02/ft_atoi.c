/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aksuleim <aksuleim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 10:56:13 by aksuleim          #+#    #+#             */
/*   Updated: 2019/07/22 16:29:13 by aksuleim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	printf("%s", str);
	while (str[i] != '\0' && (str[i] >= 48 && str[i] <= 57))
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * s);
}

int		main(int argc, char **argv)
{
	printf("%d", ft_atoi(&argv[1][0]) + ft_atoi(&argv[2][0]));
}
