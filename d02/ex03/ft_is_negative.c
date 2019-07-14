/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aksuleim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 23:52:11 by aksuleim          #+#    #+#             */
/*   Updated: 2019/07/10 23:53:38 by aksuleim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_is_negative(int n)
{
    if(n >= 0)
        {
                ft_putchar('P');
        }
        else
        {
                ft_putchar('N');
        }
}

int     main(void)
{
    ft_is_negative(5);
    ft_is_negative(0);
	ft_is_negative(-5);
    return (0);
}
