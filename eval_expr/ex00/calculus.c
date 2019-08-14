/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aksuleim <aksuleim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 00:24:49 by aksuleim          #+#    #+#             */
/*   Updated: 2019/07/28 23:33:00 by aksuleim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	do_op(int nb1, int nb2, char operator)
{
	if (operator == '+')
		return (nb1 + nb2);
	else if (operator == '-')
		return (nb1 - nb2);
	else if (operator == '/')
		return (nb1 / nb2);
	else if (operator == '*')
		return (nb1 * nb2);
	else if (operator == '%')
		return (nb1 % nb2);
	return (0);
}