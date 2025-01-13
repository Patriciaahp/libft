/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahernan <pahernan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 09:34:54 by pahernan          #+#    #+#             */
/*   Updated: 2024/12/11 11:49:06 by pahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (n > 0)
	{
		if (((char *)s)[i] == c)
		{
			return ((void *)&((unsigned char *)s)[i]);
		}
		i++;
		n--;
	}
	return (NULL);
}

/*#include <stdio.h>
#include <string.h>
int main (void)
{
	char str[20] = "algo";
	
	
	printf("%p\n", memchr(str, 'l', 3) );
	printf("%p\n", ft_memchr(str, 'l', 3) );
}

*/