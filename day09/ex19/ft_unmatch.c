/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aksuleim <aksuleim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 16:24:34 by aksuleim          #+#    #+#             */
/*   Updated: 2019/07/19 16:52:38 by aksuleim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_unmatch(int *tab, int length)
{
	int i;
	int index;
	int extra;

	index = 0;
	while (index < length)
	{
		i = 0;
		extra = 0;
		while (i < length && !extra)
		{
			if (i != index)
				extra = (tab[i] == tab[index]) ? 1 : 0;
			i += 1;
		}
		if (!extra)
			return (tab[index]);
		index += 1;
	}
	return (tab[index]);
}
