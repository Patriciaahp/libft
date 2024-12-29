/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahernan <pahernan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:47:44 by pahernan          #+#    #+#             */
/*   Updated: 2024/12/05 15:41:52 by pahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = c + 32 ;
		return (c);
	}
	return (c);
}
/*#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char a = 'Z';
    char b = 'Z';

    int result = ft_tolower(a);
    int result2 = tolower(b);
    printf("%d\n", result);
    printf("%d\n", result2);
        printf("%c\n", a);
    printf("%c\n", b);
}*/