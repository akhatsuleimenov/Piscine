/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aksuleim <aksuleim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 12:23:46 by aksuleim          #+#    #+#             */
/*   Updated: 2019/07/26 12:59:49 by aksuleim         ###   ########.fr       */
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

void	btree_insert_data(t_btree **root, void *item, int (*cmpf)
		(void *, void *))
{
	t_btree	*new;

	if (!*root)
	{
		*root = btree_create_node(item);
		return ;
	}
	new = *root;
	if ((*cmpf)(item, new->item) < 0)
	{
		if (new->left)
			btree_insert_data(&new->left, item, cmpf);
		else
			new->left = btree_create_node(item);
	}
	else
	{
		if (new->right)
			btree_insert_data(&new->right, item, cmpf);
		else
			new->right = btree_create_node(item);
	}
}
