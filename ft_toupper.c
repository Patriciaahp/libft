/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahernan <pahernan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:33:27 by pahernan          #+#    #+#             */
/*   Updated: 2024/12/10 10:13:47 by pahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32 ;
		return (c);
	}
	return (c);
}
/*#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char a = 'C';
    char b = 'C';

    int result = ft_toupper(a);
    int result2 = toupper(b);
    printf("%d\n", result);
    printf("%d\n", result2);
        printf("%c\n", a);
    printf("%c\n", b);
}
*/
