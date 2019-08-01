/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aksuleim <aksuleim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 15:02:54 by aksuleim          #+#    #+#             */
/*   Updated: 2019/07/19 15:09:33 by aksuleim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(void)
{
	char min;
	char maj;
	int i;

	i = 0;
	min = 'a';
	maj = 'B';
	while ( i <= 12)
	{
		write(1, &min, 1);
		write(1, &maj, 1);
		min += 2;
		maj += 2;
		i++;
	}
	write(1, "\n", 1);
	return (0);
}