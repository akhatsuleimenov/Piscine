/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aksuleim <aksuleim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 20:55:36 by aksuleim          #+#    #+#             */
/*   Updated: 2019/07/18 11:25:53 by aksuleim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	char	*array;
	int		size;

	i = 0;
	size = 0;
	while (++i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
			j++;
		size += j;
	}
	array = (char*)malloc(sizeof(char) * (size));
	i = 0;
	size = 0;
	while (++i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
			array[size++] = argv[i][j++];
		array[size++] = i != (argc - 1) ? '\n' : '\0';
	}
	return (array);
}
