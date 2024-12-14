/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahernan <pahernan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 13:08:13 by pahernan          #+#    #+#             */
/*   Updated: 2024/12/11 11:54:01 by pahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"*/
int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}
/*#include <stdio.h>
#include <string.h>
int main(void)
{
    char *a = "sdfgh";

    int result = ft_strlen(a);
    int result2 = strlen(a);
    printf("%d\n", result);
    printf("%d\n", result2);
}
*/