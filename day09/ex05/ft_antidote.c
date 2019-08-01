/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aksuleim <aksuleim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 13:46:08 by aksuleim          #+#    #+#             */
/*   Updated: 2019/07/19 13:50:31 by aksuleim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_antidote(int i, int j, int k)
{
	if (i > j && j > k)
		return (j);
	if (i > k && k > j)
		return (k);
	if (j > i && i > k)
		return (i);
	if (j > k && k > i)
		return (k);
	if (k > i && i > j)
		return (i);
	if (k > j && j > i)
		return (j);
}
