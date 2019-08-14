/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aksuleim <aksuleim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 12:16:44 by aksuleim          #+#    #+#             */
/*   Updated: 2019/07/26 12:21:17 by aksuleim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_aplly_infix(t_btree *root, void (*applyf)(void *))
{
	if (!root)
		return ;
	btree_aplly_infix(root->left, applyf);
	applyf(root->item);
	btree_aplly_infix(root->right, applyf);
}
