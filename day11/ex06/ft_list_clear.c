/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aksuleim <aksuleim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 13:43:35 by aksuleim          #+#    #+#             */
/*   Updated: 2019/07/24 18:35:08 by aksuleim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list *elem;

	if (*begin_list && *begin_list)
	{
		while (*begin_list)
		{
			elem = *begin_list;
			*begin_list = (*begin_list)->next;
			free(elem);
		}
		*begin_list = NULL;
	}
	else
		return ;
}
