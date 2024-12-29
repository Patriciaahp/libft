/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahernan <pahernan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:06:50 by pahernan          #+#    #+#             */
/*   Updated: 2024/12/11 09:13:45 by pahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
	{
		return (c);
	}
	return (0);
}
/*#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char a = '3';

    int result = ft_isalnum(a);
    int result2 = isalnum(a);
    printf("%d\n", result);
    printf("%d\n", result2);
}
*/