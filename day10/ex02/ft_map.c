/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aksuleim <aksuleim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 15:00:45 by aksuleim          #+#    #+#             */
/*   Updated: 2019/07/21 15:49:52 by aksuleim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *array;

	i = -1;
	array = (int*)malloc(sizeof(int) * length);
	while (++i < length)
		array[i] = (*f)(tab[i]);
	return (array);
}
