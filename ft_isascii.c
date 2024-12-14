/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahernan <pahernan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:17:30 by pahernan          #+#    #+#             */
/*   Updated: 2024/12/12 11:11:52 by pahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"*/
int	ft_isascii(int c)
{
	if (c <= 127 && c >= 0)
	{
		return (1);
	}
	return (0);
}
/*#include <stdio.h>
#include <ctype.h>
int main(void)
{
    int a = 128;

    int result = ft_isascii(a);
    int result2 = isascii(a);
    printf("%d\n", result);
    printf("%d\n", result2);
}
*/