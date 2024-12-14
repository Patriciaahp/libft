/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahernan <pahernan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:23:26 by pahernan          #+#    #+#             */
/*   Updated: 2024/12/11 09:14:58 by pahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"*/
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (c);
	}
	return (0);
}
/*#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char a = 127;

    int result = ft_isprint(a);
    int result2 = isprint(a);
    printf("%d\n", result);
    printf("%d\n", result2);
}
*/
