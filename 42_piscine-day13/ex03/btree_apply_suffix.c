/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aksuleim <aksuleim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 12:22:14 by aksuleim          #+#    #+#             */
/*   Updated: 2019/07/26 12:22:39 by aksuleim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_aplly_suffix(t_btree *root, void (*applyf)(void *))
{
	if (!root)
		return ;
	btree_aplly_suffix(root->left, applyf);
	btree_aplly_suffix(root->right, applyf);
	applyf(root->item);
}
