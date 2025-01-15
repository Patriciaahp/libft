/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pahernan <pahernan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 10:08:54 by pahernan          #+#    #+#             */
/*   Updated: 2025/01/15 12:54:37 by pahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	int		i;
	int		j;
	int		k;
	int		l;
	int		length;
	int		z;

	if (!s1 || !set)
		return (NULL);

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	z = 1;
	length = 0;
	while (s1[length])
		length++;
	s2 = malloc(sizeof(char) * (length + 1));
	if (!s2)
		return (NULL);
	k = length;
	while (k >= 0)
	{		

		while (set[j] == ' ')
			j++;
		if ((s1[k] == set[j] || s1[k] == ' ' ) && k == length - z)
		{
			i++;
			j++;
			z++;
		}
	k--;
	}
	k=0;
	z = 0;
	while (k < length - i)
	{
		while (set[j] == ' ')
			j++;
		while (((s1[k] == set[j] || s1[k] == ' ' ) && z == 0) && k <= length - i)
				k++;
			s2[l] = s1[k];
				l++;
				k++;
				z++;
	}

	s2[l] = '\0';

	return (s2);
}

