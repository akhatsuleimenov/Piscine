/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aksuleim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 14:56:38 by aksuleim          #+#    #+#             */
/*   Updated: 2019/07/17 15:09:27 by aksuleim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int *array;

	i = 0;
	if (min >= max)
		*range = ((void *)0);
	else
	{
		array = (int*)malloc(sizeof(int) * (max - min));
		while (i < (max - min))
		{
			array[i] = min + i;
			i++;
		}
		*range = array;
	}
	return (i);
}
