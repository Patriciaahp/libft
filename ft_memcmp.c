/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahernan <pahernan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 10:09:00 by pahernan          #+#    #+#             */
/*   Updated: 2024/12/11 11:49:54 by pahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int	i;

	i = 0;
	while ((((char *)s1)[i] != 0 || ((char *)s2)[i] != 0) && n > 0)
	{
		if (((char *)s1)[i] != ((char *)s2)[i])
		{
			return (((char *)s1)[i] - ((char *)s2)[i]);
		}
		i++;
		n--;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[20] = "algo";
	char str2[20] = "algoa";
	
	printf("%d\n", memcmp(str, str2, 5));
	printf("%d\n", ft_memcmp(str, str2, 5));
		printf("%d\n", memcmp(str, str2, 4));
	printf("%d\n", ft_memcmp(str, str2, 4));
}*/