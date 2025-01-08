/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahernan <pahernan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 11:45:23 by pahernan          #+#    #+#             */
/*   Updated: 2024/12/11 11:55:24 by pahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*to_find == '\0')
		return ((char *)str);
	while (str[i] != '\0' && n > 0)
	{
		while (str[i + j] == to_find[j] && n > 0)
		{
			j++;
			n--;
		}
		if (j > 0 && to_find[j] != '\0')
			return (NULL);
		if (to_find[j] == '\0')
			return ((char *)&str[i]);
		i++;
		n--;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	  
	char *a = "lorem ipsum dolor sit amet";

	char *b = "dolor";


	printf("%s\n", ft_strnstr(a, b, 15));
    return (0);
}*/