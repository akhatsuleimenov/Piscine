/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aksuleim <aksuleim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 14:51:48 by aksuleim          #+#    #+#             */
/*   Updated: 2019/07/24 15:01:25 by aksuleim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *element;

	if (*begin_list && *begin_list)
	{
		element = ft_create_elem(data);
		element->next = *begin_list;
		*begin_list = element;
	}
	else
		*begin_list = ft_create_elem(data);
}
