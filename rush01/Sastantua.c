/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aksuleim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 23:31:58 by aksuleim          #+#    #+#             */
/*   Updated: 2019/07/13 23:39:16 by aksuleim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

/*void	sastantua(int size);
{

}
*/
int main(void)
{
	int n;

	n = 7;
	while (n > 1 && n < 8)
    {

        for (int i = 0; i < n; i++)
        {

            for (int j = 0; j < n - 1 - i; j++)
            {
                printf(" ");
            }
            for (int j = 0; j < i + 1; j++)
            {
                printf("#"); 
            }
            printf("\n");
        }
    }
}
