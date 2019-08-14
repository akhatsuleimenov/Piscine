/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aksuleim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 14:40:32 by aksuleim          #+#    #+#             */
/*   Updated: 2019/07/17 21:21:34 by aksuleim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	i;
	int *array;

	if (min >= max)
		return (0);
	array = (int*)malloc(sizeof(int) * (max - min));
	i = 0;
	while (i < (max - min))
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
