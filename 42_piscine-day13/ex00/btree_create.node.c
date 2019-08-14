/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create.node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aksuleim <aksuleim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 23:23:31 by aksuleim          #+#    #+#             */
/*   Updated: 2019/07/26 12:58:27 by aksuleim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree *new;

	new = NULL;
	new = (t_btree*)malloc(sizeof(t_btree));
	if (new)
	{
		new->left = 0;
		new->right = 0;
		new->item = item;
	}
	return (new);
}
