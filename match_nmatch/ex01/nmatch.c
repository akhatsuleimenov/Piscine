/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aksuleim <aksuleim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 22:28:25 by aksuleim          #+#    #+#             */
/*   Updated: 2019/07/20 20:34:53 by aksuleim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		match(char *s1, char *s2)
{
	if (!*s1 && !*s2)
		return (1);
	else if (*s1 && *s2 == '*')
		return (match(s1 + 1, s2) + match(s1, s2 + 1));
	else if (!*s1 && *s2 == '*')
		return (match(s1, s2 + 1));
	else if (*s1 == *s2)
		return (match(s1 + 1, s2 + 1));
	return (0);
}
