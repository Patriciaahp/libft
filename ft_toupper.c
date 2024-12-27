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

/*#include "libft.h"*/
int	ft_toupper(char a)
{
	if (a >= 'a' && a <= 'z')
	{
		a = a - 32 ;
		return (a);
	}
	return (a);
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
