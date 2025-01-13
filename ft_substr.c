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
	char				*sub;
	unsigned int		i;
	unsigned int		j;

	i = start;
	j = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	sub = malloc(sizeof(char) * len + 1);
	if (!sub)
		return (NULL);
	while (len > 0)
	{
		sub[j] = s[i];
		i++;
		j++;
		len--;
	}
	sub[j] = '\0';
	return (sub);
}

/*#include <stdio.h>
int main (void)
{
	char *str1 = "holahola";
	int start = 2;
	size_t len = 3;

	printf("%s\n", ft_substr(str1, start, len));

	char	str[] = "lorem ipsum dolor sit amet";
	char	*strsub;

	printf("%s\n", strsub = ft_substr(str, 0, 10));	
	char	str2[] = "lorem ipsum dolor sit amet";
	char	*strsub2;

	printf("%s\n", strsub2 = ft_substr(str2, 7, 10));

	
}*/