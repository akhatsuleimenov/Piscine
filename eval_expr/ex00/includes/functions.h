/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aksuleim <aksuleim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 23:24:03 by aksuleim          #+#    #+#             */
/*   Updated: 2019/07/28 23:29:07 by aksuleim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H

char	*remove_whitespaces(char *str);
int		parse_parenthesis(char **str);
int		primary_expression(char **str);
int		multiplicate_expression(char **str);
int		eval_expr(char *str);
int		do_op(int nb1, int nb2, char op);
void	ft_putchar(char c);
int		ft_strlen(char *str);
void	ft_putnbr(int nbr);

#endif