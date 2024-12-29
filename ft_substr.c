/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahernan <pahernan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 09:12:42 by pahernan          #+#    #+#             */
/*   Updated: 2024/12/16 11:39:12 by pahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start,
size_t len)
{
	char	*sub;
	int		i;
	int		j;

	i = start;
	j = 0;
	sub = malloc(sizeof(char) * len);
	while (len > 0)
	{
		sub[j] = s[i];
		i++;
		j++;
		len--;
	}
	return (sub);
}

/*#include <stdio.h>
int main (void)
{
	char *str = "holahola";
	int start = 2;
	size_t len = 3;

	printf("%s\n", ft_substr(str, start, len));

}*/