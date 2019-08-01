/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aksuleim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 19:01:30 by aksuleim          #+#    #+#             */
/*   Updated: 2019/07/16 14:07:21 by aksuleim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((i == 0 || str[i - 1] == ' ' || str[i - 1] == '-' ||
					str[i - 1] == '+') && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= ('a' - 'A');
		else if (!(i == 0 || str[i - 1] == ' ') &&
				(str[i] >= 'A' && str[i] <= 'Z'))
			str[i] += ('a' - 'A');
		i++;
	}
	return (str);
}
