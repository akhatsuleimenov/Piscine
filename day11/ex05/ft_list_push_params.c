/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aksuleim <aksuleim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 23:20:25 by aksuleim          #+#    #+#             */
/*   Updated: 2019/07/24 13:36:14 by aksuleim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*list;
	t_list	*temp;
	int		i;

	if (ac < 1)
		return (NULL);
	i = 0;
	temp = NULL;
	while (i < ac)
	{
		list = ft_create_elem(av[i]);
		list->next = temp;
		temp = list;
		i++;
	}
	return (list);
}
