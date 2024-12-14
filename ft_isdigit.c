/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahernan <pahernan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 13:53:43 by pahernan          #+#    #+#             */
/*   Updated: 2024/12/11 09:14:36 by pahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"*/
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (c);
	}
	return (0);
}
/*#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char a = '4';

    int result = ft_isdigit(a);
    int result2 = isdigit(a);
    printf("%d\n", result);
    printf("%d\n", result2);
}
*/
