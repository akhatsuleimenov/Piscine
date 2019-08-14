/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aksuleim <aksuleim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 14:35:19 by aksuleim          #+#    #+#             */
/*   Updated: 2019/07/26 14:47:19 by aksuleim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		length;
	char	*strcpy;

	length = 0;
	i = -1;
	while (src[length])
		length++;
	strcpy = malloc(length + 1);
	if (strcpy != NULL)
		while (src[++i])
			strcpy[i] = src[i];
	strcpy[i] = '\0';
	return (strcpy);
}

int main(void) {
	char *greet = "Salut";
	char *test1 = "Gonna pass this test, even if I gotta dup!\n";
	char *test2 = ft_strdup(test1);

	printf("%s\n", ft_strdup(greet));
	printf("test1: %s", test1);
	printf("test2: %s", test2);
	return 0;
}
