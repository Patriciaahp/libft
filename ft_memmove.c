/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahernan <pahernan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 10:54:41 by pahernan          #+#    #+#             */
/*   Updated: 2024/12/14 09:29:34 by pahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;

	i = 0;
	if (!dest && !src )
		return (dest);
	if (((char *)dest) < ((char *)src))
	{
		while ((((char *)dest)[i] != 0 || ((char *)src)[i] != 0) && n > 0)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
			n--;
		}
	}
	else
	{
		i = n - 1;
		while (i < n)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i--;
		}
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int main (void)
{
 char str[] = "ABCDEFGHIJ";

  
    printf("Antes de memmove: %s\n", str);  


    ft_memmove(str + 2, str, 6);


    printf("Después de memmove: %s\n", str);  

}*/